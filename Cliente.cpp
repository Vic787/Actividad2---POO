#include "Persona.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona {
	// Atributos
	private:
		string nit;
		
	// Constructor
	public :
		Cliente(){
		}
		
		Cliente(string nom,string ape,string dir,int tel,string f_nac,string n) : Persona(nom, ape, dir, f_nac, tel){
			nit = n;
		}
		
		// Métodos de modificación (set)
		void setNit(string n){nit = n;}
		void setNombres(string nom){nombres = nom;}
		void setApellidos(string ape){apellidos = ape;}
		void setDireccion(string dir){direccion = dir;}
		void setTelefono(int tel){telefono = tel;}
		void setFecha_Nac(string f_nac){fecha_nacimiento = f_nac;}
		
		// Métodos de visualización (get)
		string getNit(){return nit;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		string getFechaNacimiento(){return fecha_nacimiento;}
		int getTelefono(){return telefono;}
		
		// CRUD (visto en clase 21-02-2023
		void mostrar(){
			cout<<"_____________________"<<endl;
			cout<<"DATOS INGRESADOS: "<<endl;
			cout<<nit<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<telefono<<", "<<fecha_nacimiento<<endl;
		}
};
