#include "Persona.cpp"
#include <iostream>

using namespace std;

class Empleado : Persona{
	// Atributos
	private :
		int codigo_empleado;
		string puesto;
		
	// Constructor
	public :
		 Empleado(){
		 }
		 
		 Empleado(string nom,string ape,string dir,int tel,string f_nac,int cod_emp, string p) : Persona(nom,ape,dir,f_nac,tel){
			codigo_empleado = cod_emp;
			puesto = p;
		 }
	
		// Métodos de modificación (set)
		void setCodigoEmpleado(int cod_emp){codigo_empleado = cod_emp;}
		void setPuesto(string p){puesto = p;}
		void setNombres(string nom){nombres = nom;}
		void setApellidos(string ape){apellidos = ape;}
		void setDireccion(string dir){direccion = dir;}
		void setTelefono(int tel){telefono = tel;}
		void setFecha_Nac(string f_nac){fecha_nacimiento = f_nac;}
		
		// Métodos de visualización (get)
		int getCodigoEmpleado(){return codigo_empleado;}
		string getPuesto(){return puesto;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		string getFechaNacimiento(){return fecha_nacimiento;}
		int getTelefono(){return telefono;}
		
		// Métodos
		void mostrar(){
			cout<<"________________"<<endl;
			cout<<"DATOS INGRESADOS: "<<endl;
			cout<<codigo_empleado<<", "<<puesto<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<telefono<<", "<<fecha_nacimiento<<endl;
		}
};
