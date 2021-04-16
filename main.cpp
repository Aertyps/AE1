#include <iostream>

using namespace std;

string guardaPalavra;

bool confere(string p){

  if(p.length() != 4){
    return false;
  }
  
      if(p[0] != '#'){
      return false;
    }

    if(p[1] <= '1'){
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

char decodificar(string p){
  
    if(p[1] == '2'){
      if(p[3] == '1')
      return 'a';

      if(p[3] == '2')
      return 'b';

      if(p[3] == '3')
      return 'c';
      
    }

    if(p[1] == '3'){

      if(p[3] == '1')
      return 'd';

      if(p[3] == '2')
      return 'e';

      if(p[3] == '3')
      return 'f';
    }

    if(p[1] == '4'){

      if(p[3] == '1')
      return 'g';

      if(p[3] == '2')
      return 'h';

      if(p[3] == '3')
      return 'i';
    }

    if(p[1] == '5'){

      if(p[3] == '1')
      return 'j';

      if(p[3] == '2')
      return 'k';

      if(p[3] == '3')
      return 'l';
    }

    if(p[1] == '6'){

      if(p[3] == '1')
      return 'm';

      if(p[3] == '2')
      return 'n';

      if(p[3] == '3')
      return 'o';
      
    }

    if(p[1] == '7'){

      if(p[3] == '1')
      return 'p';

      if(p[3] == '2')
      return 'q';

      if(p[3] == '3')
      return 'r';

      if(p[3] == '4')
      return 's';
    }

    if(p[1] == '8'){
      
      if(p[3] == '1')
      return 't';

      if(p[3] == '2')
      return 'u';

      if(p[3] == '3')
      return 'v';
    }

    if(p[1] <= '9'){

      if(p[3] == '1')
      return 'w';

      if(p[3] == '2')
      return 'x';

      if(p[3] == '3')
      return 'y';

      if(p[3] == '4')
      return 'z';
    }

    return '0';
    
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
    }else if(N > 50){
       cout << "Valor invalido,Informe um valor menor ou igual a 50!\n";
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
       guardaPalavra += decodificar(palavra);
     }else{
       cout << "Valor invalido,Informe um valor valido!\n";
     }

  }

   cout << "Resultado:\n"<<guardaPalavra;
    
}