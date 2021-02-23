/* Michael Chao */
    
#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;


int main()
{
    srand(time(0)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// each time you run your program

    // Add your code to play the dice game here

    cout << "Welcome to the Dice Game." << endl;

    char startGame; //begins the game if y
    cout << "Would you like to begin the game? (Y/N)" << endl;
    cin >> startGame; 

    while (startGame == 'Y' || startGame == 'y')   
    {
        int die1 = rand()%6+1; //first die
        int die2 = rand()%6+1; //second die
        int playPoint = die1 + die2; //the sum value of die1 and die2

        bool play = true;   //true if game is still going
        while (play == true)
        {
            if(playPoint == 7 || playPoint == 11)
            {
                cout << "You Rolled " << playPoint << endl;
                cout << "You Won! " << endl;
                play = false;
            }
            else if(playPoint == 2 || playPoint == 3 || playPoint == 12)
            {
                cout << "You Rolled " << playPoint << endl;
                cout << "You lost. " << endl;
                play = false;
            }
            else
            {
                cout << "You Rolled " << playPoint << endl;
                char roll; //will reroll dice when r is input
                cout << "Please press R to roll again." << endl;
                cin >> roll;
                bool rolling = true; //true if need to keep rolling
                while (rolling == true)
                {
                    if (roll == 'R' || roll == 'r')   
                    {
                        int die1_1 = rand()%6+1;  //the reroll of die1
                        int die2_2 = rand()%6+1;  //the reroll of die2
                        int dieTotal = die1_1 + die2_2; //the sum of the rerolls

                        if (dieTotal == playPoint)
                        {
                            cout << "You Rolled " << dieTotal << endl;
                            cout << "You won!" << endl; 
                            rolling = false;
                        }
                        else if(dieTotal = 7)
                        {
                            cout << "You Rolled " << dieTotal << endl;
                            cout << "You Lost." << endl;
                            rolling = false;
                        }
                        else    //if r was no entered, ask again to enter r 
                        {
                            cout << "You Rolled " << dieTotal << endl;
                            cout << "Please roll again. (R)" << endl;
                            cin >> roll;
                        }
                    }
                    else
                    {
                        cout << "Please type R to roll again." << endl;
                        cin >> roll;
                    }
                }
                play = false;
            }
        }
        cout << "Would you like to play again? (Y/N)" << endl;
        cin >> startGame;
    }
}