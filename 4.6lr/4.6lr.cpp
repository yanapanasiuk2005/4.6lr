
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double S, S1;
    int k, i;
    S = 0;
    k = 1;;
    while (k <= 20)

    {
        S1 = 0;
        i = 1;
        while (i <= k)

        {
            S1 += cos(i + k);
            i++;

        }
        S += sqrt(sin(k) * sin(k) + abs(S1));
        k++;

    }
    cout << S << endl;
    S = 0;
    k = 1;
    do
    {
        S1 = 0;
        i = 1;
        do
        {
            S1 += cos(i + k);
            i++;
        } while (i <= k);
        S += sqrt(sin(k) * sin(k) + abs(S1));
        k++;
    } while (k <= 20);
    cout << S << endl;
    S = 0;
    for (k = 1; k <= 20; k++)

    {
        S1 = 0;
        for (i = 1; i <= k; i++)

        {
            S1 += cos(i + k);

        }
        S += sqrt(sin(k) * sin(k) + abs(S1));

    }
    cout << S << endl;
    S = 0;
    for (k = 20; k >= 1; k--
        )

    {
        S1 = 0;
        for (i = k; i >= 1; i--)

        {
            S1 += cos(i + k);

        }
        S += sqrt(sin(k) * sin(k) + abs(S1));
    }
    cout << S << endl;
    return 0;
}
