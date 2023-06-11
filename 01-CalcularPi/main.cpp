#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double dif = 0.0000001;
    double n = 1;
    double d = 1;
    double pi = 1;
    double aprox = 0;
    int i = 0;
    
    while (abs(pi - aprox) > dif) {
        aprox = pi;
        if (i % 2 == 0) {
            d += 2;
            pi -= (n / d); 
        }
        else {
            d += 2;
            pi += (n / d);
        }
        ++i;
    } 

    cout << fixed << setprecision(7) << pi*4 << endl;
        
    return 0;
}