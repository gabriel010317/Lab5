#pragma once
#include"InventarioAlimentos.h"
#include "ControlPacientes.h"
#include"MenuAlimentos.h"
#include"MenuPacientes.h"
#include"MenuPrincipal.h"

class Bootstrapper
{
public:
    static void correrAplicacion()
	{
		// modelos (servicios y objetos de negocio)
		InventarioAlimentos* inventarioAlimentos = new InventarioAlimentos(new ArrayList(16));
		// InventarioPacientes
		ControlPacientes* pacientes = new ControlPacientes(new LinkedList);

		// vistas
		MenuAlimentos* menuAlimentos = new MenuAlimentos(inventarioAlimentos);
		MenuPacientes* menuPacientes = new MenuPacientes(pacientes);
		MenuPrincipal* menuPrincipal = new MenuPrincipal(menuAlimentos, menuPacientes);
		menuPrincipal->invocarMenu();

		// liberar memoria
		delete inventarioAlimentos;
		delete menuPrincipal;
	}
};