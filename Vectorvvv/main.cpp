#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
	float weight ;
	float height ;
	float age ;
	
	vector <float> health ;
	
	cout<< "Enter your weight: " ;
	cin>> weight;
	cout<< "Enter your height: " ;
	cin>> height;
	cout<< "Enter your age: " ;
	cin>> age;
		
		health.push_back(weight);
		health.push_back(height);
		health.push_back(age);
		
	cout << "your stats are: "<< health.at(0)<<endl;
	cout << health.at(1) << endl;
	cout << health.at(2) << endl;
	
	return 0;
}