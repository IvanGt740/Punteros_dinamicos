#include <iostream>
using namespace std;

main(){
    int edad= 25, *p_edad;
    p_edad = &edad; 

    cout<<"Variable Edad: "<<edad<<endl; 
    cout<<"Puntero Edad: "<<*p_edad<<endl;

    cout <<"_________Cambiar Valores___________"<<endl; 
    *p_edad = 40;

    cout<<"Variable Edad: "<<endl<<endl;
    cout<<"Puntero Edad: "<<*p_edad<<endl;

    cout <<"_________Otra Variable a p_edad ___________"<<endl; 
    int edad2=100;
    p_edad = &edad2;

    cout<<"Variable Edad: "<<endl<<endl;
    cout<<"Puntero Edad: "<<*p_edad<<endl;
    cout<<"Variable Edad2: "<<edad2<<endl;
    
}