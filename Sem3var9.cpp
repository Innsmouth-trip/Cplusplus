/*
   Sem 3 var 9
 */

#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;


int main()
{
  srand ( time(NULL) );
  int N =10; // размер массива.
  double* mas = new double [N];
  for (int i=0; i<N; i++)
  {
    mas[i]=-5.00 + ((rand() % 1001) / 100.0); // генерируем случайные числа [-5, 5]
    cout<<mas[i]<<"; ";
  }
  cout<<endl;
  double max = mas[0];
  int pos_max = 0;
  int pos_pol = 0;
  for (int i=0; i<N; i++)
  {
    if (fabs(mas[i]) > fabs(max))
    {
      max = mas[i];
      pos_max = i;
    }
  }
  for (int i=0; i<N; i++)
  if (mas[i] > 0)
  {
    pos_pol = i+1; //позиция после первого положительного
    break;
  }
  cout << pos_pol << endl;
  double sum = 0;
  //for (int i=pos_pol; i<N; i++)
  //  sum += fabs(mas[i]);
  int j = pos_pol;
  while (mas[j] <= 0) {
    sum += mas[j++];
  }

  cout << "Максимальная позиция: "<< pos_max << endl;
  cout << "Сумма: " << sum << endl;
  cout << "Максимальный элемент: " << max << endl;

  cout<< endl;
  return 0;
}
