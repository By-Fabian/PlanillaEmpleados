//
// Created by utec on 8/11/19.
//

#ifndef PLANILLAEMPLEADOS_CLASEEMPLEADO_H
#define PLANILLAEMPLEADOS_CLASEEMPLEADO_H

#include "miscelanius.h"



class claseEmpleado {
private:
    t_texto p_nombre;
    t_texto p_apellido;
    t_dinero p_renumeracion;
    t_texto p_dni;
public:
    claseEmpleado(t_texto n, t_texto a, t_dinero r,t_texto d);
    t_texto getNombre();
    t_texto getApellido();
    t_dinero getRenumeracion();
    t_texto getDNI();
};


#endif //PLANILLAEMPLEADOS_CLASEEMPLEADO_H
