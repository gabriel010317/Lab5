#pragma once
#include"Alimento.h"
#include<iostream>
#include<sstream>
#include"Colecciones/ObjetoBase.h"
#include"Colecciones/IList.h"
#include"Colecciones/ArrayList.h"
#include"Colecciones/IIterador.h"
class Alimento;
class Paciente : public ObjetoBase
{
private:
	string nombre;
	IList* alimentos;

public:
	Paciente(string nombre);
	Paciente(const Paciente& source) = delete;
	Paciente& operator=(const Paciente& source) = delete;
	void agregarAlimentoADieta(Alimento* alimento);
	int totalCaloriasEnDieta();

	void setNombre(string nombre);
	string getNombre() const;

	string toString();
	~Paciente();
};