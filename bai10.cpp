#include <iostream>

using namespace std;

int main()
{
    int s;
    cin >> s;
    int phut = s / 60;
    int giay = s % 60;
    cout << phut << " " << giay;

    return 0;
}