#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double x, eps;
  cout << "x = ";
  cin >> x;
  cout << "eps = ";
  cin >> eps;
  double y = cos(x);
  cout << "cos(" << x << ") = " << y << endl;

  double ch, sum;
  sum = 1;

  ch = 1;
  int i = 0;
  double sign = -1;
  do {
    double ii = ((2*i+1)*(2*i+2));
    ch *= sign*x*x / ii;
    sum += ch;
    i++;
  }
  while(fabs(ch) > eps);
  cout << "сумма ряда = " << sum << endl;


  return 0;
}
