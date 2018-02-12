#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int main(){
  unsigned int x;
//  system ("clear");
    while (true){
  cout << "Привет, дружок-пирожок, сколько тебе пузиблинчиков? : ";
  cin >> x;
  if (x > 100){
    cout << "Пссс, дружище, столько нет =(" << endl;
  }
  else if (x >= 5 && x <= 20) {
    cout << x << " " << " Пузиблинчиков"<< endl;

  }
      else if (x % 10 == 1){
      cout << x << " Пузиблинчик"<< endl;
      }

          else if (x % 10 == 2 || x % 10 == 3 || x % 10 ==4){
              cout << x << " " << " Пузиблинчика"<< endl;
          }


                    else {
                      cout << x << " " << " Пузиблинчиков" << endl;
                    }


}

return 0;
}
