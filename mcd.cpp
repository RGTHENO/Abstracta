#include <iostream>

using namespace std;



int mcd(int a, int b){
 
		
	int q; //cociente
	int r; //residuo
	int temp;
	
	if( b>a) {
		
		temp = a;
		a = b;
		b = temp;
		
	}
	  
	while(b!=0){
		
		q = a/b;
		
		r = a - q*b;
		
		cout<<a<<" = "<<b<<"*"<<q<<" + "<<r<<endl;
		
		a = b;
		b = r; 
		
	}
 
	if ( a<0)  a = -a;
	return a;
}


int main(){
	
	
	int a, b;
	int cont=1;
	
	while(cont==1){
		cont = 0;
		
		cout<<"Ingrese el valor de a:";
		cin>>a;
		cout<<"Ingrese el valor de b:";
		cin>>b;
		cout<<"MCD :"<<mcd(a,b)<<endl;
		
		cout<<"\n Desea continuar: yes(1) no(0) ";
		cin>>cont;
		cout<<"\n\n";
	}

	return 0;
}
