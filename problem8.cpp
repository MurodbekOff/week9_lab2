#include <iostream>
using namespace  std;

int sumeven(int a, int sum = 0, int counter = 2) {
    if (counter > a) return sum;
    return sumeven(a, sum+counter, counter+2);
}

int main() {
    int a;
    cin>>a;
    cout<<sumeven(a);
    return 0;
}