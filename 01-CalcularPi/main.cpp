#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n = 1.0;
    double d = 1.0;
    double pi = 1.0;
    for (int i = 0; i < 999999 ; i++)
    {
        if (i % 2 == 0)
        {
            d += 2;
            pi -= (n / d); 
        }
        else
        {
            d += 2;
            pi += (n / d); 
        }
        
    }
    cout << setprecision(7) << pi*4 << endl;
        
    return 0;
}