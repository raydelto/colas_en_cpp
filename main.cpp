#include "Cola.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Iniciando ejecucion del programa" << endl;
	Cola cola;
	Documento doc1("doc1.docx","usuario1");
	Documento doc2("doc2.docx","usuario2");
	Documento doc3("doc3.docx","usuario3");
	cola.agregar(&doc1);
	cola.agregar(&doc2);
	cola.agregar(&doc3);

	Documento* i = cola.extraer();


	while(i != nullptr)
	{
		cout << "Imprimiendo el documento " << i->getNombre() << " enviado por " << i->getUsuario() << endl;
		i = cola.extraer();
	}
	cout << "Saliendo del programa" << endl;
}

