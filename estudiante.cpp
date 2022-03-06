#include <iostream>
using namespace std;
class estudiante{
	// atributo
	protected : string nombres, apellidos, curso;
				int telefono;
		
	//constructor
	protected :
		estudiante(){
		}
		estudiante(string nom, string ape, string cur, int tel){
			nombres= nom;
			apellidos= ape;
			curso= cur;
			telefono= tel;
			
		}
	//metodo
	void mostrar ();
	
};