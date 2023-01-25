#include <iostream>
using namespace std;

class Empleado{
private:
	//atributos
	char nombre[20];
	char domicilio[20];
	float sueldo;
	int clave;
	std::string reportaA;
protected:
public:
	//constructor.
	Empleado(){
		sueldo=0;
		clave=0;
	}
	 //metodos
	char CambiaDomicilio(char domicilio){
		cout<<"\nNuevo domicilio: ";
		cin>>Empleado.domicilio;
	}
	float Actualsueldo(float){
		cout<<"\nNuevo sueldo:";
		cin>>Empleado.sueldo;
	}
		 
	char cambiarnombre(char nombre){
		cout<<" Mi nombre es: ";
		cin>>Empleado.nombre;
	}
	int cambiarClave(int){
		cout<<"\nNueva clave:";
		cin>>Empleado.clave;
	}
	void imprimir(){
		cout<<"\nEl nuevo nombre es: "<<Empleado.nombre;
		cout<<"\nEl nuevo domicilio es: "<<Empleado.domicilio;
		cout<<"\nEl nuevo sueldo es: "<<Empleado.sueldo;
		cout<<"\nLa nueva clave es: "<<Empleado.clave;
		cout<<"\nQue tenga buen dia.";
	}

int main(){
	char cambiarnombre(char nombre);
	char CambiaDomicilio(char domicilio);
	float Actualsueldo(float);
	int cambiarClave(int);
	return 0;
}
