#include <stdio.h>

int main(){

// 3 registers stored as signed intergers
  int a = 10;
  int b = 25;
  int c = 19;

// the point (*) called p# will store the address of a
  int* p1 = &a; // integer pointer of where the value is located (address of a)
  int* p2 = &b; // p2 is address book, &a is address, a is who lives there
  int* p3 = &c;

  fprintf( stdout, "%d %p\n", a, &a); // printing a and address of a
  fprintf( stdout, "%d %p\n", b, &b);
  fprintf( stdout, "%d %p\n", c, &c);

  fprintf( stdout, "%d %p %p\n", *p1, p1, &p1); //*p1 prints value, p1 prints value at p1 which is just pointer, &p1 is address of pointer
  fprintf( stdout, "%x %p %p\n", *p2, p2, &p2); // p2 is just value 
  fprintf( stdout, "%x %p %p\n", *p3, p3, &p3);

  p1 = p2; // becomes the value of b, becomes address of b as well
  p3 = &a; 

  fprintf( stdout, "%d %p %p\n", *p1, p1, &p1); // same value as line 27 stored in diff pointers
  fprintf( stdout, "%x %p %p\n", *p2, p2, &p2); // same values as line 26 stored in diff pointers
  fprintf( stdout, "%x %p %p\n", *p3, p3, &p3);

  return 0;
}
