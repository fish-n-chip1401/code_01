#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    unsigned int hangchuc = n / 10;
    unsigned int hangdonvi = n % 10;
    cout << hangchuc << " " << hangdonvi;
    
    return 0;
}