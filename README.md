# AutonomousCar
Autonomous Self Driving Car
Autonomous Self Driving Car, as the name suggests is a model of a car that runs without any human intervention and can depict the directions that it needs to follow by simply taking infromation from the environment, processing it and informing the Effectors to take the necessary action in order to move the car autonomously.


The build of this car is divided in 4 parts:

1. Constructing the car
2. Making the CNN model for direction detection
3. Programming the Arduino for motor control
4. Linking the CNN model with Arduino and camera and establishing serial communication between raspberry Pi and Arduino


This way the car takes the input from the environment as video, processes the video frame and depicts the direction of what the car must follow and then sends the Arduino a serial communication depicting what direction needs to be taken.
