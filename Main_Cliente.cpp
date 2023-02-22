#include "Cliente.cpp"
#include <iostream>

using namespace std;

int main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	cout<<"Ingrese su NIT: ";
	cin>>nit;
	cout<<"Ingrese su nombre: ";
	cin>>nombres;
	cout<<"Ingrese su apellido: ";
	cin>>apellidos;
	cout<<"Ingrese su direccion: ";
	cin>>direccion;
	cout<<"Ingrese su fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingrese su telefono: ";
	cin>>telefono;
	
	// Instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
	obj.mostrar();
}
