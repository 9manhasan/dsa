#include <iostream>
#include <cmath> // Correct header for log10 function
using namespace std;

int cnt(int n) {
    return log10(n) + 1;
}

int main() { 
    int num;
    cout << "Enter a number: "; // Prompt the user to enter a number
    cin >> num;
    cout << "The number of digits in " << num << " is " << cnt(num) << endl;
    return 0;
}
