/*
 * funciones_transformar_int_string.cpp
 *
 *  Created on: Oct 24, 2018
 *      Author: german
 */
#include "funciones_transformar_int_string.h"

std::string enteroIndividualAString (int num){
	switch (num){
		case 1:
 		return "1";

 		case 2: {
 		return "2";
 		}

 		case 3: {
 		return "3";
 		}

 		case 4: {
 		return "4";
 		}

 		case 5: {
 		return "5";
 		}

 		case 6: {
 		return "6";
 		}

 		case 7: {
 		return "7";
 		}

 		case 8: {
 		return "8";
 		}

 		case 9: {
 		return "9";
 		}

 		case 0: {
 		return "0";
 		}
	}
	return 0;
}

void enteroAString(std::string& str, int entero){
	if ((entero/factor) > 0){
		enteroAString(str, (entero - entero%factor)/10);
	}
	str = str + enteroIndividualAString(entero%factor);
}


