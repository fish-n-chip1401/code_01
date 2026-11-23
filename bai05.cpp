#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int m = x / 100;
    int c = x % 100;
    cout << m << " " << c;
    return 0;
}