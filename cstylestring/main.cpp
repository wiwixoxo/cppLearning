#include <iostream>
#include <cstdlib>
#include <cstring>// c style strings
#include <cctype> // character based functions

using namespace std;

int main(){
	char first_name[20] {};
	char last_name[20] {};
	char full_name[50] {};
	
	cout << "Enter your first name: ";
	cin >> first_name;
	
	cout << "Enter your last name: ";
	cin >> last_name;
	
/*range based for i can also just display it normally but i like this one*/
	for(auto c : first_name){
		cout << c;
		}
		cout << "\nthe length of your first name is: "<<strlen(first_name)<<" characters"<< endl;
		
	for(auto c : last_name){
		cout << c;
		}
		cout << "\nthe length of your last name is: "<<strlen(last_name)<<" characters"<< endl;
		
	strcpy(full_name,first_name);// copy first name to full name
	strcat(full_name, " ");// adds a space to full name
	strcat(full_name,last_name);
	// strcmp (string compare) outputs the character difference betwxeen two strings str1 and str2
	// isalpha checks if the character is alphabetical
	// toupper brings  the alphabet to upper cse
	
	         
	  cout << "Your full name is: "<< full_name ;
	return 0;
}