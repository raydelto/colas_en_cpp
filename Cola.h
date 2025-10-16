#pragma once
#include "Documento.h"

class Cola
{
public:
	Cola();
	void agregar(Documento* documento);
	Documento* extraer();
private:
	Documento* _primer;
	Documento* _ultimo;
};

