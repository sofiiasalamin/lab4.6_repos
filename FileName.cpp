#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P, S;
    int n, i;

    // Спосіб 1: вкладені цикли while
    S = 0;
    n = 1;
    while (n <= 20)
    {
        P = 1;
        i = 1;
        while (i <= n)
        {
            P *= i;
            i++;
        }
        S += (n + P) / (n * n + P * P);
        n++;
    }
    cout << S << endl;

    // Спосіб 2: вкладені цикли do-while
    S = 0;
    n = 1;
    do {
        P = 1;
        i = 1;
        do {
            P *= i;
            i++;
        } while (i <= n);
        S += (n + P) / (n * n + P * P);
        n++;
    } while (n <= 20);
    cout << S << endl;

    // Спосіб 3: вкладені цикли for з інкрементом (n++, i++)
    S = 0;
    for (n = 1; n <= 20; n++)
    {
        P = 1;
        for (i = 1; i <= n; i++)
        {
            P *= i;
        }
        S += (n + P) / (n * n + P * P);
    }
    cout << S << endl;

    // Спосіб 4: вкладені цикли for з декрементом (n--, i--)
    S = 0;
    for (n = 20; n >= 1; n--)
    {
        P = 1;
        for (i = n; i >= 1; i--)
        {
            P *= i;
        }
        S += (n + P) / (n * n + P * P);
    }
    cout << S << endl;

    return 0;
}