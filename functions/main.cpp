#include <iostream>
#include <cstdlib>
#include <cmath>
#define pi 3.1415
using namespace std;


double calc_area_circle(double x){
	return (pi*pow(x,2));//pow() is a cmath library function
}


 void area_circle(){// void returns nothing
	double radius {};
cout <<"Enter your radius: ";
cin >> radius;
   cout <<"The area of the circle is: "<<calc_area_circle(radius)<< endl;
 }
 double calc_volume_cylinder(double z,double y){// type of the function
	 return (pi*pow(z,2)*y);
 }
	
void volume_cylinder(){//this function returns nothing ==> type is void
	double radius1 {};
	double height {};
	cout << "Enter the radius of the cylinder: ";
	cin >> radius1;
	
	cout << "Enter the height of the cylinder: ";
	cin >> height;
	
	cout << "volume is: " << calc_volume_cylinder(radius1,height) << endl;
}
int main(){
	area_circle();//function call
	volume_cylinder();
	return 0;
}