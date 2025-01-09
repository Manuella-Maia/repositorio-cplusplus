#include <iostream>
using namespace std;
int main() 
{
	string nomeP;float quantidadeAD,precoUNI;float total,totalPA;float desconto=0;
	cout<<"digite o nome do produto : ";
   cin>>nomeP;
   cout<<"digite quantos produtos forao adiquiridos : ";
   cin>>quantidadeAD;
   cout<<"digite o preço unitario do produto : ";
   cin>>precoUNI;
   if (quantidadeAD<=5){
      desconto=0.02;
   }else if(quantidadeAD>5 && quantidadeAD<=10){
         desconto=0.03;
      }else{
         desconto=0.05;
  }
   total=quantidadeAD*precoUNI;
   totalPA = total - (total * desconto);
  cout<<"o total a pagar e de RS"<<totalPA;
   return 0;
}