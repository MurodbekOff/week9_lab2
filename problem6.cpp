#include <iostream>
using namespace  std;

int digitnum(int a, int count = 0) {
    if (a==0) return count;
    return digitnum(a/10, count+=1);
}
int main() {
    int a;
    cin>>a;
    cout<<digitnum(a);
    return 0;
}