//
// Created by utec on 8/11/19.
//

#ifndef PLANILLAEMPLEADOS_CLASECALCULADORA_H
#define PLANILLAEMPLEADOS_CLASECALCULADORA_H


#include "claseEmpleado.h"



class claseCalculadora {
private:
    t_porcentaje p_tasaimpuesto;
    t_porcentaje p_tasa_afp;
public:
    claseCalculadora(t_porcentaje impu,t_porcentaje afp);
    t_dinero calcularRenumeracionNeta(claseEmpleado& empleado);
    t_dinero calcularImpuestoNeto(claseEmpleado& empleado);
    t_dinero calcularAFPNeto(claseEmpleado& empleado);
};
#endif //PLANILLAEMPLEADOS_CLASECALCULADORA_H
