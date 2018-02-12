#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string in_string = "";

int game(); //прототип функции game;
int cont(); //функция продолжения;
int main() {
  string yes_str = "да";
  string no_str = "нет";
  string answ_str;
  cout << "Игра УГАДАЙ ЧИСЛО" << endl;
  cout << "Привет, дружок-пирожок, сыграем в игру?" <<endl;
  while (true) {
    cout << "Ваш ответ (да/нет): ";
    cin >> answ_str;
    if (answ_str == no_str) {
      cout << "Очень жаль =( Пока!" << endl;
      return 0;
    }
    if (answ_str == yes_str) {
      game();
      return 0;
    }
  }
  return 0;
}

int game(){
  if (in_string == "") {
    cout << "Представтесь, пожалуйста: ";
    cin >> in_string;
  }
  srand (time (NULL));
  int f = (rand()%50)+ 1;
  int a = 0;
  cout << "Компьютер загадал число, угадай его!" << endl;
  while (true) {
    int x_str;
    a++;
    cout << "Введите ответ от 1 до 50: ";
    cin >> x_str;
    cin.clear();
    if(x_str > 50 || x_str <= 0) {
      cout << "ОШИБКА!!! Неверный ввод" << endl;
      cin.ignore(10, '\n');
    }
      else if (f > x_str) {
        cout << "Задуманное число больше" << endl;
      }
        else if (f < x_str) {
          cout << "Задуманное число меньше" << endl;
        }
        else if (f == x_str) {
          cout << "      ПОБЕДА!!! Угадано с "<< a << " попытки!"  << endl;
          cout << "Приятно было провести с тобой время, "<< in_string <<endl;
          cont();
          return 0;
        }
  }
  return 0;
}

int cont() {
  string da_str = "да";
  string net_str = "нет";
  string otwet_str;
  cout << "Хочешь начать с нуля?(да/нет): ";
  while(true){
  cin >> otwet_str;
    if (otwet_str == da_str) {
      game ();
    }
    else if (otwet_str == net_str) {
      cout << "Пока!" << endl;
      return 0;
    }
    else {
      cout << "ОШИБКА!!! Неверный ввод" << endl;
      cin.ignore(10, '\n');
    }
  }
}
