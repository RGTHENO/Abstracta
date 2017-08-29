#include <iostream>
#include <vector>
using namespace std;

  
vector<int> extendido_euclides(int a, int b){
	
	vector<int> resultado;
	
	int z3, z1, z2, x3, x1, x2, y3, y1, y2;
	
	z1 = a; z2 = b;
	
	x1 = 1; x2 = 0;
	y1 = 0; y2 = 1;
	
	
	int q;//= z1/z2;
	
	while(z2 > 0){ // Este bucle termina cuando el residuo sea mayor a 0
	
		 q = z1/z2;
	 
		//Aqui estamos actulizando los valores para Z 
		z3  = z1 - q*z2;  // z es el residuo de dividir z1 ("a")  y z2("b") 
		z1 = z2; z2 = z3; // z3 va almacenar el residuo
		
		cout<<"z2 :"<<z2<<endl;
		
		cout<<" q: "<<q<<endl;
		
		//Actualizamos los valores para X ( para u)
		
		x3 = x1 - q*x2;
		x1  = x2; x2 = x3;
		
		cout<<" u :"<<x3<<endl;
		
		//Actualizamos los valores para Y  (para v)
		
		y3 =  y1 - q*y2;
		y1 = y2; 
		y2 =  y3;
		
		
		cout<<" v : "<<y3<<endl;
		
		cout<<"\n\n";
		
		if(z2<q) break;
		
	}
	
	 
	resultado.push_back(x1);
	resultado.push_back(y1);
	
	
	return resultado;
}

  
int main(){
	
	vector<int> result;
	
	result = extendido_euclides(141,96);
 
	return 0;
}
