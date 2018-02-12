#include <iostream>
#include <cmath>

using namespace std;


int main(){

  int a, b, c; //объявляем переменные


  cout << "Введите первое число: "; //вывод предложения
  cin >> a; // присваеваем значение

  cout << "Введите второе число: ";
  cin >> b;

  cout << "Введите третье число: ";
  cin >> c;

  int d = a + b + c;
  cout << "Сумма чисел = " << d << endl; // вывод ответа

  double e =  d / 3.0; //не явное
  cout << "Среднее арифметическое = " << e << endl;

// double e = double(d) / 3; //второй способ (явное приведение)


  if (a>b &&  a>c)
    cout << "Максимальное число: " << a << endl;
  if (b>a && b>c)
    cout << "Максимальное число: " << b << endl;
  if (c>a && c>b)
    cout << "Максимальное число: " << c << endl;

  if (a<b && a<c) {
    a = pow(a,2);
    cout << "Квадрат минимального числа: " << a << endl;
  }
  else if (b<c) {
    b = pow(b,2);
    cout << "Квадрат минимального числа: " << b << endl;
  }
  else {
    c = pow(c,2);
    cout << "Квадрат минимального числа: " << c << endl;
  }

return 0;

}
