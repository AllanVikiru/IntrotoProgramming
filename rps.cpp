// Rock, Paper, Scissors!
#include <iostream>
#include <cstdlib>
using namespace std;

int points;

//rock
int rock(int choice){
	switch(choice){
		case 1:
			cout<<"I played rock. It's a tie!"<<endl;
			points = points + 1;
			break;
		case 2:
			cout<<"I played rock. Congratulations, you won! :D"<<endl;
			points = points + 3;
			break;
		case 3:
			cout<<"I played rock. Too bad, you lost :("<<endl;
			points = points - 2;
			break;
		case 9: 
			break;
		default:
			cout<<"Your input was invalid. Try again."<<endl;
			break;
	}
	return points;
}

//paper
int paper(int choice){
	switch(choice){
		case 1:
			cout<<"I played paper. Too bad, you lost :("<<endl;
			points = points - 2;
			break;
		case 2:
			cout<<"I played paper. It's a tie!"<<endl;
			points = points + 1;
			break;
		case 3:
			cout<<"I played paper. Congratulations, you won! :D"<<endl;
			points = points + 3;
			break;
		case 9: 
			break;
		default:
			cout<<"Your input was invalid. Try again."<<endl;
			break;
	}
	return points;
}

//scissors
int scissors(int choice){
	switch(choice){
		case 1:
			cout<<"I played scissors. Congratulations, you won! :D"<<endl;
			points = points + 3;
			break;
		case 2:
			cout<<"I played scissors. Too bad, you lost :("<<endl;
			points = points - 2;
			break;
		case 3:
			cout<<"I played scissors. It's a tie!"<<endl;
			points = points + 1;
			break;
		case 9: 
			break;
		default:
			cout<<"Your input was invalid. Try again."<<endl;
			break;
	}
	return points;
}

int main(){
	int choice;
	
	for(int turns=0; turns <=4; turns ++){ // counter-controlled loop
		while (choice != 9){ // sentinel-controlled loop
		cout<<"Rock Paper Scissors!"<<endl;
		cout<<"1. Rock"<<endl;
		cout<<"2. Paper"<<endl;	
		cout<<"3. Scissors"<<endl;
		cout<<"Enter your option (or enter 9 to quit):\t";
		cin>>choice;
			int computer = rand() % 4 + 1;
			switch(computer){
				case 1:
					rock(choice);
					break;
				case 2:
					paper(choice);
					break;
				case 3:
					scissors(choice);
					break;	
				default:
					cout<<"I made a bad move, you\'ll get another turn"<<endl;
					turns --;
					break;
			}
		}
	}		
	cout<<"Game Over! You have "<<points<<" points";

	return 0;
}
