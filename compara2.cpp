#include<iostream>
using namespace std;
        int main ()
{
  float K,I;
  cout<< " Ingrese K: " ; cin>>K;
  cout<< " Ingrese I: " ; cin>>I;
  if (K==I)
  {
     cout<< " el valor de K: "<<K<<" es igual a I:" <<I<<endl;
  }
  else
  {
 if (K<I)
  {
 cout<< " el valor de K: "<<K<<" es menor a I:" <<I<<endl;
  }
 else
 {
 cout<< " el valor de I: "<<I<<" es menor a K:" <<K<<endl;
 }
  }
  return 0;
}
