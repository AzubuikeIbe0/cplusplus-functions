// C++ Program to demonstrate working of a function
#include <iostream>
using namespace std;

// Following function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}


//The function fun() expects a pointer ptr to an integer(or an address of an integer).It modifies the value at the address ptr.The dereference operator * is used to access the value at an address.In the statement ‘* ptr = 30’, the value at address ptr is changed to 30.

void fun(int* ptr)
{
	*ptr = 30;
}

// main function that doesn't receive any parameter and
// returns integer
int main()
{
	int a = 10, b = 20;

	// Calling above function to find max of 'a' and 'b'
	int m = max(a, b);

	cout << "m is " << m << endl;



	//Functions Using Pointers

	// The address operator & is used to get the address of a variable of any data type.In the function call statement ‘fun(&x)’, the address of x is passed so that x can be modified using its address.


		int x = 20;
		fun(&x);
		cout << "x = " << x << endl;



	return 0;
}


