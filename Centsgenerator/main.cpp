#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int cents {};
const int dollars {100};
const int pennies {1};
const int dimes {10};
const int nickels {5} ;
const int quarters {25};
	
		cout << "Enter a amounts of cents: ";
		cin >> cents;
		
		/*cout <<"dollars: "<< dollars %= cents << endl;
		cout <<"pennies: "<< pennies %= cents << endl;
		cout <<"dimes: "<< dimes %= cents << endl;
		cout <<"nickels: "<< nickels %= cents << endl;
		cout <<"quarters: "<< quarters %= cents << endl;*/
		
		cout << "Dollars: " << cents/dollars << endl;
		cout << "Pennies: " << cents/pennies << endl;
		cout << "Dimes: " << cents/dimes << endl;
		cout << "nickels: " << cents/nickels << endl;
		cout << "quarters: " << cents/quarters << endl;
	
		
	return 0;
}