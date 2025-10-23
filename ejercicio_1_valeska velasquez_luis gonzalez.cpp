
#include<iostream>
#include<string>

using namespace std;
int valorromano(char r){
	switch(r){
		case'I':return 1;
		case'V':return 5;
		case'X':return 10;
		case'L':return 50;
		case'C':return 100;
		case'D':return 500;
		case'M':return 1000;
		default:return 0;
	}
	
}{
int resultado=0;
int n=romano.length();

for(int i=0:i,n;i++){
	int valoractual=valorromano(romano[i]);
	
	if(i+1<n){
		int valorsiguiente=valorromano(romano[i+1]);
		if(valoractual<valorsiguiente){
	
	resultado+=(valorsiguiente-valoractual);
		i++
			
			
		}else{
		resultado+=valoractual
	}else{
		
	}
	}
return resultado;	
}
	int main(){
		string romano;
		cout<<"ingrese un numero romano: "
		cin>>romano;
		for(char &c:romano){
		c=touper(c);
		romanoaentero;(romano);
		if(entero>0){
			cout<<"el valor del numero es: "<<entero<<endl;
		}else{
		cout<<"error:la cadena de numeros es invalida o esta vacia"<<endl:
		}
			
			
		}
			
			
		}
		
			
		}
		
	return 0;
	
	
}


