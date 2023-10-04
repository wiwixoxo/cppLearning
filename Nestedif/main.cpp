#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int score {};
	 cout << "Enter your score (0-100): ";
	 cin >> score;
	 
	 if (score>=0 && score<=100){
		 if(score<=50)
			cout << "Grade c";	
		else if(score<=80)
			cout << "Grade B";
		else if(score<=100)
			cout << "Grade A";
			}
	 else {
		 cout << "Sorry invalid input!";
	 }
	return 0;
}