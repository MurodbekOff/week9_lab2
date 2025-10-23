#include <iostream>
using namespace  std;

int isPrime(int a, int counter = 2) {
    if (counter >double(a)/2) return true;
    return a%counter == 0? false:isPrime(a, counter+1);
}


int main() {
    int a;
    cin>>a;
    if (isPrime(a)) cout<<"Prime";
    else cout<<"Not Prime";
    return 0;
}