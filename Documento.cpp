#include "Documento.h"
using namespace std;

Documento::Documento(string nombre, string usuario):_nombre(nombre),_usuario(usuario), _siguiente(nullptr)
{
}

string Documento::getNombre()
{
	return _nombre;
}

string Documento::getUsuario()
{
	return _usuario;
}

Documento* Documento::getSiguiente()
{
	return _siguiente;
}

void Documento::setSiguiente(Documento* siguiente)
{
	_siguiente = siguiente;
}

