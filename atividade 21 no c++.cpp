#include <iostream>
using namespace std;
int main(){
	float iniciodojogo; float fimdojogo; float calculo;
 cout<<"qual hora inicia o jogo de (0-12) ";
   cin>>iniciodojogo;
 cout<<"qual hora e o fim do jogo (12-23) ";
   cin>>fimdojogo;
   if (fimdojogo<=iniciodojogo) {
      calculo=(24-iniciodojogo)+fimdojogo;
      }else{
         calculo=fimdojogo-iniciodojogo;
		 }
   cout<<"a duracao do jogo em horas e de "<<calculo;
   return 0;
}
      