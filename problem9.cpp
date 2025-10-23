#include <iostream>
using namespace  std;

int maxdig(int a, int max = 0) {
    if (a==0) return max;
    return a%10>max? maxdig(a/10, a%10):maxdig(a/10, max);
}
int main() {
    int a;
    cin>>a;
    cout<<maxdig(a);
    return 0;
}