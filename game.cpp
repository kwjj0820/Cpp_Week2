#include <iostream>

using namespace std;

bool game(int ans, int guess)
{
    int strike = 0, ball = 0;
    if(guess == ans)
    {
        cout << "You win!";
        return true;
    }
    else
    {
        for(int i = 0; i < 3; i++)
        {
            int temp = ans;
            for(int j = 0; j < 3; j++)
            {
                //cout << "g: " << guess << ", a: " << temp << endl;
                if (temp % 10 == guess % 10)
                {
                    if (i == j)
                    {
                        strike++;
                    }
                    else
                    {
                        ball++;
                        //cout << "ball: g: " << guess << ", a: " << temp << endl;
                    }
                }
                temp /= 10;
            }
            guess /= 10;
        }
        cout << "Strikes: " << strike << ", Balls: " << ball << endl;
        return false;
    }
}