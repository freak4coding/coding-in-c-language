#include <iostream>
using namespace std;

int main()
{
    int x,y;

    cout << "Enter two numbers: ";
    cin >>x>>y;
    
    while(x!=y)
    {
        if(x>y)
            x-=y;
        else
            y-=x;
    }

    cout << "GCD = " <<x;
    return 0;
}
