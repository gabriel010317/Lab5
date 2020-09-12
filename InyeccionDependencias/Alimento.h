#pragma once
#include "Paciente.h"
#include<iostream>
#include<sstream>
#include"Colecciones/ObjetoBase.h"
#include"Colecciones/IList.h"
#include"Colecciones/ArrayList.h"
#include"Colecciones/IIterador.h"

using namespace std;
class Paciente;
class Alimento : public ObjetoBase
{
private:
	string nombre;
	int caloriasDiarias;
	IList* pacientes;

public:
	Alimento(string nombre, int caloriasDiarias);
    string getNombre() const;
    void setNombre(string nombre);
	void agregarPacientes(Paciente* paciente);

    int getCaloriasDiarias() const;
    void setCaloriasDiarias(int caloriasDiarias);
	string toString();
};