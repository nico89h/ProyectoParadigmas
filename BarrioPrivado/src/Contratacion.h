/*
 * Contratacion.h
 *
 *  Created on: 12 nov. 2022
 *      Author: user
 */

#ifndef CONTRATACION_H_
#define CONTRATACION_H_
#include "Fecha.h"
#include <iostream>
using namespace std;
class Contratacion {
//inicio de la clase contratacion
private:
	string empresa;
	string tipo_servicio;
	Fecha fecha;
	float costo;
public:
	Contratacion(string empresa, string tipo_servicio,short dia,short mes,short anio, float costo);
	Contratacion();
	Contratacion(Contratacion &copia);
	virtual ~Contratacion();
};
#endif /* CONTRATACION_H_ */
