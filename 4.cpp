#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int k;
  // cout << "введите k:";
  // cin >> k;
  do {
    cout << "введите k (>= 10): ";
    cin >> k;
  }
  while (k < 10);

  int sum = 0; //переменная с исходно нулевым значением
  int s = -1; //еще ячейка памяти, в которую ты кладешь -1
  for (int i = 1; i <= k; ++i) //затем ты проходишь цикл для индекса i от 1 до k
  {
    sum += (i*i*s); //на каждой итерации ты прибавляешь к общей сумме i*i*s
    s *= -1;  // в конце итерации меняешь знак s на противоположный:
  }
  cout << "S = " << sum << endl;


  return 0;
}
