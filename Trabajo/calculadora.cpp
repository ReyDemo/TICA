//Programa que presenta las operaciones básicas
//Creado por PAZMIÑO MORENO LEIVER 
//Fecha:21 -09-2022

#include<iostream>
using namespace std;

int main()
{
	float pmlix,pmliy,pmlis,pmlim,pmlid,pmlir;
	//Ingreso de datos
	cout<<"Ingrese en valor de pmlix=:";
	cin>>pmlix;
	cout<<"Ingrese en valor de pmliy=:";
	//Operaciones 
	cin>>pmliy;
	pmlis=pmlix+pmliy;
	pmlim=pmlix*pmliy;
	pmlid=pmlix/pmliy;
	pmlir=pmlix-pmliy;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<pmlix<<" + "<<pmliy<<" = "<<pmlis<<endl;
	cout<<"Las multiplicacion de "<<pmlix<<" * "<<pmliy<<" = "<<pmlim<<endl;
	cout<<"Las division de "<<pmlix<<" / "<<pmliy<<" = "<<pmlid<<endl;
	cout<<"Las resta de "<<pmlix<<" - "<<pmliy<<" = "<<pmlir<<endl;
	return 0 ;

}

