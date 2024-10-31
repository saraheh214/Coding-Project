from gpiozero import Motor

motor_left = Motor() # forward pin, backward pin
motor_right = Motor()

## speed control 
motor_left.foward()
motor_right.backward()