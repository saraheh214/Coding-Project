#include <cmath>
#include <fstream>
#include <matplot/matplot.h>
#include "preprocessing.h"

using namespace matplot;

int main(const int argc, const char* argv[]){

    if( argc != 2 ){
        std::cerr << "Need exactly two inputs" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector< Iris > iris_dataset = read_iris_dataset( argv[1] );

    print_iris_dataset( iris_dataset );

    // Create vectors of each data element
    std::vector<size_t> x_values;
    std::vector<float> sepal_len_vec;
    std::vector<float> sepal_wid_vec;
    std::vector<float> petal_len_vec;
    std::vector<float> petal_wid_vec;

    for( long unsigned int iter = 0; iter < iris_dataset.size(); ++iter ){

        x_values.push_back(iter);
        sepal_len_vec.push_back( iris_dataset.at(iter).get_sepal_length() ); // create vector for each parameter
        sepal_wid_vec.push_back( iris_dataset.at(iter).get_sepal_width() );
        petal_len_vec.push_back( iris_dataset.at(iter).get_petal_length() );
        petal_wid_vec.push_back( iris_dataset.at(iter).get_petal_width() );

    }

    // Pass the vectors to the plots
    auto the_plots = plot( x_values, sepal_len_vec, x_values, sepal_wid_vec, x_values, petal_len_vec, x_values, petal_wid_vec);

    title( "Ronald Fisher - Iris Data Set" );

    xlabel("x");
    ylabel("size");
    legend({"Sepal Length", "Sepal Width", "Petal Length", "Petal Width"});

    show();

    return EXIT_SUCCESS;

}