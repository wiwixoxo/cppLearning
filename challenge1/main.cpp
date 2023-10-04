#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int favoriteNumber;
	cout << "What's your favorite number? (1-100)" ;
	cin >> favoriteNumber;
	
	cout << "That's amazing, it's also my favorite number!" << endl;
	cout << "no really " << favoriteNumber << " is my favorite number" <<endl;
	return 0;
}