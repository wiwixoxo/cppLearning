#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	const double tax_rate {0.06};
	const int  price_per_room {30};
	int rooms;
		cout<<"Estimate for carpet cleaning service:" << endl;
		cout << "number of rooms: ";
		cin>> rooms;
		cout <<"price per room: "<< price_per_room<<endl;
	int cost {rooms*price_per_room};
		cout <<"Cost: "<<cost << endl;
	double tax {tax_rate*cost};
		cout<< "Tax: "<< tax << endl;
	cout<< "================"<<endl;
	double total {cost+tax};
	cout<<"Total estimate: "<< total<<endl;
	cout<<"this estimate is valid for 30 days.";
	return 0;
}