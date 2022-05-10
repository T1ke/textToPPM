#include <iostream>
#include <thread>
#include <fstream>
#include <string>
#include "letterPrints.cpp"


std::string pathStart = "/home/tike/projects/cpp/Qt/TestProject1/Images/";

bool loadImage(std::string fileName)
{
    std::string path = pathStart+fileName;
    std::ifstream image(path, std::ios::binary);
    if(image.fail())
    {
        std::cout << "no such file found: " << path << std::endl;
        return false;

    }

    std::cout << "file found!" << std::endl;
    image.open(path, std::ios::binary);
    return true;
}

void writeTextToImage(std::ofstream& image, std::string input)
{
    // do in 5x5 blocks
    for (int i = 0 ; i < 45; i++)
    {
        for(int j = 0; j < 255;j++)
        {
            image << "250" << " " << "250" << " " << "250" << std::endl;

        }
    }
    letterPrints::N(image);

}

std::ofstream writeImageFile(std::string fileName)
{ //makes .ppm image file with black background
    std::ofstream image;
    std::string path = pathStart + fileName + ".ppm";
    image.open(path);

    if(image.is_open())
    {
        image << "P3" << std::endl; // ppm rgb :P3" means this is a RGB color image in ASCII : wikipedia
        image << "255 255" << std::endl; //height weight
        image << "255" << std::endl; //max value for each color
        for(int y = 0; y < 205 ; y++)
        {
            for (int x = 0; x < 255; x++)
            {
                image << "0" << " " << "0" << " " << "0" << std::endl;
            }
        }
    }
    //image.close();
    return image;
}

int main()
{
    std::string fileName;
    std::string input;
    std::ofstream image;
    std::cout << "Give me the filename to your image: " ;
    std::getline(std::cin,fileName);
    std::cout <<"Give me the text you want to insert into the image: ";
    std::getline(std::cin,input);
    image = writeImageFile(fileName);

    if(input.length() != 0)
    {
        writeTextToImage(image,input);
    }
   // std::string path = pathStart + fileName;
    image.close();
    std::cout << "Image created successfully" << std::endl;
    return 0;
}

