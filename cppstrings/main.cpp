#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
	string fruits {"apple"};
	string vegetables {"potato"};
	string mix {fruits,0,3};// the first number indicate the index the new string will start with and the second one how many indexes
	string s1 (10, 'x');// constructor
	cout << "the first string was initialized to: "<<fruits << endl;
	cout << "the second string was initialized to: "<<vegetables << endl;
	cout << "the third string was initialized to: "<<mix << endl;
	cout << "the fourth string was initialized to: "<<s1 << endl;
	
	cout << "=============================="<< endl;
	
	cout <<boolalpha;// true and false intead of 1 and 0
	cout << "apple = potato : " << (fruits == vegetables)<< endl;
	cout << "apple < xxxxxxxxxx : " << (fruits < s1)<<endl;
	cout << "app <= apple : " << (mix <= fruits)<<endl;
	cout << "apple != potato : " << (fruits != vegetables)<<endl;
	
	cout << "=============================="<< endl;
	
	string cat {};
	cat = fruits+" " + vegetables+" "+ mix+" "+s1;
	cout <<"all of them together are: " << cat << endl;
	
	cout << "=============================="<< endl;
	
	cout << "length is :"<< fruits.length()<<endl;
	cout << "length is :"<< vegetables.length()<<endl;
	cout << "length is :"<< mix.length()<<endl;
	cout << "length is :"<< s1.length()<<endl;
	cout << "length is :"<< cat.length()<<endl;
	
	cout << "=============================="<< endl;
	
	//substr() ==> substring 
	
	cout<< vegetables.substr(2,5)<<endl;// will print from index 2 to 5
	
 //erase() 
	cout << fruits.erase(0,1)<<endl; // erases from index 0 to 1
	
	//getline(): gets the whole line the user enters until he presses "enter" button
	
	string date_of_birth {};
	
	cout << "enter your date of birth (dd.mm.yy): ";
	getline(cin , date_of_birth);
	
	cout <<"Your date of birth is: "<< date_of_birth<< endl;
	return 0;
}