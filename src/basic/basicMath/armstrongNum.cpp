#include<iostream>
#include<cmath>
using namespace std;
int cnt(int n) {
    return log10(n) + 1;
}
void armstrongNumber(int n, int power) {
    // TODO: implement
    int ldigit;
    double addDigit;
    int res = 0,ogNum = n;
    while (n > 0)
    {
        /* code */
        ldigit = n%10;
        addDigit = pow(ldigit,power);
        res += addDigit;
        n/=10;
    }
    if(ogNum == res){
        cout << "Its an Armstrong Number." << endl;
    }else{
        cout << "Its not an Armstrong Number" << endl;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int power = cnt(n);
        armstrongNumber(n, power);
    }
    return 0;
}