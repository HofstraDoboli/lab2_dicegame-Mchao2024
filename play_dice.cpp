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

    char startGame;
    cout << "Would you like to begin the game? (Y/N)" << endl;
    cin >> startGame;

    while (start_game == 'Y' || start_game == 'y')
    {
        int die1 = rand()%6+1;
        int die2 = rand()%6+1;
        int playPoint = die1 + die2;

        if(playPoint == 7 || playPoint == 11)
        {
            cout << "You Rolled " << playPoint << endl;
            cout << "You Won! " << endl;
        }
        else if(playPoint == 2 || playPoint == 3 || playPoint == 12)
        {
            cout << "You Rolled " << playPoint << endl;
            cout << "You lost. " << endl;
        }
        else
        {
            cout << "You Rolled " << playPoint << endl;
            char roll;
            cout << "Please press R to roll again." << endl;
            cin >> roll;
            While (roll == 'R' || roll == 'r')
            {
                int die1_1 = rand()%6+1;  
                int die2_2 = rand()%6+1;
                int dieTotal = die1_1 + die2_2;

                if (dieTotal == playPoint)
                {
                    cout << "You Rolled " << dieTotal << endl;
                    cout << "You won!" << endl; 
                }
                else if(dieTotal == 7)
                {
                    cout << "You Rolled " << dieTotal << endl;
                    cout << "You Lost." << endl;
                }
                else
                {
                     cout << "You Rolled " << dieTotal << endl;
                     cout << "Please roll again. (R)" << endl;
                     cin >> roll;
                }
            }
        }
    }
}
