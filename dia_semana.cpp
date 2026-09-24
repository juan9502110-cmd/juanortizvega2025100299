#include <iostream>  //librerias 
#include <string.h>

using namespace std; // declaramos de esta manera para no colocar por cada code std

int main (){         // cuerpo de codigo
int number;	         // variable "number" para leer la opcion elegida por el usuario
	cout<<"!Bienvenido a los dias de la semana ¡"<<endl;   // bienvenida al usuario
	cout<<"ingrese un numero del 1 al 7: ";               // requerimiento para cumplir con el sistema
	cin>>number;
	
	if (number==1){                                        //proceso del programa 
		cout<<" ! Elegiste el dia Lunes ¡"<<endl;
	}else if (number==2){
		cout<<"! Elegiste el dia Martes ¡"<<endl;
	}else if (number==3){
		cout<<"! Elegiste el dia Miercoles ¡"<<endl;
	}else if (number==4){
		cout<<"! Elegiste el dia Jueves ¡"<<endl;
	}else if (number==5){
		cout<<"! Elegiste el dia Viernes ¡"<<endl;
	}else if (number==6){
		cout<<"! Elegiste el dia Sabado ¡"<<endl;
	}else if (number==7){
		cout<<"! Elegiste el dia Domingo ¡"<<endl;
	}else {
		cout<<"Error, no coincide con lo requerido..."<<endl;  //En caso de no elegir un numero en el rango requerido
		                                                       //le saldria error.
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;                                                  //retorno del sistema
}
