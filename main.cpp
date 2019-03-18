#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';

    int max;
    if ( a < b )
        max = b;
    else
        max = a;
    cout << max;
    int min;
    if ( a < b )
        min = a;
    else
        min = b;
    cout << max;
    return 0;
}
