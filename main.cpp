#include <iostream>

using namespace std;

int util();
bool game(int ans, int guess);

int main()
{
    int ans, guess;
    ans = util();
    cout << "Answer is " << ans << endl;
    while(true)
    {
        cout << "Enter the guess: ";
        cin >> guess;
        if(game(ans, guess)) break;
    }
}
