/* Building a basic calculator as my fisrt c++ project 
created by Luis Hernandez*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	int user;
	int input;
	char choose;

/* Welcoming the user */
	
	cout << "Welcome! \n" << endl;

/* Starting the calculator */
	
	int a = 0, b = 0, c = 0, d =0;


	cout << "What would you like to do?" << endl;
	
	cout << "Please choose a valid option and hit enter: \n" << endl;
	cout << "a) Addition\n";
	cout << "s) Subtraction\n";
	cout << "d) Division\n";
	cout << "m) Multplication\n";
	
	cin >> choose;

	if (choose == 'a'){
		cout << "What would you like to add?" << endl;
		cin >> a;
		cout << "+ \n";
		cin >> b;
		cout << a << "+" << b << "=" << a+b << endl;
	}
	else if (choose == 's'){
		cout << "What would you like to subtact?" << endl;
		cin >> a;
		cout << "- \n";
		cin >> b;
		cout << a << "-" << b << "=" << a-b << endl;
	}
	else if (choose == 'd'){
		cout << "What would you divide?" << endl;
		cin >> a;
		cout << "/ \n";
		cin >> b;
		cout << a << "/" << b << "=" << a/b << endl;

	}
	else if (choose == 'm'){
		cout << "What would you like to multiply?" << endl;
		cin >> a;
		cout << "* \n";
		cin >> b;
		cout << a << "*" << b << "=" << a*b << endl;
	}
	else
	{
		cout << "Invalid input\n";
	}

	
	return 0;

}
