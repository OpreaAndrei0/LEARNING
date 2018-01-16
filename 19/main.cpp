#include <iostream>

using namespace std;

int main()
{
    int a , b , d;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if(a>b) {
        d = a - b;
        cout << "a" << endl;
        cout << "Diferenta de varsta=" << d;
    }
    else {
        d = b - a;
        cout << "b"<< endl;
        cout << "Diferenta de varsta=" << d;
    }
    return 0;
}
