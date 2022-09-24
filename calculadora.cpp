#include<iostream>
using namespace std;

int  main()
{
        float x,y,s,r,m,d;
        cout<< " Ingrese el valor de x=: " ;
        cin>>x;
        cout<< " Ingrese el valor de y=: " ;
        cin>>y;
        s=x+y;
        r=x-y;
        m=x*y;
        d=x/y;

        cout<< " El resultado de la suma " <<x<< " + " <<y<< " = " <<s<<endl;
        cout<< " El resultado de la resta " <<x<< " - " <<y<< " = " <<r<<endl;
        cout<< " El resultado de la multiplicación  " <<x<< " * " <<y<< " = " <<m<<endl;
        cout<< " El resultado de la división " <<x<< " / " <<y<< " = " <<d<<endl;
        return 0 ;
}
