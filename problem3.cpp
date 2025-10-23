#include <iostream>
using namespace  std;

int gcd(int num1, int num2) {
    int temp;
    while (num2!=0) {
        temp = num1;
        num2 = num1%num2;
        num2 = temp;
    }
    return num1;
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<gcd(a, b)<<endl;
    return 0;
}