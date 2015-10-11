/* Calculator v2.0 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	
// Declaring the variables
	
	char choose;

// In new version use double instead of int
	
	double a, b, c, d;
	
// Starting main function
	
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
