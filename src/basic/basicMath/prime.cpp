#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n)
{
    int cnt = 0;
    int x = sqrt(n);
    for (int i = 1; i <= x; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (prime(n))
        {
            cout << "prime." << endl;
        }
        else
        {
            cout << "Not a prime." << endl;
        }
    }
    return 0;
}