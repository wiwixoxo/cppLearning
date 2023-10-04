#include <iostream>
#include <cstdlib>

using namespace std;
   
  void print_array(int arr[], size_t size) {/* when passing array to a function it's important to include the size or the 
   * compiler won't know where to stop, but for c style strings for exemple compiler knows it stoops at \0*/
	  for(size_t i=0; i<size;i++){
		cout << arr[i];  
	  
	  }
  }
   
  
   
int main(){
	int numbers[] {10,23,45,89,7};
	print_array(numbers,5);/*for ex i can also type 4 instead of 5 and ill get only four values but if don't include the size ill
	encounter problems*/
	return 0;
}