#ifndef SRC_GRAFO_GRAFO_H_
#define SRC_GRAFO_GRAFO_H_

#include "Vertice.h"

class Vertice;
class Grafo{
private:
	ListaEnlazada<Vertice*>* VerticesDelGrafo;

public:

	/*
	 * pre: -
	 * post: crea una instancia de grafo sin aristas ni vertices
	 */
	Grafo();

	/*
	 * pre: el vertice que se quiere agregar no debe existir en el grafo (no puede haber un grafo
	 * con el mismo peso que este)
	 * post: se agrega un vertice con el tablero pasado por parametro como peso
	 */
	void agregarVertice(Tablero* tableroAsociado);

	/*
	 * pre: el vertice en cuestion no debe tener aristas con ningun otro nodo
	 * post:siempre y cuando exista, se elimina el vertice que tiene como peso al tableroAsociado
	 */
	void eliminarVertice(Tablero* TableroAsociado);

	/*
	 * pre: -
	 * post: se agrega una arista que conecta el vertice sobre el cual se aplica este metodo con el
	 * vertice que tiene como peso al tablero pasado por parametro
	 */
	void agregarArista(Tablero* tableroOrigen, Tablero* tableroDestino);

	/*
	 * pre: -
	 * post: en caso de existir, se elimina la arista que conecta al vertice de peso tableroOrigen
	 * con el de peso tableroDestino
	 */
	void eliminarArista(Tablero* tableroOrigen, Tablero* tableroDestino);

	/*
	 * pre: -
	 * post: se devuelve el vertice asociado al tablero pasado por parametro, si el vertice en
	 * cuestion no existe se devuelve un puntero a 0
	 */
	Vertice* buscarVertice(Tablero* tableroBuscado);
	/*
	 * pre: -
	 * post: si en el grafo existe una arista que une verticeOrigen con verticeDestino se devuelve
	 * true, en caso contrario se devuelve false
	 */
	bool chequearExistenciaArista(Vertice* verticeOrigen, Vertice* verticeDestino);

	/*
	 * pre: -
	 * post: en caso de existir se incrementa el peso de la arista que une
	 * el tableroOrigen con el tableroDestino
	 */
	void incrementarPesoAristaConectora(Tablero* tableroOrigen, Tablero* tableroDestino);

	/*
	 * pre: -
	 * post: se devuelve la menor transferencia entre los vertices asociados a los tableros pasados por parametro
	 */
	int obtenerMenorTransferencia(Tablero* tableroOrigen, Tablero* tableroDestino);

	/*
	 * pre: -
	 * post: se devuelve true si todos los vertices del grafo ya fueron chequeados por obtenerMenorTransferencia
	 */
	bool estanTodosLosVerticesVisitados(bool verticesVisitados[], int cantidadVertices);

	/*
	 * pre:-
	 * post: se devuelve la menor posicion del array costosVertices que no haya sido visitada hasta el momento
	 */
	int obtenerPosicionMenor(bool verticesVisitados[], int costosVertices[],int cantidadVertices);

	/*
	 * pre: -
	 * post: se libera toda la memoria utilizada en la creacion de un objeto de tipo Grafo
	 */
	~Grafo();
};

#endif
