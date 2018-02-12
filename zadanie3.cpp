/*
Павловская семинар 3 вариант 13
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
  srand (time(NULL)); // инициируем рандом

  int i, n;           //переменные цикла, кол-во элементов массива
  double max_value;   // максимальное значение
  double a, b;        // диапазон
  int count;          // счетчик
  int indmax;
  double summ;

  cout << "Введите n: " ; //Кол-во элементов массива
  cin >> n;
  double list[n];     // целевой массив

  for (i = 0; i < n; i++) {
    list[i] = (rand()%20001-10000.0)/100;
    cout << list[i];
    cout << " ";
  }
  cout << endl;

  cout << "Введите А: ";
  cin >> a;
  cout << "Введите B: ";
  cin >> b;

  count = 0;
  for (i = 0; i < n; i++) {
    if (list[i] >= a && list[i] <= b)
      count++;
  }
  cout<< "кол-во элементов в диапазоне: " << count << endl;

    // находим максимальное значение
  max_value = list [0];
  indmax = 0;
  for (i = 1; i < n; i++)
    if (max_value < list[i]){
      max_value = list[i];
      indmax = i;
    }
  cout << "indmax = " << indmax << endl;
  cout << "max_value = " << max_value << endl;

  summ = 0;
  for (i = indmax+1; i < n; i++) {
    summ += list[i];
  }
  cout << "Сумма элементов массива после максимального: " << summ <<endl ;

  return 0;
}
