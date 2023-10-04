#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int number1;
	int number2;
	int number3;
	int sum;
	double average;
	cout << "Enter the first integer: ";
	cin >> number1;
	
	cout << "Enter the second integer: ";
	cin >> number2;
	
	cout << "Enter the third integer: ";
	cin >> number3;
	
	cout <<" The integers you entered are: " << number1 << " "	<< number2 << " " << number3 << endl;
	
sum = number3 + number1 + number2;
	
	cout<< "The sum of the entered integers is: "<< sum <<endl;
	
average = static_cast<double> (sum)/3 // static_cast converts one type to another here from int to double

	cout << "The average is: "<< average << endl;
	return 0;
}