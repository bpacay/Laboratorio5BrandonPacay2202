#include <iostream>
#include <cmath>

using namespace std;

int SumaNumerosParImpar(){
	int n, res;
	cout<<"ingrese un numero entero (conoser la suma de sus numeros anteriores y el mismo): "<<endl;
	cin>>n;

	for(int i=1;i<=n;i++){
		res=res+i;
	}
	cout<<"la suma de todos los de 1 numeros hasta "<<n<<" es igual a: "<< res<<endl;
	
	return 0;
}

int Factorial(){
	int n, i, fac;
	cout<<"ingrese un numero entero para su factorial: "<<endl;
	cin>>n;
	i=1;
	fac=1;

	while(i<=n){
		fac=fac*i;
		i++;
	}
	cout<<"el factorial de "<<n<<" es "<<fac<<endl;
	return 0;
}

int contandoDig(){
	int n, i;
	cout<<"ingrese un numero con cualquier cantidad de digitos: "<<endl;
	cin>>n;
	do{
		n=n/10;
		i++;
	}while(n>0);
	cout<<"El numero tiene "<<i<<" dijito/s"<<endl;
	return 0;
}

int OrdenarnumeroAsce(){
	int n, i, x, temp, vector[100];
	
	n=3;
	
	for(int i=0; i<n; ++i){
		cout<<"ingrese un numero"<<endl;
		cin>> vector[i];
	}
	
	for(int i=0; i< n-1; ++i){
		for(int j=0; j< n-1; ++j){
			if(vector[j] > vector[j+1]){
				temp=vector[j];
				vector[j] = vector[j+1];
				vector[j+1]=temp;
			}			
		}
	}

	for(int i=0; i<n; i++){
		cout<<vector[i]<<endl;
	}
	return 0;
}

int SumDigitoNum(){
	int n, suma=0;
	cout<<"ingresa un numero"<<endl;
	cin>>n;
	while (n>0)
	{
		suma = suma + n%10;
		n=n/10;
	}
	
	cout<<"la suma es: "<<suma<<endl;
	return 0;
}

int main(){
	SumaNumerosParImpar();
	Factorial();
	contandoDig();
	OrdenarnumeroAsce();
	SumDigitoNum();
	return 0;
}