//array demo lab

#include <iostream>
using namespace std;

int main(){
	int myArray[5]; // initialise an array of type int with 5 values
	
	for (int i; i<6; i++){
		cout<<"Enter a value to populate the array: ";
		cin>>myArray[i];
		// index values start at 0 while element numbers start at 1!
		cout<<"Value at index "<<i<<" : "<<myArray[i]<<endl;
	}
	
}
