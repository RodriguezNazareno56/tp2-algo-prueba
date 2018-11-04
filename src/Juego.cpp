/*
 * JuegoNuevo.cpp
 *
 *  Created on: Nov 1, 2018
 *      Author: yorickvinesse
 */

#include "Juego.h"

std::string Juego::pedirProximoTurno() {
	std::string proximoTurno;
	std::cout << "Qué quieres hacer ahora?\n- Para reiniciar el juego, presiona la tecla 'r'\n"
			"- Para ejecutar un turno, presiona la tecla 'e'\n"
					"- Para terminar el juego, presiona la tecla 't'\n\n";
	std::cin >> proximoTurno;
	return proximoTurno;
}

void Juego::iniciarJuego() {
	std::string rutaDelArchivo;
	std::cout << "Ingresa la ruta del archivo de texto que quieres utilizar: \n";
	std::cin >> rutaDelArchivo;
	LecturaArchivoConfiguracion lectura;
	lectura.procesarArchivo(rutaDelArchivo);
	ListaEnlazada<Tablero*>* tableros = lectura.obtenerListaTableros();
	this->tablerosDelJuego = tableros;
	ListaEnlazada<DatosTablero*> * datos = new ListaEnlazada<DatosTablero*>;
	tableros->iniciarCursor();
	while(tableros->avanzarCursor()) {
		DatosTablero * datosDelTablero = tableros->obtenerCursor()->getDatosTablero();
		datos->agregar(datosDelTablero);
	}
	this->datosDelJuego = datos;
}

void Juego::terminarJuego() {
	std::cout << "\n Terminaste el juego\n";
	delete this->datosDelJuego;
	delete this->tablerosDelJuego;
}

void Juego::ejecutarTurno() {
	std::cout << "Entro";
	tablerosDelJuego->iniciarCursor();
	if (!tablerosDelJuego->estaVacia()) {
		while(tablerosDelJuego->avanzarCursor()) {
			Tablero * tablero = tablerosDelJuego->obtenerCursor();
			TurnoTablero turno(tablero);
			turno.jugarTurno();
			DatosTablero * datosTablero = tablero->getDatosTablero();
			std::cout  << "Hasta aca un turno.: " << datosTablero->getTurno() << std::endl;
		}
	}
}
