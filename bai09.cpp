#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tram = n / 100;
    int chuc = (n % 100) / 10;
    int donvi = (n % 100) % 10;
    int tong = tram + chuc + donvi;
    cout << tong;
    return 0;
}