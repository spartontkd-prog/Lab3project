#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	std::ifstream inFile; //create an instram object to read from a file
	
	inFile.open("inMeanStd.dat");
	
	float Mean(float num1_, float num2_, float num3_, float num4_);
	
	int number; // Reads number from file
	inFile >> number;
	int number2;
	inFile >> number2;
	int number3;
	inFile >> number3;
	int number4;
	inFile >> number4;
	float num1 = (number); // converts the integers to float values
	float num2 = static_cast<float>(number2);
	float num3 = static_cast<float>(number3);
	float num4 = static_cast<float>(number4);
	
	std::cout << "the numbers from the file are: " << number << number2 << number3 << number4 << std::endl;
	std::cout << "with mean being " << Mean(float num1_, float num2_, float num3_, float num4_) << std::endl;
	

	inFile.close();
	
	return 0;
}

float Mean(float num1_, float num2_, float num3_, float num4_);
{
	return ( num1 + num2 + num3 + num4)/ 4; 
}

