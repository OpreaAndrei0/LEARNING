#include <iostream>
using namespace std;
int main()
{
  int a , b , rez;
  char op;
  cout << "a=";
  cin >> a;
  cout << "b=";
  cin >> b;
  cout << "op=";
  cin >> op ;

  if (op == '+'){
        rez = a+b;
  }
  else if (op =='-'){
    rez = a -b;
  }
  else if (op=='*'){
    rez = a*b;
  }
  else if (op =='/'){
    rez  = a/b;
  }
  else {
    cout << "eroare opreratie";
    return 1;
  }
cout << a << op << b << "=" << rez;
    return 0;
}
