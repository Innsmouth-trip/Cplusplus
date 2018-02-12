#include <iostream>
#include <cmath>
#include <curses.h>
#include <cstdlib>
using namespace std;


int main(){
  char chb = '+';
  char chc = '+';
  char e;
  int ret;
  double x = 0;
  double x1, x2;
  double a, b, c;
  double f;
  while (true){
    cout << "меню" << endl;
    cout << "1. Ввести числа a, b, c: " << endl;
    cout << "2. Вывести корни на экран: " << endl;
    cout << "3. Выход." << endl;
    cout << "Ваш выбор, Месье: ";
    cin >> e;

    system ("clear");
    switch (e) {
      case '1':
       cout << "введите a: " ;
       cin >> a;
       cout << "введите b: " ;
       cin >> b;
       cout << "введите c: " ;
       cin >> c;
       // не понял как быть если b && C < 0
       system ("clear");

        break;
      case '2':
      double D;
      if (b < 0) chb = '-';
      if (c < 0) chc = '-';

      cout << "Формула = " << a << "x^2 " << chb << " " << fabs(b) << "x "
      << chc << " " << fabs(c) << "=0" << endl;
          D = (b * b) - (4 * a * c);
          cout << "D = " << D << endl;

          if (D > 0)
          {
            x1 = (-b - pow(D, 1.0/2.0)) / (2 * a);
            x2 = (-b + pow(D, 1.0/2.0)) / (2 * a);
            cout << "(x1 = " << x1 << ")" << endl;
            cout << "(x2 = "<< x2 << ")"<< endl;
          }
          else if (D == 0)
          {
            double x;
            x = -b / (2 * a);
            cout << "x ="<< x << endl;
          }
              else
              {
                cout << "Нет корней" << endl;
              }

              cout << "Месье, введите любой символ чтобы вернуться назад: ";

              cin >> ret;
              system ("clear");
              break;


      case '3':
      return 0;
        break;

        default:
          cout << "Ошибка! Выбран неверный пункт меню." << endl;
      }
}

  return 0;

}
