#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(){
	// ask the user for values (not defenite amount)
	/*then print them on the screen if the number of value are less than 10, if its more it prints error!*/
	/*vector <int> values {};
	  int val {};
	   cout << "Enter some values seperated by a space : ";
	   while(cin >> val){
		   if(values.size()<9)
	   values.push_back(val);
	   else {break;}
	   }
	  for(auto c : values)
		  cout << c <<"   ";*/
		vector <int> vec {45,78,12,45,69};
		   int count {1};
    size_t index {0};
   while(index < vec.size() && vec.at(index) != -99) {
       cout << count;
       count++;
       index++;
   }
   
	return 0;
}