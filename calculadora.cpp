
// autor:KARINA ISABEL RENTERIA VALENCIA
#include<iostream>
using namespace std;

int  main()
{
        float KIRV_x,KIRV_y,KIRV_s,KIRV_r,KIRV_m,KIRV_d;
        cout<< " Ingrese el valor de KIRV_x=: " ;
        cin>>KIRV_x;
        cout<< " Ingrese el valor de KIRV_y=: " ;
        cin>>KIRV_y;
        KIRV_s=KIRV_x+KIRV_y;
        KIRV_r=KIRV_x-KIRV_y;     
        KIRV_m=KIRV_x*KIRV_y;
        KIRV_d=KIRV_x/KIRV_y;

        cout<< " El resultado de la suma " <<KIRV_x<< " + " <<KIRV_y<< " = " <<KIRV_s<<endl;
        cout<< " El resultado de la resta " <<KIRV_x<< " - " <<KIRV_y<< " = " <<KIRV_r<<endl;
        cout<< " El resultado de la multiplicación  " <<KIRV_x<< " * " <<KIRV_y<< " = " <<KIRV_m<<endl;
        cout<< " El resultado de la división " <<KIRV_x<< " / " <<KIRV_y<< " = " <<KIRV_d<<endl;
        return 0 ;
}
