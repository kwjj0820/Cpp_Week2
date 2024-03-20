#include <iostream>
#include <time.h>

using namespace std;

int util()
{
    srand(time(NULL));
    int n1 = rand() % 10;
    int n2 = rand() % 10;
    int n3 = rand() % 10;
    if(n1 == 0) return n3 * 100 + n2 * 10 + n1;
    else return n1 * 100 + n2 * 10 + n3;
}