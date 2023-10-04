#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
	/*//vector <char> vowels;// empty 
	//vector <char> vowels(5);// not initiliazed, the values are 0
	vector <char> vowels {'a','e','u','i','o'};
	
	//cout << vowels.at(0) << endl;  vector syntax
	//cout << vowels.at(4)<<endl;
	
	// array syntax:
	cout << vowels[0]<< endl;
	cout << vowels[4]<<endl;
	char new_value;
	//pushback:
	
	cout <<"enter another vowel:";
	cin>> new_value;
	 vowels.push_back(new_value);
	 cout<< vowels[5];
	
	// display the size of your vector size()
	
	cout<< "the size of our vector is "<< vowels.size();*/
	
	// two dimensional vector:
	 vector <vector<int>> movie_ratings {
		 
		{5,4,3,5},
		{1,5,3,4},
		{2,3,4,5}
		 
	
		 };
	cout << movie_ratings[0][0]<< endl;
	cout << movie_ratings[0][1]<< endl;
	cout << movie_ratings[0][2]<< endl;
	cout << movie_ratings[0][3]<< endl;
	return 0;
}