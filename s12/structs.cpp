#include <iostream>

using namespace std;

struct Personaje {
	int vida;
};

struct Ataques {
	int kamekameha, lanza, kaioken, espada, telepor, escudo, golpebsc, golpedur;
};

int main (){

	Personaje goliat={100}, goku={100};
	Ataques at={35, 20, 30, 25, 15, 10, 15, 25};
	int opc,accion;
		cout<<"Bienvenido a las batallas universales \n";
	cout<<"eliga un personaje \n";
	cout<<"1- goliat "<<endl;
	cout<<"2- goku "<<endl;
    cout<<"opcion: ";
    cin>>opc;
    
    if  (opc==1){
    	cout<<"Elegiste a goliat. ! comatiras contra goku Â¡";
	    while (goliat.vida>0 && goku.vida>0){
		
	     cout<<"\n---------------------------------"<<endl;
	     cout<<"tu vida(goliat): "<<goliat.vida<<"| vida de goku: "<<goku.vida<<endl;
	     cout<<"elige tu accion de ataque: "<<endl;
	     cout<<"1- golpe basico"<<at.golpebsc<<"de daño"<<endl;
	     cout<<"2- golpe pesado"<<at.golpedur<<"de daño"<<endl;
	     cout<<"3- Ataque con lanza"<<at.lanza<<"de daño"<<endl;
	     cout<<"4- Ataque con espada"<<at.espada<<"de daño"<<endl;
	     cout<<"opcion: ";
	     cin>>accion;
	      
	      if(accion==1){
	      	cout<<"goliat usa golpe basico y causa "<<at.golpebsc<<"de daño a goku"<<endl;
	      	goku.vida -= at.golpebsc;
		  }else if(accion==2){
		  	cout<<"goliat usa golpe pesado y causa"<<at.golpedur<<"de daño a goku"<<endl;
		  	goku.vida -= at.golpedur;
		  }else if(accion==3){
		  	cout<<"goliat usa ataque de lanza y cuasa"<<at.lanza<<"de dañoo a goku"<<endl;
		  	goku.vida -= at.lanza;
		  }else if(accion==4){
		  	cout<<"goliat usa ataque de espada y causa" <<at.espada <<"de daño a goku" <<endl;
		  	goku.vida -= at.espada;
		  }else{
		  	cout<<"opcion invalida, perdiste tu turno";
		  }
		  if (goku.vida<=0){
		  	break;
		  }
		  cout<<"goku contraataca utilizando kamekameha y causa"<<at.kamekameha<<" de daño "<<endl;
		  goliat.vida-=at.kamekameha;
	}
	   if(goliat.vida>0){
	   	cout<<"victoria, goliat a derrotado a goku"<<endl;
	   }else {
	    cout<<"derrota, goku a ganado"<<endl;
	   }
}

else if (opc==2){
		cout<<"Elegiste a goku. ! comatiras contra goliat Â¡";
 
      while (goku.vida>0 && goliat.vida >0){
		
	     cout<<"\n---------------------------------"<<endl;
	     cout<<"tu vida(goku): "<<goku.vida<<"| vida de goliat: "<<goliat.vida<<endl;
	     cout<<"elige tu accion de ataque: "<<endl;
	     cout<<"1- kamekameha"<<at.kamekameha<<"de daño"<<endl;
	     cout<<"2- kaioken"<<at.golpedur<<"de daño"<<endl;
	     cout<<"3- teletrasnportacion"<<at.telepor<<"de daño"<<endl;
	     cout<<"opcion: ";
	     cin>>accion;
	      
	      if(accion==1){
	      	cout<<"goku lanza un kamekameha "<<at.kamekameha<<"de daño a goliat"<<endl;
	      	  goliat.vida -= at.kamekameha;
		  }else if(accion==2){
		  	cout<<"goku lanza un kaioken"<<at.kaioken <<"de dañoo a goliat"<<endl;
		  	  goliat.vida -= at.kaioken;
		  }else if(accion==3){
		  	cout<<"goku utiliza teletransportacion y causa"<<at.telepor <<"de dañoo a goliat"<<endl;
		  	  goliat.vida -= at.telepor;
		 }else{
		  	cout<<"opcion invalida, perdiste tu turno";
		  }
		  if (goliat.vida<=0){
		  	break;
		  }
		  
            cout << "Goliat contraataca con un Golpe Pesado e inflige " << at.golpedur << " de daño!" << endl;
            goku.vida -= at.golpedur;
        }
		  
	    cout << "\n===================================" << endl;
        if (goku.vida > 0) {
            cout << "¡VICTORIA! Goku ha derrotado a Goliat." << endl;
        } else {
            cout << "¡DERROTA! Goliat te ha derrotado." << endl;
        }
     
    }else {
        cout << "Opcion invalida. Reinicia el programa." << endl;
    }

    return 0;
}
