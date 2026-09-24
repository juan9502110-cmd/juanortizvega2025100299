#include <iostream>
#include <string.h>

using namespace std;

int main (){
int digito1,digito2,opc;

cout<<"! Bienvenido/a la calculadora ¡"<<endl ;
cout<<"seleccione una de las opciones"<<endl;

cout<<"1- suma"<<endl;
cout<<"2- resta"<<endl;
cout<<"3- multiplicacion"<<endl;
cout<<"4- division"<<endl;
cout<<"opcion: ";
cin>>opc;
  
  
  if (opc==1){
	cout<<"ingrese el primer numero"<<endl;
    cin>>digito1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>digito2;
    cout<<"El resultado de la operacion es: "<<digito1+digito2<<endl;
}else if (opc==2) {
    cout<<"ingrese el primer numero"<<endl;
    cin>>digito1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>digito2;
    cout<<"El resultado de la operacion es: "<<digito1-digito2<<endl;


}else if (opc==3) {
    cout<<"ingrese el primer numero"<<endl;
    cin>>digito1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>digito2;
    cout<<"El resultado de la operacion es: "<<digito1*digito2<<endl;
}else if (opc==4) {
    cout<<"ingrese el primer numero"<<endl;
    cin>>digito1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>digito2;
    
    if (digito2!=0){
    	cout<<"El resultado de la operacion es: "<<(float)digito1/digito2<<endl;
	}else{
		cout<<"Error, nose puede dividir por Cero..."<<endl;
	}
}else {
	cout<<"Error al seleccionar la opcion..."<<endl;
}

return 0;
}


