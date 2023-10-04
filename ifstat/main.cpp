#include <iostream>
#include <cstdlib>


using namespace std;

int main(){
	int score {};
	cout << "Enter your score (0-100): ";
	cin >> score;
	
	if(score==0) {
		cout << "You failed this course and cannot retake it!";
		}
	else if(score>0 && score<=30){
		cout << "You failed this course but you can take a retake!";
		}
	else if(score>30 && score<=50){
		cout << "your grade is C";
		}
	else if(score>50 && score<80){
		cout << "Your grade is a B";
		}
	else if(score>=80 && score<=100){
		cout << "Your grade is A";
		}
	else {cout << "Invalid input";
	}
	
	
	return 0;
}