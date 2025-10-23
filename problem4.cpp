#include <iostream>
using namespace  std;

int reversed(int a, int ans = 0) {
    if (a==0) return ans;
    ans*=10;
    return reversed (a/10, ans+=a%10);
}

int main() {
    int a;
    cin>>a;
    cout<<reversed (a);
    return 0;
}