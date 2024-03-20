#include <iostream>

using namespace std;

void util();
bool game(int ans, int guess);

int main()
{
    int ans, guess;
    cout << "Enter the answer: ";
    cin >> ans;
    while(true)
    {
        cout << "Enter the guess: ";
        cin >> guess;
        if(game(ans, guess)) break;
    }
}
