#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main(){
	int num_items;
	int data {};
	vector <int> info {};
	cout << "How many data items do you want to enter?:";
	cin >> num_items;
	 for(int i=1 ; i<=num_items ; i++){
		cout << "Enter data number "<< i <<": " ;
		 cin >> data;
			 info.push_back(data);
			
	 }
		 
	 
	 
	  for(auto c : info){
		  for(int i {1}; i<=c ; i++){
		  cout<< "-";}
		  cout << endl;
	  }
		 
		/*int num_items;
	string data {};
	vector <string> info {};
	cout << "How many data items do you want to enter?:";
	cin >> num_items;
	 for(int i=1 ; i<=num_items ; i++){
		cout << "Enter data number "<< i <<": " ;
		 cin >> data;
			 info.push_back(data);
			
	 }
		 
	 
	 
	  for(auto c : info)
		 cout<< c << endl;*/
	return 0;
}