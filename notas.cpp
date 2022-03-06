#include "estudiante.cpp"
#include <iostream>
using namespace std;

class resultados : estudiante {
	//atributos
	private: string codigo;
	
	// constructor
	public :
	resultados (){
		}
		
	resultados(string nom, string ape, string cur, int tel, string n): estudiante(nom, ape, cur, tel){
		codigo= n;
	}	
	// metodos
	//set (modificar)
	void setCodigo(string n){ codigo= n; }
	void setNombres (string nom){ nombres= nom; }
	void setApellidos (string ape){ apellidos= ape; }
	void setCurso (string cur){ curso= cur; }
	void setTelefono (int tel){ telefono= tel; }
	//get (mostrar)
	string getCodigo(){ return codigo;}
	string getNombres(){ return nombres;}
	string getApellidos(){ return apellidos;}
	string getCurso(){ return curso;}
	int getTelefono(){ return telefono;}
	//metodos
	void mostrar (){
		
		system("cls");
		
		cout <<"___________________________________"<<endl;
		cout <<"\n  ***** DATOS DEL ESTUDIANTE *****\n"<<endl;
		cout <<"Codigo:\t"<<codigo<<" \n\n\t"<<"Nombre:\t\t"<<nombres<<" "<<apellidos<<" \n\t"<<"No. Tel:\t"<<telefono<<"\n\n\t"<<"CURSO:\t"<<curso<<" \n\t"<<endl;
	}
};