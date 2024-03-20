#include <iostream>
#include <time.h>

using namespace std;

int util()
{
    srand(time(NULL));
    int n1 = 0;
    int n2 = 0; 
    int n3 = 0;
    while(n1 == n2 || n2 == n3 || n1 == n3)
    {
        n1 = rand() % 10;
        n2 = rand() % 10;
        n3 = rand() % 10;
    }
    if(n1 == 0) return n3 * 100 + n2 * 10 + n1;
    else return n1 * 100 + n2 * 10 + n3;
}