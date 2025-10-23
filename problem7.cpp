#include <iostream>
using namespace  std;

int nfib(int a, int b=1, int c=1, int counter = 1) {
    if (counter == a) return b;
    return nfib(a, c, b+c, counter+1);
}

int main() {
    int a;
    cin>>a;
    cout<<nfib(a);
    return 0;
}
// 1 1 2 3 5 8 13