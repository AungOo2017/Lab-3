// Lab 3.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
void printMenu(int& choice) 

// To choose either addition or subtraction or multiplication or division by typing 1 or 2 or 3 or 4
{
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) 
{
	cout << "Please enter the first value: ";
	cin >> A;
	cout << "Please enter the second value: ";
	cin >> B;
	cout << " " << endl;
}

// To add B to A
void addition(float A, float B) 
{
	float result = A + B;
	cout  << A << " + " << B << " = " << result << endl;
}

// To subtract B from A
void subtraction(float A, float B) 
{
	float result = A - B;
	cout << A << " - " << B << " = " << result << endl;
}

//To multiply A and B
void multiplication(float A, float B) 
{
	float result = A * B;
	cout << A << " * " << B << " = " << result << endl;
}

//To divide A by B
void division(float A, float B) 
{
	float result = A / B;
	cout << A << " / " << B << " = " << result << endl;
	}

int main() 
{
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) 
	{
		addition(A, B);
	}
	if (choice == 2) 
	{
		subtraction(A, B);
	}
	if (choice == 3) 
	{
		multiplication(A, B);
	}
	if (choice == 4) 
	{
		division(A, B);
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
