#include <iostream>

using namespace std;

class Persona{
	protected : 
		string nombres, apellidos, direccion, fecha_nacimiento;
		int telefono;
			
	protected :
		Persona(){
		}
		
		Persona(string nom, string ape, string dir, string f_nac, int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			fecha_nacimiento = f_nac;
			telefono = tel;
		}
		
		void mostrar();
};
