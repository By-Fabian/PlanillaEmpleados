//
// Created by utec on 8/11/19.
//

#include "claseEmpleado.h"


claseEmpleado::claseEmpleado(t_texto n, t_texto a, t_dinero r, t_texto d):
        p_nombre{n},p_apellido{a},p_renumeracion{r},p_dni{d}
{}

t_texto claseEmpleado::getNombre() {
    return p_nombre;
}

t_texto claseEmpleado::getApellido() {
    return p_apellido;
}

t_dinero claseEmpleado::getRenumeracion() {
    return p_renumeracion;
}

t_texto claseEmpleado::getDNI() {
    return p_dni;
}
