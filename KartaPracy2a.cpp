#include <iostream> 
#include <math.h>
using namespace std;
int main(){
  // Zad.1
  // int a;
  // int b;
  // cout << "Podaj a: " cin >> a;
  // cout << "Podaj b: " cin >> b;
  // if ((a+b)%2==0){
  //   cout << "Suma podanych liczb nie jest parzystka";
  // }
  // else{
  //   cout << "Suma podanych liczb nie jest parzysta";
  // }
  // Zad.2
  // int a;
  // int b;
  // cout << "Podaj a: " cin >> a;
  // cout << "Podaj b: " cin >> b;
  // int art = (a+b)/2;
  // int g = sqrt(a*b);
  // if (art > g){
  //   cout << "TAK";
  // }
  // else {
  //   cout << "Nie";
  // }
  // Zad.3
//   int a;
//   int b;
//   int c;
//   cout << "Podaj a: " cin >> a;
//   cout << "Podaj b: " cin >> b;
//   cout << "Podaj c: " cin >> c;
//   if (a==b){
//     cout << "Tak, a i b";
//   }
//   else if (a==c){
//     cout << "Tak, a i c";
//   }
//   else if (b==c){
//     cout << "Tak, b i c";
//   }
//   else if (a==b==c){
//     cout << "Wszystkie sa rowne";
//   }
//   else{
//     cout << "Zadna nie jest rowna";
//   }
// Zad.4
  int a,b,c,d;
  cout << "Podaj 4 liczby: "
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  if (a<b and a<c and a<d){
    cout << "Liczba "a" jest najmniejsza";
  }
  else if (b<a and b<c and b<d){
    cout << "Liczba "b" jest najmniejsza";
  }
  else if(c<a and c<b and c<d){
    cout << "Liczba "c" jest najmniejsza";
  }
  else{
    cout << "Liczba "d" jest najmniejsza";
  }
}