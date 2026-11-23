#include <iostream>

using namespace std;

int main()
{
    int M;
    cin >> M;
    int gio = M / 60;
    int phut = M % 60;
    cout << gio << " " << phut;
    return 0;
}