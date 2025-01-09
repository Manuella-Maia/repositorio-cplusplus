#include <iostream>
using namespace std;
int main()
{
float temp_Fahrenheit;float temp_Celsius;float conversao;
cout<<"qual a temperatura em graus Fahrenheit ? "; 
cin>>temp_Fahrenheit;
conversao=(temp_Fahrenheit-32)*5/9;
cout<<"a temperatura em graus Celsius = "<<conversao;
return 0;
} 
