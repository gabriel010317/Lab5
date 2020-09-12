#pragma once
#include"paciente.h"
#include"Colecciones/IList.h"
#include"Colecciones/IIterable.h"
#include"Colecciones/ArrayList.h"
#include"Colecciones/LinkedList.h"

class ControlPacientes
{
private:
	IList* pacientes;

public:
	ControlPacientes(IList* cont);
	ControlPacientes(const ControlPacientes& source) = delete;
	ControlPacientes& operator =(const ControlPacientes& source) = delete;
	void agregarPaciente(Paciente* paciente);
	Paciente* consultarPaciente(string nombre);
	string toString();

	~ControlPacientes();


};