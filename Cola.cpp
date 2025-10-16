#include "Cola.h"

Cola::Cola():_primer(nullptr), _ultimo(nullptr)
{
}

void Cola::agregar(Documento* documento)
{
	if(_primer == nullptr)
	{
		_primer = documento;
	}
	else
	{
		_ultimo->setSiguiente(documento);
	}

	_ultimo = documento;
}

Documento* Cola::extraer()
{
	if(_primer == nullptr)
	{
		return nullptr;
	}

	Documento* retorno = _primer;
	_primer = retorno->getSiguiente();
	return retorno;
}

