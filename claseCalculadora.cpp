//
// Created by utec on 8/11/19.
//

#include "claseCalculadora.h"

claseCalculadora::claseCalculadora(t_porcentaje impu, t_porcentaje afp):
    p_tasaimpuesto{impu},p_tasa_afp{afp}
    {}

t_dinero claseCalculadora::calcularRenumeracionNeta(claseEmpleado& empleado) {

    return empleado.getRenumeracion()-calcularAFPNeto(empleado)-calcularImpuestoNeto(empleado);
}

t_dinero claseCalculadora::calcularImpuestoNeto(claseEmpleado& empleado) {
    return empleado.getRenumeracion()*p_tasa_afp/100;
}

t_dinero claseCalculadora::calcularAFPNeto(claseEmpleado& empleado) {

    return empleado.getRenumeracion()*(p_tasaimpuesto/100) ;
}
