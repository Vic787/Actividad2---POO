#include "Empleado.cpp"
#include <iostream>

using namespace std;

int main(){
	string puesto,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono,codigo_empleado;
	
	cout<<"Ingrese su puesto: ";
	cin>>puesto;
	cout<<"Ingrese su nombre: ";
	cin>>nombres;
	cout<<"Ingrese su Apellido: ";
	cin>>apellidos;
	cout<<"Ingrese su direccion: ";
	cin>>direccion;
	cout<<"Ingrese su codigo de empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingrese su fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingrese su telefono: ";
	cin>>telefono;
	
	// Instancia de un objeto
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,fecha_nacimiento,codigo_empleado,puesto);
	obj.mostrar();
	
	// Modificar puesto
	cout<<"Ingrese su nuevo puesto: ";
	cin>>puesto;
	obj.setPuesto(puesto);
	obj.mostrar();
}

