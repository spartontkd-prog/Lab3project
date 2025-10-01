#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
float Mean(float num1_, float num2_, float num3_, float num4_); //inputting function I will use.
float popStandDevi(float num1_, float num2_, float num3_, float num4_, float mean_);
int main()
{
	std::ifstream inFile; //create an instram object to read from a file
	
	inFile.open("inMeanStd.dat");

	int number; // Reads number from file
	inFile >> number;
	int number2;
	inFile >> number2;
	int number3;
	inFile >> number3;
	int number4;
	inFile >> number4;
	inFile.close();
	float num1 = float(number); // converts the integers to float values for my functions to use
	float num2 = float(number2);
	float num3 = float(number3);
	float num4 = float(number4);
	float mean = Mean(num1, num2, num3, num4);
	std::cout << "the numbers from the file are: " << number << " " << number2 << " " << number3 << " " << number4 << std::endl;
	std::cout << "with mean being " << mean << std::endl; // inputting what I want to appear when running the program
	std::cout << "and the standard deviation is " << popStandDevi(num1, num2, num3, num4, mean) << std::endl;
	
	std::ofstream outFile; //creating a opening to transfer data from Main.cpp to another file
	outFile.open("outMeanStd.dat");
	outFile << "mean is " << mean << std::endl;
	outFile << "Standard deviation " << popStandDevi << std::endl;
	inFile.close();
	
	int number5;
	std::cin >> number5;
	int number6;
	std::cin >> number6;
	int number7;
	std::cin >> number7;
	int number8;
	std::cin >> number8;
	return 0;
}


float Mean(float num1_, float num2_, float num3_, float num4_)
{
	return ( num1_ + num2_ + num3_ + num4_)/ 4; // defining the functions I am using
}
float popStandDevi(float num1_, float num2_, float num3_, float num4_, float mean_)
{
	return (sqrt((pow(num1_-mean_, 2) + pow(num2_ - mean_, 2) + pow(num3_ - mean_, 2) + pow(num4_ - mean_, 2))/4));
	
}
