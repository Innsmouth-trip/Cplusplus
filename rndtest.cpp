#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
  srand (time (NULL)); // инициализация рандома

  //cout << "Rend_MAX = " << RAND_MAX << endl;
  int dice;
  dice = (rand()%12)+1;
  cout << "Случайное число = " << dice << endl;
return 0;
}
