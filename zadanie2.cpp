/*
Ввести n и сгенерировать строку с числами, которые не повторяются.
*/

#include <iostream>
#include <cstdlib>
bool repeat(int, int *);//прототип функции определяющей повторения
using namespace std;

int main()
{
  srand(time(NULL));

  //определяем массив
  int n;
  cout << "Введите кол-во символов массива: " ;
  cin >> n;
  int *M = new int[n];

  //инициализируем массив
  for (int i = 0; i < n; i++)
  do
  {
    M[i] = (rand()%1000)+1;//случайные в диапазоне от 1 до 1000
  } while (repeat(i, M));

  //вывод массива
  for (int i = 0; i < n; i++)
  cout << M[i] << " " ;
  cout << endl;

  return 0;
}

//при повторении - true
bool repeat(int k, int *M)
{
  for (int i = 0; i < k; i++)
    if (M[k] == M[i])
        return true;
  return false;
}
