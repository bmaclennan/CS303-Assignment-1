// CS303 Assignment 1
// Brittney MacLennan
// Group: Brittney MacLennan & Collin Thomason

/* Write a program that compares the values of y1 and y2 in the following expressions for values
of n up to 100 in increments of 10. Does the result surprise you?
y1 = 100 * n + 10
y2 = 5 * n * n + 2 */

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Variables

int i;

// Program Main

int main()
{

	 for (i = 0; i <= 100; i += 10)
{
		 cout << "n = " << i << endl;
		 cout << "y1 =  100 * n + 10: " << 100 * i + 10 << endl;
		 cout << "y2 = 5 * n * n + 2: " << 5 * i * i + 2 << endl;

		 cout << endl << endl;
}

	system("pause");
	return 0;
}

