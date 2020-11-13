#include "iotestgit.h"
#include <iostream>

int main()
{
    double a{ heightInput() };
	for (int i = 0; i < 6; i++)
	{
		heightCalc(a, i);
	} 
    return 0;
}