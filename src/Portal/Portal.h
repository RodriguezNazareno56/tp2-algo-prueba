#ifndef PORTAL_H_
#define PORTAL_H_
#include "../Parcela/CoordenadaParcela.h"
#include "../Grafo/Grafo.h"

const std::string ACTIVO = "activo";
const std::string NORMAL = "normal";
const std::string PASIVO = "pasivo";
const std::string NOPORTAL = "-";

class CoordenadaParcela;
/*
 * La clase Portal esta siempre asociada con una parcela, por lo tanto no lleva las coordenadas de la parcela.
 */

class Grafo;
class Portal {

private:

	/*
	 * Cada portal esta asociado con una parcela, entonces no es necesario definir las coordenadas del mismo.
	 * Sin embargo, necesitamos definir les coordenadas de la parcela asociada.
	 * Por eso usamos la clase CoordenadaParcela. Con el booleano portalOrigen definimos si el portal origino en
	 * la dicha parcela (true) o en la parcela asociada (false).
	 */

	bool portalOrigen;
	std::string tipoDePortal;
	CoordenadaParcela * parcelaAsociada;

	void nacer(RGB* color, float factorNacimientoOrigen, Grafo* grafoAsociado, Tablero* tableroOrigen);

	void morir(float factorMuerteOrigen);

public:
	/*
	 * pre: -
	 * post: se crea una instancia de portal
	 */
	Portal(bool esPortalDeOrigen, std::string tipoDelPortal,
			CoordenadaParcela * parcelaPareja);

	/*
	 * pre: -
	 * post: se devuelve el tipo de portal
	 */
	std::string getTipoDePortal();

	/*
	 * pre: -
	 * post: se acciona el portal correspondiente, es decir hace nacer o morir segun el tipo de portal que lleva.
	 */
	void accionarPortal(bool nace, RGB* color, float factorNacimientoOrigen,
			float factorMuerteOrigen, Grafo* grafoAsociado, Tablero* tableroOrigen);
};

#endif /* PORTAL_H_ */
