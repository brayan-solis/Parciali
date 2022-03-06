#include "notas.cpp"
#include <iostream>
using namespace std;
void menul();
void datos();
void pro();
//void menu2();

int main()
{
    menul();
    datos();
    pro();
   // menu2();
    return 0;
}
//se ingresa los datos del estudiante
void datos (){
	system("cls");
	int opcion;
	int n1=0,n2=0,n3=0,n4=0;
    float promedio =0;
	string codigo, nombres, apellidos, curso;
	int telefono;
	int carnet;
	
	cout<<"\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n\n";
	cout<<"\n\t\tIngrese Codigo de estudiante:\t\t";
	cin>>codigo;
	cout<<"\t\tIngrese Nombre:\t\t";
	cin>>nombres;
	cout<<"\t\tIngrese Apellido:\t";
	cin>>apellidos;
	cout<<"\t\tIngrese Telefono:\t";
	cin>>telefono;
	cout<<"\n\t\tIngrese curso:\t";
	cin>>curso;
	
	resultados obj= resultados(nombres, apellidos, curso, telefono, codigo);
	obj.mostrar();	

	cout<<"\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	cout<<"\t\tIngrese Nota 1:\t";
	cin>>n1;
	cout<<"\t\tIngrese Nota 2:\t";
	cin>>n2;
	cout<<"\t\tIngrese Nota 3:\t";
	cin>>n3;
	cout<<"\t\tIngrese Nota 4:\t";
	cin>>n4;
	promedio = (n1+n2+n3+n4) /4;

	string mensaje="";
	mensaje=promedio>=60? "Aprobado" : "Reprobado";

	if (promedio>=60){
		cout<<"\n\n\t\t\tEl promedio es "<<promedio<<", por lo tanto esta -- APROBADO --\n\n"<<endl;
		
		cout<<"\n\n\t\t\t PRESIONAR 2 VECES --ENTER-- PARA RETORNAR AL MENU";
	}else{
		cout<<"\n\n\t\t\tEl promedio es "<<promedio<<", por lo tanto esta -- REPROBADO --\n\n"<<endl;
		
		cout<<"\n\n\t\t\t PRESIONAR 2 VECES --ENTER-- PARA RETORNAR AL MENU";
	}
	 system("pause>nul");
}

// Aca tenemos el menu principal a donde nos retornara cada vez que terminamos de ingresar datos de un estudiante
void menul()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

    cout<<"*******************************************************"<<endl;
    cout<<"*                                                     *"<<endl;
    cout<<"*                     Menu                            *"<<endl;
    cout<<"*                                                     *"<<endl;
    cout<<"*      1.Ingresar datos del estudiante                *"<<endl;
    cout<<"*      2.Conocer solo el promedio de un curso         *"<<endl;
    cout<<"*                                                     *"<<endl;
    cout<<"*******************************************************"<<endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:datos();system("pause>nul");break;
        case 2:pro();system("pause>nul");break;
        case 0:repetir = false;system("pause>nul");break;
        }
        
    } 
	while (repetir);
    
}

// aca unicamente podremos ingresar datos de notas para conocer el promedio de un curso
void pro (){
	system("cls");
	int opcion;
	int n1=0,n2=0,n3=0,n4=0;
    float promedio =0;
	string curso;

	cout<<"\n\t\tIngrese curso:\t";
	cin>>curso;	

	cout<<"\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	cout<<"\t\tIngrese Nota 1:\t";
	cin>>n1;
	cout<<"\t\tIngrese Nota 2:\t";
	cin>>n2;
	cout<<"\t\tIngrese Nota 3:\t";
	cin>>n3;
	cout<<"\t\tIngrese Nota 4:\t";
	cin>>n4;
	promedio = (n1+n2+n3+n4) /4;

	string mensaje="";
	mensaje=promedio>=60? "Aprobado" : "Reprobado";

	if (promedio>=60){
		cout<<"\n\n\t\t\tEl promedio es "<<promedio<<", por lo tanto esta -- APROBADO --\n\n"<<endl;
		
		cout<<"\n\n\t\t\t PRESIONAR 2 VECES --ENTER-- PARA RETORNAR AL MENU";
	}else{
		cout<<"\n\n\t\t\tEl promedio es "<<promedio<<", por lo tanto esta -- REPROBADO --\n\n"<<endl;
		
		cout<<"\n\n\t\t\t PRESIONAR 2 VECES --ENTER-- PARA RETORNAR AL MENU";
	}
	 system("pause>nul");
}
