#ifndef FUNCIONES_TRANSFORMAR_INT_STRING_H_
#define FUNCIONES_TRANSFORMAR_INT_STRING_H_

#include <iostream>
#include <algorithm>
#include <string>

const int FACTOR = 10;
class StringHelper {
public:
	/*
	 * post: la funcion debe recibir un entero entre 0 y 9 inclusive
	 * pre: la funcion devuelve el string que representa el entero que recibio por parametro
	 */
	std::string enteroIndividualAString(int num);

	/*
	 * pre: la funcion debe recibir un string vacio (lease string = "")
	 * post: la funcion devuelve el string que representa el entero que recibio por parametro
	 */
	void enteroAString(std::string& enteroString, int entero);

	/**
	 * pre: Recibe un string al cual se lo convertirá en minúsculas.
	 * post: String en minúsculas
	 */
	std::string aMinuscula(std::string);
};

#endif /* FUNCIONES_TRANSFORMAR_INT_STRING_H_ */
