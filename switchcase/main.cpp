#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  char grade ;
  
       cout << "What grade do you want to get? ";
	   cin >> grade ;
	   
	   switch(grade){
		case 'A':   
		   cout << "You must get a 100 or a score more or equal to 80";
		   break;
		case 'B' :
			cout << "You must get score equal or between 79 and 50";
			break;
		case 'C':
			cout << "You must get a score lower than 50";
			break;
		default: cout << "Invalid input";
		   }
    return 0;
}

