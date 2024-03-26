#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;
int main(){
    srand(time(0));
	int num= rand() % 50 + 1;

    int guess;
    int TRY= 0;
    
    cout<<"\n-----------------------------Welcome to the Number Guessing Game-------------------------------!\n";
	cout<<"***********************************************************************************************!\n\n";
    
    do{

    	cout<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.Guess the number between 1 to 50.-.-.-.-.-.-.-.-.-."<<endl;
        cin>>guess;

        if (guess > num) {
            cout<<"Too High\n";
        } else if (guess < num) {
            cout<<"Too Low\n";
        }

        TRY++;

    } while(guess != num);
    cout<<endl<<"Congratulations! You guessed the number " <<num<<" correctly:)\n";
    cout<<"You take "<<TRY<<" tries to guess the number.\n";
    cout<<"The number is "<<num<<endl;
	return 0;
}

