#include<iostream>
using namespace std;

int  main()
{
	float KIRV_v,KIRV_d,KIRV_t;
	cout<< " Ingrese la distancia (en km) KIRV_d= " ;
	cin>>KIRV_d;
	cout<< " Ingrese el tiempo (en horas) KIRV_t= " ;
	cin>>KIRV_t;
	KIRV_v=KIRV_d/KIRV_t;
	cout<< " La velocidad calculada es de KIRV_v= " <<KIRV_t<<endl<<endl;
	return  0 ;

}
