#include <iostream>
#include <cstdlib>

using namespace std;
/* if we have a function that calculates a value and one of the arguments 
is practically always the same we can write it as a default value like this*/

double car_price(double engine_price, double number_of_wheels = 4){// most cars have 4 wheels so we defqult the value
return ((engine_price*20)*number_of_wheels);
}
int main(){
	cout<<car_price(14500.0)<<endl;//since we set the default value for wheels we can just write the engine price
	cout << car_price(5000.2,3)<<endl;// if we want to use another value than the default value we write it 
	return 0;
}