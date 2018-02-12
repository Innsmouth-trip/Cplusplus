#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
  srand(time(NULL));
  int n,i,count=0,ind=0;
  cout<<"Введите количество элементов массива: ";
  cin>>n;
  double *X=new double[n],C,maxm=0,pro=1;
  for(i=0;i<n;i++)
  {
    X[i]= (rand()%1001)*0.1;
    if(i%2==0)
    {
      X[i]=-X[i];
    }
  }
  cout<<"Рандомный массив: ";
  for(i=0;i<n;i++)
  {
    cout<<X[i]<<" ";
  }
  cout << endl;
  cout<<"Введите число С: ";
  cin>>C;

  for (i = 0; i < n; i++) {
    if( X[i] > C)
      count++;
  }

  cout<<"Количество эл-ов больших С: "<<count<< endl;;

  maxm = fabs(X[0]);
  for (i = 1; i < n; i++) {
    if (maxm <= X[i])
    {
      ind = i;
      maxm = fabs(X[i]);
    }
  }

  for(i=0;i<n;i++)
  {
    if(i>ind)
    {
      pro*=X[i];
    }
  }
  cout<<"Произведение эл-ов массива: "<< pro;
  cout << endl;
  return 0;
}
