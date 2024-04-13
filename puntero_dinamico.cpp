#include<iostream>

using namespace std;

int main(){
int fila=0,columna=0,**pm_notas;

cout<<"Ingrese la cantidad de Estudiantes: ";
cin>>fila;	
cout<<"Ingrese la cantidad de Notas por estudiante: ";
cin>>columna;	
pm_notas = new  int *[fila];
for (int i=0;i<fila;i++){
    pm_notas[i] = new int[columna]; 	
}

for (int i=0;i<fila;i++){
    cout<<"_______________Estudiante_______________"<<i<<endl;
    for (int ii=0;ii<columna;ii++){
	cout<<"Nota: "<<ii<<":";
	cin>>*(*(pm_notas+i)+ii);
	}
	cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Mostrar Notas--------------"<<endl;
for (int i=0;i<fila;i++){
    for (int ii=0;ii<columna;ii++){
	cout<<*(*(pm_notas+i)+ii)<<endl;
 
	}
	cout<<"------------------------------------"<<endl;
} 

// Liberar el espacio reservado en memoria
for (int i=0;i<fila;i++){
	delete [] pm_notas[i];
}

delete [] pm_notas;

	system("PAUSE");
	return 0;
	
	
}
