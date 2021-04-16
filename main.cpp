#include <iostream>
using namespace std;

int main() {

  int N = 0;
  string palavra =""; 

  cout << "Informe um numero N que identificara quantas teclas serao informadas\n";
  cin >> N;
  

  for(int i = 0;i<N;i++){
     cout << "informe o caractere sharp (#),";
     cout << " o numero da tecla,";
     cout << "caractere igual (=) e o numero de vezes que a teclar sera pressionada.\n";
     cin >> palavra;
  }
  

}