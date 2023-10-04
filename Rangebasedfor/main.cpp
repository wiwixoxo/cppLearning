#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
	/*endless loop: no initialization or increment or condition
	for(;;)
	{
		cout << "i love you"<<endl;
	}*/
	
	/* first
	for(int i {0}; i <= 39; i += 2) {
		cout << i << endl;
	}*/
	
	/*vector <vector<int>> table {
		{1,5,8},
		{8,5,6},
		{4,5,2}
		};
		
for(int i=0; i<3;i++){
	
	for(int j=0;j<3;j++){
		
	cout<< table.at(i).at(j) << " " ;
	}
}*/

/*for(int i = 1 ; i<=100;i++){
	cout << i;
	if(i%10=0)
		cout << endl;
	else cout << " ";

}*/

/*vector <int> num {12,45,56,78,23};

 for(unsigned i = 0; i<num.size(); i++)
 {
	 cout << num.at(i) << " ";
 }*/
 
 //range-based for:
 
 
 vector <double> temperatures {12.5,45,16.5,7.3,36.2};
 
 double temp_sum {};
 double average {};
 
 for(auto temp : temperatures){
	 temp_sum += temp; }
	 
	 average = temp_sum/temperatures.size();
	 cout << fixed << setprecision(2);
	 cout << "The average temperature is "<< average<<endl;
	 
	/* for(auto c : "I love You!")
	 {cout << c << endl;}
	 */
	return 0;
}