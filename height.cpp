#include<iostream>

int main()
{
	const int inches_per_feet = 12;
	int inches;		

	std::cout << "What is your height in inches? " << std::endl;
	std::cin >> inches;
	int height_inches = inches / inches_per_feet;
	int height_feet = inches % inches_per_feet;
	std::cout << height_feet << " height in feet " << height_inches <<" height in inches" << std::endl;


	return 0;






}