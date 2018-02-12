#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main() {
  srand (time (0)); // инициализация рандома
  int n;
  cout << "Ввелите кол-во элементов массива: ";
  cin >>  n;
  int a[n]; // Объявляем массив из n элементов
  for(int i = 0; i<n; i++) {// создаем цикл for для int [a]
    a[i] = (rand()%360); // заносим рандомные числа в массив
    cout << a[i] << " ";
  }
  cout << endl;
  double b[n]; // Объявляем новый массив из 5 элементов.
  for(int i = 1; i < n ;i++)
  {
    b[i] = sin(a[i-1] * 3.14 /180);
    cout << b[i] << " " << endl;
  }
        return 0;
}
