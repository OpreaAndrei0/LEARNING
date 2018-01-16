#include <iostream>

using namespace std;

int main()
{
    int a , b , c , s , s2 ;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    s = a + b + c;
    if (s2=a+b) {
        c = s - s2;
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
    }
    if (s2=a+c) {
        b = s - s2;
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
    }
    if (s2=c+b) {
        a = s - s2;
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
    }
    return 0;
}
