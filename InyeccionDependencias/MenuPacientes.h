#pragma once
#include "ControlPacientes.h"

class MenuPacientes
{
private:
	ControlPacientes* pacientes;

public:
	MenuPacientes(ControlPacientes* pacientes) {
		this->pacientes = pacientes;
	}

	void invocarMenu()
	{
		const char opcionSalida = '4';
		char opcion;
		do {
			opcion = mostrarOpciones();
			switch (opcion)
			{
			case '1':
				this->ingresarPaciente();
				break;
			case '2':
				this->imprimirPacientes();
				break;
			case '3':
				//-------------------IMPLEMENTAR-----------------
				break;
			case opcionSalida:
				break;
			default:
				cerr << "Opcion invalida, digite otra vez" << endl;
			}
		} while (opcion != opcionSalida);
	}
	
private:
	char mostrarOpciones()
	{
		char opcion;
		system("cls");
		cout << "Menu Alimentos:" << endl;
		cout << "1) Ingresar Paciente" << endl;
		cout << "2) Imprimir Pacientes" << endl;
		cout << "3) Asociar Paciente con Alimento" << endl;
		cout << "4) Salir" << endl;
		cin >> opcion;
		system("cls");
		return opcion;
	}

	void asociarPacienteConAlimento(){
		string nombre, alimento;
		cout << "Ingrese el nombre del paciente" << endl;
		cin >> nombre;
		cout << "Ingrese el nombre del alimento a asociar" << alimento;
	}

	void ingresarPaciente() {
		Paciente* paciente = crearPaciente();
		this->pacientes->agregarPaciente(paciente);
	}

	Paciente* crearPaciente(){
		string nombre;
		cout << "Nombre: " << endl;
		cin >> nombre;
		return new Paciente(nombre);
	}

	void imprimirPacientes() {
		cout << this->pacientes->toString() << endl;
		system("pause");
	}
};