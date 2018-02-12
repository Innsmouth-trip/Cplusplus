#include <iostream>
#include <cmath>
using namespace std;

double sum(double , double );
int main(){
  char e;
  double x = 0;
  double eps;
  double s;
  while (true){
    cout << "Вычисление суммы ряда" << endl;
    cout << "1. Ввести число х" << endl;
    cout << "2. Ввести eps" << endl;
    cout << "3. Рассчитать значение суммы ряда" << endl;
    cout << "4. Выход" << endl;
    cout << "ваш выбор: ";
    cin >> e;
    //system ("clear");
    switch (e) {
      case '1':
       cout << "введите х:" ;
       cin >> x;
        break;
      case '2':
        cout << "введите eps:" ;
        cin >> eps;
        break;
      case '3':
      s = sum(x,eps);
      cout << "e = " << exp(-x)<< endl;
      cout << "сумма ряда = " << s << endl;
      break;
      case '4':
        return 0;
        break;
      default:
        cout << "Ошибка! Выбран неверный пункт меню." << endl;
    }
  }
  return 0;
}

double sum(double x, double eps){
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
  return sum;
}
