#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class operaciones{

public:
int primero;
int segundo;
int resultado;

void sumar(){
resultado=primero+segundo;
cout<<"La suma es: "<<resultado<<endl;
system("pause");
}
void restar(){
resultado=primero-segundo;
cout<<"La resta es: "<<resultado<<endl;
system("pause");
}
void multiplicar(){
resultado=primero*segundo;
cout<<"La multiplicacion es: "<<resultado<<endl;
system("pause");
}
void dividir(){
resultado=primero/segundo;
cout<<"La divicion es: "<<resultado<<endl;
system("pause");
}
operaciones(int,int);
};

operaciones::operaciones(int dato1, int dato2){
primero=dato1;
segundo=dato2;
}

int main()
{
	int uno,dos,opcion;
	cout<<"Calculadora basica"<<endl;
	cout<<"Escriba el primero numero"<<endl;
	cin>>uno;
	cout<<"Escriba el segundo numero"<<endl;
	cin>>dos;
	operaciones objeto1(uno,dos);

	cout<<"\nMENU DE OPCIONES"<<endl;
	cout<<"Escriba el numero de la operacion que desea realizar"<<endl;
	cout<<"1.-Suma"<<endl;
	cout<<"2.-Resta"<<endl;
	cout<<"3.-Multipliacion"<<endl;
	cout<<"4.-Divicion"<<endl;
	cin>>opcion;


	if(opcion==1){
        objeto1.sumar();
        return main();
	}
	else if(opcion==2){
        objeto1.restar();
        return main();
	}
	else if(opcion==3){
        objeto1.multiplicar();
        return main();
	}
	else if(opcion==4){
        objeto1.dividir();
        return main();
	}
	else{
        cout<<"No se encuentra en las opciones"<<endl;
        return main();
	}


	return 0;
}
