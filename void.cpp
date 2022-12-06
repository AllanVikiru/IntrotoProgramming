/// void functions lab
#include <iostream>
using namespace std;

void invalidateDate(int day, int month, int year){
	string result;
	
	if(day > 31  || month > 12){ // no month has days more than 31, no year has months more than 12
		result = "Invalid date";
	}
	else if(day > 28 && month == 2 && year%4 != 0){ // February for non-leap years
		result = "Invalid date";
	}
	else if(day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)){ // months with 30 days
		result = "Invalid date";
	}
	else{ // all other days are valid
		result = "Valid date";
	}
	cout<< result;
}

int main(){
	int day, month, year;

	cout<<"Enter the day:\t";
	cin>>day;
	cout<<"Enter the month:\t";
	cin>>month;
	cout<<"Enter the year:\t";
	cin>>year;
	
	invalidateDate(day, month, year);
	// no cout since it's handled by function (line 20)
	
	return 0;
	
}
