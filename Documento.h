#pragma once
#include <string>

class Documento
{
public:
	Documento(std::string nombre, std::string usuario);
	std::string getNombre();
	std::string getUsuario();
	Documento* getSiguiente();
	void setSiguiente(Documento* siguiente);
private:
	std::string _nombre;
	std::string _usuario;
	Documento* _siguiente;
};

