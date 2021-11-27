#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    // time(0) is access mili second
    for(int x = 1; x<25; x++)
    {
        cout<< rand() % 9<< endl ;
    }
}
