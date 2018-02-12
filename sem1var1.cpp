#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double pi, a, z1, z2;
  pi = 3.14159265359;
  cout << "Введите число a: " ;
  cin >> a;

  double x = (3*pi-2*a);
  double y = (5*pi+2*a);


  z1 = 2*(pow(sin(x),2))*pow(cos(y),2);
  z2 = 1.0/4.0 - 1.0/4.0 * sin((5.0/2.0)*pi - 8 * a);

  cout << "z1 = " << z1 <<endl;
  cout << "z2 = " << z2 <<endl;


  return 0;
}
