#include <iostream>
using namespace std;
int main()
{
	 int Ha,Hb;int Ma,Mb;float calculoA,calculoB;int maiorH,menorH;int maiorM,menorM;
	 cout<<"digite a idade do primeiro homem : ";
   cin>>Ha;
   cout<<"digite a idade do segundo homem : ";
   cin>>Hb;
   cout<<"digite a idade da primeira mulher : ";
   cin>>Ma;
   cout<<"digite a idade da segunda mulher : ";
   cin>>Mb;
    if (Ha>Hb) {
      maiorH=Ha;
      menorH=Hb;
   }else{
      maiorH=Hb;
      menorH=Ha;
}
   if (Ma>Mb) {
      maiorM=Ma;
      menorM=Mb;
   }else{
      maiorM=Mb;
      menorM=Ma;
}
      calculoA=maiorH+menorM;
   calculoB=menorH*maiorM;
   cout<<"a soma das idades do homem mais velho com a mulher mais nova e igual a "<<calculoA;
   cout<<"\n";
   cout<<"o produto das idades do homem mais novo o com a mulher mais velha e "<<calculoB;
    return 0;
}