#include <iostream>
using namespace std;

int main()
{
    int n, k, i;
    int tmp=0;
    cin >> n;
    cin >> k;
    for (i=2;i <= n; i++) tmp = (tmp + k) % i;
    cout << tmp+1;
    return 0;
}