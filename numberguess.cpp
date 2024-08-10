
// Number guessing

#include<cstdlib>
#include<ctime>

#include<iostream>
using namespace std;
int main()
{
    cout<<"\n\t\t\t\tWelcome to Guess the Number Game!!!"<<endl<<endl;
    cout<<"\t\t\tYou have to guess a number between 1 to 100. \nYou have 3 levels of difficulty. Each level has own number of limited choices."<<endl;
    cout<<"\t\t\t\tGood luck!!!"<<endl;
    while(true){
            cout<<"\nThe difficulty levels are....."<<endl;
            cout<<"Easy : 1\t Medium : 2\t Hard : 3"<<endl;
            cout<<"0 for ending the game"<<endl;

            //declare variable
            int difficulty,guessNumber,secretNumber;

            //selecting difficulty
            cout<<"\nEnter difficulty level: ";
            cin>>difficulty;

            //generating secret number
            srand(time(0));
            secretNumber=(rand()%100)+1;

            //Exit game if user wants to end the game
            if(difficulty==0){
                exit(0);
            }

            //Difficulty level - Easy
            else if(difficulty==1){
                cout<<"\nDifficulty level is Easy \nYou have 10 choices to guess the secret number between 1 to 100.";
                int choice=10;
                for(int i=1;i<=10;i++){
                    //to guess the number
                    cout<<"\nEnter the number: ";
                    cin>>guessNumber;

                    //check whether user guessed the secret number
                    if(guessNumber==secretNumber){
                        cout<<"Huraaah!!! You Won The Game!!!"<<endl;
                        cout<<guessNumber<<" is the secret number. You guessed correctly..."<<endl;
                        cout<<"Thank you for playing..."<<endl;
                        break;
                    }
                    else if(guessNumber > secretNumber){
                        cout<<"Nope!"<<guessNumber<<" is not the secret number."<<endl;
                        cout<<"Try guessing a smaller number..."<<endl;
                    }
                    else if(guessNumber < secretNumber){
                        cout<<"Nope!"<<guessNumber<<" is not the secret number."<<endl;
                        cout<<"Try guessing a greater number..."<<endl;
                    }
                    choice--;
                    cout<<choice<<" choice left!!!"<<endl;
                    if(choice==0){
                        cout<<"Oops! You lost!!!"<<endl;
                    }
                }
            }
            //Difficulty level - Medium
            else if(difficulty==2){
                cout<<"\nDifficulty level is Medium... \nYou have 7 choices to guess the secret number between 1 to 100.";
                int choice=7;
                for(int i=1;i<=7;i++){
                    //to guess the number
                    cout<<"\nEnter the number: ";
                    cin>>guessNumber;

                    //check whether user guessed the secret number
                    if(guessNumber==secretNumber){
                        cout<<"Huraaah!!! You Won The Game!!!"<<endl;
                        cout<<guessNumber<<" is the secret number. You guessed correctly..."<<endl;
                        cout<<"Thank you for playing..."<<endl;
                        break;
                    }
                    else if(guessNumber > secretNumber){
                        cout<<"Nope!"<<guessNumber<<" is not the secret number."<<endl;
                        cout<<"Try guessing a smaller number..."<<endl;
                    }
                    else if(guessNumber < secretNumber){
                        cout<<"Nope!"<<guessNumber<<" is not the secret number."<<endl;
                        cout<<"Try guessing a greater number..."<<endl;
                    }
                    choice--;
                    cout<<choice<<" choice left!!!"<<endl;
                    if(choice==0){
                        cout<<"Oops! You lost!!!"<<endl;
                    }
                }
            }
            else if(difficulty==3){
                cout<<"\nDifficulty level is Hard... \nYou have 5 choices to guess the secret number between 1 to 100.";
                int choice=5;
                for(int i=1;i<=5;i++){
                    //to guess the number
                    cout<<"\nEnter the number: ";
                    cin>>guessNumber;

                    //check whether user guessed the secret number
                    if(guessNumber==secretNumber){
                        cout<<"Huraaah!!! You Won The Game!!!"<<endl;
                        cout<<guessNumber<<" is the secret number. You guessed correctly..."<<endl;
                        cout<<"Thank you for playing..."<<endl;
                        break;
                    }
                    else if(guessNumber > secretNumber){
                        cout<<"Nope!"<<guessNumber<<" is not the secret number."<<endl;
                        cout<<"Try guessing a smaller number..."<<endl;
                    }
                    else if(guessNumber < secretNumber){
                        cout<<"Nope!"<<guessNumber<<" is not the secret number."<<endl;
                        cout<<"Try guessing a greater number..."<<endl;
                    }
                    choice--;
                    cout<<choice<<" choice left!!!"<<endl;
                    if(choice==0){
                        cout<<"Oops! You lost!!!"<<endl;
                    }
                }
            }
            else{
                cout<<"Invalid choice. Enter a valid choice to play the game! (0/1/2/3)"<<endl;
            }
    }
    return 0;
}
