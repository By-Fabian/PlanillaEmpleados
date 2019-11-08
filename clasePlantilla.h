//
// Created by utec on 8/11/19.
//

#ifndef PLANILLAEMPLEADOS_CLASEPLANTILLA_H
#define PLANILLAEMPLEADOS_CLASEPLANTILLA_H

#include "claseEmpleado.h"
#include "claseCalculadora.h"


class clasePlantilla {
private:
    vector<claseEmpleado*> p_empleados;
    claseCalculadora o_calculadora;
public:
    clasePlantilla(t_dinero timp, t_dinero tafp);
    void listarEmpleados();
    t_dinero calcularRenumeracionTotal();
    t_dinero calcularImpuestoTotal();
    void adicionarEmpleado(claseEmpleado* empleado);
    void removerEmpleado(claseEmpleado* empleado);
    claseEmpleado* obtenerEmpleado(t_texto dni);
};


#endif //PLANILLAEMPLEADOS_CLASEPLANTILLA_H
