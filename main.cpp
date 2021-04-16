#include <iostream>

using namespace std;

bool confere(string p){

  if(p.length() != 4){
    return false;
  }
  
      if(p[0] != '#'){
      return false;
    }

    if(p[1] <= '0'){
      return false;
    }

    if(p[2] != '='){
      return false;
    }

    if(p[3] <= '0'){
      return false;
    }

  
    return true;
  
}

int main() {

  int N = 0;
  string palavra =""; 
  bool op = true;

  while(op){

    cout << "Informe um numero N que identificara quantas teclas serao informadas\n";
    cin >> N;

    if(N <=0){
       cout << "Valor invalido,Informe um valor valido!\n";
    }else{
      op = false;
    }
  }
  
  

  while(N > 0){

     cout << "\ninforme o caractere sharp (#),";
     cout << " o numero da tecla,";
     cout << "caractere igual (=) e o numero de vezes que a teclar sera pressionada\n";
     cin >> palavra;

     if(confere(palavra)){
       N--;
       decodificar(palavra);
     }else{
       cout << "Valor invalido,Informe um valor valido!\n";
     }

  }
    
}