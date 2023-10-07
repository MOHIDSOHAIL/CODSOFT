#include <iostream>
using namespace std;
int main()

{
    int num=248,guess,guesscount=0,guesslimit=5;
    bool outofguesses = false;

    while(num != guess && !outofguesses)
    {
        if (guesscount < guesslimit)
        {
            cout << "ENTER GUESS NUMBER : ";
            cin >> guess;
            guesscount++;
        }
        else
        {
            outofguesses = true;
        }
    }

    if (outofguesses)
        {
        cout << "YOU LOSE!! THE CORRECT NUMBER WAS : " << num << endl;
        }
    else
    {
        cout << "YOU WIN!! YOU GUESSED THE CORRECT NUMBER : " << num << endl;
    }

    return 0;
}


