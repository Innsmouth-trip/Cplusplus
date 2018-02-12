#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int main(){
  srand (time (NULL)); // инициализация рандома
  unsigned int x;
  unsigned int mod;
  while (true){
    cout << "Привет, дружок-пирожок, сколько тебе пузиблинчиков? : ";
    cin >> x;
    if (x > 100){
      int rnd = rand()%3;
      switch (rnd) {
        case 0:
        cout << "Пссс, дружище, столько нет =(" << endl;
        break;
        case 1:
        cout << "Слишком много" << endl;
        break;
        case 2:
        cout << "Надоел" << endl;
        break;
      }
    }
    else {
      mod = x%10;
       if (x >= 5 && x <= 20) {
        cout << x << " " << " Пузиблинчиков"<< endl;
      }
      else {
        switch (mod) {
          case 1:
            cout << x << " Пузиблинчик"<< endl;
            break;
          case 2:
          case 3:
          case 4:
            cout << x << " Пузиблинчика" << endl;
          break;
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0:
            cout << x << " " << " Пузиблинчиков"<< endl;
            break;

        }
      }
    }
  }


return 0;
}
