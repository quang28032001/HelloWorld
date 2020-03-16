
\\vidu1
#include <iostream>

using namespace std;
int tong(int n, int a)
{
    a=a+(n-n/10*10);
    return tong(n/10);
}
int main()
{
    a=5;
    a=6;
    cout << a;
    return 0;
}
