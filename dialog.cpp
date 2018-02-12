#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int main(){
  char e;
  double x = 0;
  double a, b, c;
  double f;
  while (true){
    cout << "Программа с меню" << endl;
    cout << "1. Ввести число х" << endl;
    cout << "2. Ввести a, b, c; " << endl;
    cout << "3. Рассчитать значение F" << endl;
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
        cout << "введите a:" ;
        cin >> a;
        cout << "введите b:" ;
        cin >> b;
        cout << "введите c:" ;
        cin >> c;
        break;
      case '3':
        if(x < 0 && b != 0){
           f = a*pow(double(x),2)+b;
        }
        else if(x > 0 && b == 0){
          f = (x-a)/(x-c);
        }
        else {
              f = x/c;
        }
        cout << "f= " << f << endl;
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
