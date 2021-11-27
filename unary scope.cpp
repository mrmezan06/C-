#include <iostream>

using namespace std;

int tuna = 29;

void anything();

int main()
{
    int tuna = 69;
    anything();
    cout<< tuna << endl;
    cout<< ::tuna << endl;  //using for global variable accessing
}
void anything()
{
    cout << tuna << endl;
}
