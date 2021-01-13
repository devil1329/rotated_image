# Rotated_Image
# Introduction
    
    This is simple project of rotating an image and save the new rotated image.
    This code uses a file named images which is placed here with it.
    This program is a simple c++ program having opencv header files in it.
    To run this code, you need to setup the environment for the opencv library in your system.
    I prefer to use visual studio fto run this program as it is easy to download and set environment in visual studio.
    To setup opencv in visual studio you can prefer this link :- https://youtu.be/riArxlmRMoQ

# Program and Its Functions
    
    This program contains only one function in it named rotate of return type Mat which will receive an image and returns image.
    In main function, an image is saved in a vaiable using imread function of opencv and then it is passed to the rotate funtion.
    As soon as rotate functon is called, it asks for the angle of rotation and the sacle of the image.
    Rotation of the matrix of image is done by the getRotationMatrix2D function of opencv which receives point angle and scale as its parameters.
    After rotating the matrix, the matrix is saved as new rotated image in a new variable with hte help of warpAffine funtion.
    warpAffine function saves the rotated image with same size as of the original image.
    When img is saved to new variable, rotate function returns the variable and then the rotated image get saved into the give folder by imwrite function.
    imwrite function write them image into drive with name passed in it as a parameter.
    At last, imshow functon is used to print the roatated image on the screen.
    waitKey(0) is used to pause the window which shows the photos.
    These are all the inbuilt and created functions which are used in this program to roated the image at the angle user wants to.
    
        
