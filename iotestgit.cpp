#include "constant.h"
#include "iotestgit.h"
#include <iostream>

double heightInput() 
{
	std::cout << "Enter the height of the tower in meters: ";
	double height{};
	std::cin >> height;
	return height;
}
void heightCalc(double h, int t)
{
	double distanceFallen{physicsConst::mygravity * t * t / 2.0};
	double d{ h - distanceFallen };
	if (d >= 0)
		std::cout << "At " << t << " seconds, the ball is at height: " << d << " meters\n";
	else
		std::cout << "At " << t << " seconds, the ball is on the ground\n";
}