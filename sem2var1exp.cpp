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

  cout << "e = " << exp(-x)<< endl;


    double sum, p, n;
    sum = 1;
    p = 1;
    n=0;

    do {

      p *= -x / (n+1);
      sum += p;
      n++;

  }
  while(fabs(p) > eps);
  cout << "сумма ряда = " << sum << endl;




  return 0;
}
