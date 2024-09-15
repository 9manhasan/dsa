#include <iostream>
using namespace std;
void pat1(int n)
{
    //rows
    for (int i = 0; i < n; i++)
    {
        //columns
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pat2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pat3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pat4(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x;
        }
        x++;
        cout << endl;
    }
}
void pat5(int n)
{

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pat6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pat7(int n)
{
    // outerloop
    int star = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int i = 0; i < space; i++)
        {
            cout << "-";
        }
        // print
        for (int i = 0; i < star; i++)
        {
            cout << "*";
        }
        star += 2;
        space -= 1;
        cout << endl;
    }
}
void pat8(int n)
{
    int star = 2 * n - 1;
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << "-";
        }
        // print
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << "-";
        }
        space += 1;
        star -= 2;
        cout << endl;
    }
}
void pat9(int n)
{
    // first part
    int star = 1;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int i = 0; i < space; i++)
        {
            cout << " ";
        }
        // print
        for (int i = 0; i < star; i++)
        {
            cout << "*";
        }
        star += 2;
        space -= 1;
        cout << endl;
    }
    // second part
    star = 2 * n - 1;
    space = 0;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // print
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space += 1;
        star -= 2;
        cout << endl;
    }
}
void pat10(int n)
{
    int star = 1;
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < star; j++)
        {
            cout << "* ";
        }
        if (i > n / 2)
        {
            star -= 1;
        }
        else
        {
            star += 1;
        }
        cout << endl;
    }
}
void pat11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int strt = 1;
        if (i % 2 == 0)
            strt = 0;
        else
            strt = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << strt << " ";
            strt = 1 - strt;
        }
        cout << endl;
    }
}
void pat12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        int x = 1;
        // print
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << "-";
        }
        // print
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        space -= 2;
        cout << endl;
    }
}
void pat13(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}
void pat14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }
}
void pat15(int n)
{
    for (int i = n; i >= 1; i--)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }
}
void pat16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch = ch + 1;
        cout << endl;
    }
}
void pat17(int n)
{
    for (int i = 0; i < n; i++)
    {
        int space = n - i - 1;
        // Space
        for (int j = 1; j <= space; j++)
        {
            cout << "-";
        }
        // Characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << "-";
        }
        cout << endl;
    }
}
void pat18(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (char ch = ('A' + N - 1) - i; ch <= ('A' + N - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pat19(int n)
{
    // first half
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        // print
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < space; j++)
        {
            cout << "-";
        }
        // print
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }
    // second half
    space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        int x = 1;
        // print
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << "-";
        }
        // print
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
}
void pat20(int n)
{

    int space = 2 * (n - 1);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        // print
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << "-";
        }
        // print
        for (int j = stars; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            space -= 2;
        else
            space += 2;
    }
}
void pat21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pat20(n);
    return 0;
}
