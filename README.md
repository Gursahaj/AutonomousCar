# AutonomousCar
Autonomous Self Driving Car
Autonomous Self Driving Car, as the name suggests is a model of a car that runs without any human intervention and can depict the directions that it needs to follow by simply taking infromation from the environment, processing it and informing the Effectors to take the necessary action in order to move the car autonomously.

![IMAGE 1](https://github.com/Gursahaj/AutonomousCar/blob/master/Driving_circuit_program/20200427_141539.jpg)

The build of this car is divided in 4 parts:

1. Constructing the car
2. Making the CNN model for direction detection
3. Programming the Arduino for motor control
4. Linking the CNN model with Arduino and camera and establishing serial communication between raspberry Pi and Arduino


This way the car takes the input from the environment as video, processes the video frame and depicts the direction of what the car must follow and then sends the Arduino a serial communication depicting what direction needs to be taken.

![IMAGE 2](https://github.com/Gursahaj/AutonomousCar/blob/master/Driving_circuit_program/20200427_141816%20(1).jpg)

The Car was made to run on a modeled road physically in order to collect the images for database.
The car ran and the recorded video on the track for which it was built to run.

The video was recorded at 10 FPS and we exculded images from at a rate of 7 FPS to avoid blurry images taht could disturb thwe model. Then a compilation of all the images was done and the angle of the images was qritten on the csv file of the images. The information was uploaded on driving_log.csv file. Roughly 1300 images were in the dataset to train our model.

We even used data augmentation with shear, zoom, brightness and horizontal flip to increase the dataset, imporve the performance and reduce load on the computation with heavy image data, so that these can be generated over the fly.

This way the implementation of the Autonomous Self Driving was possible.
