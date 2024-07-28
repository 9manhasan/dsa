#include<iostream>
using namespace std;

void func(int n) {
    // TODO: implement
    for (int i = 1; i <= n; i++) {
        if (n%i == 0)
        {
            cout << i <<" ";
        }
    }
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        func(n);
    }
    return 0;
}