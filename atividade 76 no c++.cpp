 #include <iostream>
using namespace std;
int main()
{
int	linha,coluna;

for (linha=1;linha<= 10;linha++) {
   for (coluna=1;coluna<= 60;coluna++) {
         if (linha==1 || linha==10){
            cout<<"+";
         }else if (coluna==1 || coluna==60) {
           cout<<"+";
         }else{
            cout<<" ";
     }
 }
   cout<<endl;

}
return 0;
}