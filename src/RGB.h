/*
 * RGB.h
 *
 *  Created on: Oct 18, 2018
 *      Author: german
 */

#ifndef RGB_H_
#define RGB_H_

class RGB{
private:
	int red;
	int green;
	int blue;
public:
	/*pre: -
	 * post: se crea una instancia de la clase RGB con los valores rgbd
	seteados a 255 (blanco, seria como un estado "neutro")
	*/
	RGB();
	/*pre: -
	 * post: se crea una instancia de la clase RGB identica a la que se pasa por parametro
	 */
	RGB(const RGB& RGBAClonar);
	/*pre: -
	 * post: se devuelve un RGB que es el promedio de los tres RGBes pasados por paremetro
	 */
	void calcularPromedioRGBes(const RGB& RGBA, const RGB& RGBB, const RGB& RGBC);
	/*
	 *pre: -
	 * post: se le asigna al objeto RGB en cuestion los valores de red, green y blue pasados
	 * por parametro
	 */
	void setRGB(int red, int green, int blue);
	/*
	 * pre: -
	 * post: devuelve el valor de rojo del objeto RGB
	 */
	int getRed();
	/*
	 * pre: -
	 * post: devuelve el valor de verde del objeto RGB
	 */
	int getGreen();
	/*
	 * pre: -
	 * post: devuelve el valor de azul del objeto RGB
	 */
	int getBlue();
};


#endif
