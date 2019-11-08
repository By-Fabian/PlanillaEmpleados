//
// Created by utec on 8/11/19.
//

#include "clasePlantilla.h"

clasePlantilla::clasePlantilla(t_dinero timp, t_dinero tafp):
    o_calculadora(timp,tafp)
    {}

void clasePlantilla::listarEmpleados() {
    for(int i=0;i <p_empleados.size();i++ ){
        cout<<"Nombre: ";
        p_empleados[i]->getNombre();cout<<endl;
        cout<<"Apellido: ";
        p_empleados[i]->getApellido();cout<<endl;
        cout<<"Renumeracion: ";
        p_empleados[i]->getRenumeracion();cout<<endl;
        p_empleados[i]->getDNI();cout<<endl;
    }



}

t_dinero clasePlantilla::calcularRenumeracionTotal() {
    return 0;
}

t_dinero clasePlantilla::calcularImpuestoTotal() {
    return 0;
}

void clasePlantilla::adicionarEmpleado(claseEmpleado* empl) {

    for(int i=0;i <p_empleados.size();i++ )
        p_empleados.push_back(empl);

}

void clasePlantilla::removerEmpleado(claseEmpleado* empl) {

    auto it=find(begin(p_empleados),end(p_empleados),empl);
    if (it != end(p_empleados))
        p_empleados.erase(it);
}

claseEmpleado *clasePlantilla::obtenerEmpleado(t_texto dni) {
    return nullptr;
}


