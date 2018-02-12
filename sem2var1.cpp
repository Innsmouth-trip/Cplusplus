#include <iostream>
#include <cmath>
using namespace std;

int main()
{

      float a, b, c; //действительные числа
      float Xn, Xk, dX, f; //значения функции (начальное, конечное, dx(шаг), f - результат)
      cout << "Введите Xn, Xk, dX: " ;
      cin >> Xn >> Xk >> dX;
      while(Xk<=Xn){
        cout << "Неправильно. Xk не может быть < Xn";
        cout << "Введите Xn, Xk, dX: " ;
        cin >> Xn >> Xk >> dX;
      }
      cout << "Введите a, b, c: ";
      cin >> a >> b >> c;

      for(float x = Xn; x <= Xk; x += dX){
        if(x < 0 && b != 0){
          float f = pow(float(a*x),2 + b);
          cout << "f(x < 0 && b != 0): " << f << endl;
        }
            else if(x > 0 && b == 0){
              f = (x-a)/(x-c);
                cout << "f(x > 0 && b == 0): " << f << endl;
            }
                  else {
                        f = x/c;
                        cout << "f: " << f << endl;
                  }
}
  return 0;

}
