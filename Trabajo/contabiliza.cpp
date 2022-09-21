//programa que permite contabilizar
//nombre de autor  STALIN ADALBERTO  FRANCIS QUINDE 
//nombre de modificador LEIVER ISMAEL PAZMIÑO MORENO
//FECHA 21/29/2022
#include<iostream>
using namespace std;
int main()
{
	int PMLIi=0,PMLIl;
	float PMLIx,PMLIs=0;
	cout<<"ingrese el limite l="; cin>>PMLIl;
	do{
		
	cout<<"ingrese el numero x="; cin>>PMLIx;
	PMLIi=PMLIi+1;
	PMLIs=PMLIs+PMLIx;



	}while(PMLIi<PMLIl);
	cout<<"Se ingresaron "<<PMLIl<<" numeros "<< "que sumaron "<<PMLIs<<endl;
	return 0;



}
