#include "ControlPacientes.h"

ControlPacientes::ControlPacientes(IList* cont) {
	this->pacientes = cont;
}

void ControlPacientes::agregarPaciente(Paciente* paciente) {
	this->pacientes->insertarAlFinal(paciente);
}

Paciente* ControlPacientes::consultarPaciente(string nombre) {
	IIterador* ite = this->pacientes->obtenerIterador();
	Paciente* resultado = nullptr;
	while (ite->haySiguiente())
	{
		Paciente* actual = dynamic_cast<Paciente*>(ite->actual());
		if (actual->getNombre() == nombre)
		{
			resultado = actual;
			break;
		}
	}
	delete ite;
	return resultado;
}

string ControlPacientes::toString() {
	return this->pacientes->toString();
}

ControlPacientes::~ControlPacientes() {
	this->pacientes->liberarDatosInternos();
	delete this->pacientes;
}