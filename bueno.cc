#include<iostream>
using namespace std; 
int esPrimo(int x){
  int Flag=0;
  for(int i=2; i<=x/2; i++)
    {if (x%i==0)
	Flag=1;}
  return Flag;
}
int main(){
  int p=0; 
  cout<<"introduzca un numero"<<endl; 
  cin>>p;
  do{
    if(p%2==0)
      p=p+1;
    if(esPrimo(p)==1)
      p=p+2;
  }
  while(esPrimo(p)==1);
    cout<<"el valor de p es"<<p<<endl;
  return 0;
}

