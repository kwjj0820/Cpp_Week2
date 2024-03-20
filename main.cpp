#include <iostream>

using namespace std;

int util();
bool game(int ans, int guess);

int main()
{
    int ans, guess, chance = 5;
    ans = util();
    while(true)
    {
        if(!chance)
        {
            cout << "You lose!";
            break;
        }
        cout << chance-- << " chances left.";
        cout << "Enter the guess: ";
        cin >> guess;
        if(game(ans, guess)) break;
    }
}
