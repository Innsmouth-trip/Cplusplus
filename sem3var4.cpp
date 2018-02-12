#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main () { //вводим функцию 
  srand(time(NULL)); //инициализируем рандом
  int n,i,j,last; // вводим переменные 
  double sum_otr=0,sum_mid=0; // присваиваем переменным дабл и сум значение нуль.
  //создание массива размера n и инициализация
  cout<<"Введите размер массива: "; //выводим на экран текст
  cin>>n; // вводим n
  double* arr=new double[n]; //
  for (i=0;i<n;i++) { //создаем цикл for. в котором I начинается с 0, и пока I меньше n, то продолжаем шаг - i++.
    arr[i]=(rand()%100)/10.-5; // массиву arr[i] = присваиваем рандомные числа
    cout<<arr[i]<<" "; //выводим их
  }
  cout << endl;
  //вычисление суммы элементов с нечетными номерами
  for (i=0;i<n;i++)
      if (i%2==1)
        sum_otr += arr[i]; // не понял
  cout<< "Сумма элементов с нечетными элементами: " << sum_otr << endl;
  //поиск последнего отрицательного элемента
  for (i=last=n-1;i!=0;i--)
      if (arr[i]<0) {
          last=i;
          break;
      }
  //вычисление суммы между первым и последним отрицательным
  for (i=0;i<last;i++){
      if (arr[i]<0) {
          for (j=i+1;j<last;j++)
            sum_mid+=arr[j];
          break;
      }
  }
  cout<<"Сумма между первым и последним отрицательными: "<<sum_mid<<endl;

  i = 0;
  int n1 = n;
  while (i<n1)
  {
    if (fabs(arr[i])<=1)
    {
      for (j = i+1; j < n1; j++) {
        arr[j-1] = arr[j];
      }
      n1--;
      arr[n1] = 0;
    }
    else i++;
    //cout << i << endl;
  }
  for (i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout << endl;


  return (0);
}
