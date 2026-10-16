#include <iostream>

using namespace std;

int main (){
	char letra ;
	cout<<"Ingrese caracteres hasta adivinar una vocal minuscula"<<endl;
	for(;;){
   
      cout<<"ingrese un caracter: ";
      cin>>letra;
      
      if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
      	
      cout<<"¡ correcto, es una vocal minuscula !";
	  } else{
	  	
	  	cout<<"no es una vocal minuscula"<<endl;
	  }
		
		
		
	}
	
	
	
	
	
	
	
return 0; 	
}
