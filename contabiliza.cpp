#include<iostream>
using namespace std;

int main()
{
	int KIRV_i=0,KIRV_l;
	float KIRV_x,KIRV_s=0;
	cout<<"ingrese el limite KIRV_l=";
	cin>>KIRV_l;
	{	
	cout<<"ingrese el numero KIRV_x="; 
	cin>>KIRV_x;
	KIRV_i=KIRV_i+1;
	KIRV_s=KIRV_s+KIRV_x;
	}
        while(KIRV_i<KIRV_l);
	cout<<"Se ingresaron "<<KIRV_l<<" numeros "<< "que sumaron "<<KIRV_s<<endl;
	return 0;
}
