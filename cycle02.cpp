/************************************************************
* Русакова Екатерина Алексеевна, ПИ-231                     *
* Share-Link:https://www.onlinegdb.com/online_c++_compiler  *
* Тема: Программирование циклов с ветвлениями, 16 вариант   *
*************************************************************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
  float a, l, liamda, Tc, v, Tv, W, Q, Nu, Re, Gr, g;
  cout << "Введите a=";
  cin >> a;
  cout << "Введите l=";
  cin >> l;
  cout << "Введите liamda=";
  cin >> liamda;
  cout << "Введите Tc=";
  cin >> Tc;
  cout << "Введите v= ";
  cin >> v;
  cout << "Введите Tv= ";
  cin >> Tv;
  cout << "Введите W= ";
  cin >> W;
  cout << "Введите g= ";
  cin >> g;

  Gr = ( (Tv - Tc) / 273.0 ) * ( (g * pow (l, 3.0) ) / (v * v) );

  while ( (W > 0.4) && (W < 11.0) ) {
    Re = (W * a) / v;
    cout << "Re=" << Re << endl;
  }

  if (Re < 2200.0) {
    Nu = 0.13 * pow (Re, 0.33) * pow (Gr, 0.1);
  } else {
    Nu = 0.018 * pow (Re, 0.88);}
    cout << "Nu=" << Nu << endl;
  }
  Q = 4.0 * liamda * l * Nu * (Tv - Tc);
  cout << "Q= " << Q << endl;

  return 0;
