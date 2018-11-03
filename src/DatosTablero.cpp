/*
 * DatosTablero.cpp
 *
 *  Created on: 1 nov. 2018
 *      Author: nazareno
 */

#include "DatosTablero.h"

#include "DatosTablero.h"

DatosTablero::DatosTablero() {
	this->cantidadCelulasVivas = 0;
	this->muertasTotal = 0;
	this->nacidasTotal = 0;
	this->promedioMuertas = 0;
	this->promedioNacidas = 0;
	this->turnosCongelado = 0;
	this->numeroTurno = 0;
	this->congeladoTurnoActual = true;
}

unsigned int DatosTablero::getCantidadCelulasVivas(){
	return this->cantidadCelulasVivas;
}
void DatosTablero::sumarCelulaViva(){
	this->cantidadCelulasVivas ++;
	this->nacidasTotal ++;
}
void DatosTablero::sumarCelulaMuerta(){
	this->cantidadCelulasVivas --;
	this->muertasTotal ++;
}
int DatosTablero::getNacidasTotal(){
	return this->nacidasTotal;
}
unsigned int DatosTablero::getMuertasTotal(){
	return this->muertasTotal;
}
float DatosTablero::getPromedioNacidas(){

	return this->promedioNacidas;
}
float DatosTablero::getPromedioMuertas(){
	return this->promedioMuertas;
}

void DatosTablero::setCongeladoTurnoActual(bool estadoDeCongelamiento){
	this->congeladoTurnoActual = estadoDeCongelamiento;
}

void DatosTablero::setCantidadTurnosCongeladosTablero(){
	if(this->congeladoTurnoActual){
		this->turnosCongelado ++;
	}
	else{
		this->turnosCongelado = 0;
	}
}

bool DatosTablero::estaCongelado(){
	return (this->turnosCongelado >= 2);
}

unsigned int DatosTablero::getTurno(){
	return this->numeroTurno;
}

void DatosTablero::avanzarUnTurno(){
	this->numeroTurno ++;
}