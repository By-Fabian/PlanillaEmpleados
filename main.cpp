#include <iostream>
#include "claseCalculadora.h"
#include "clasePlantilla.h"




int main() {
    numeros numero_empleados;

    //Crear Plantilla

    clasePlantilla plantilla(8,10);

    //Pedir la cantidad de empleados

    cout<<"Ingrese la cantidad de empleados: ";
    cin>>numero_empleados;

    //Generar Empleados
    for(int i=0;i<numero_empleados;i++) {
        //Ingreso datos del empleado
        t_texto nombre = 0;
        t_texto apellido = 0;
        t_dinero renumeracion;
        t_texto dni;
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Apellido: ";
        cin >> apellido;
        cout << "Renumeracion: ";
        cin >> renumeracion;
        cout << "DNI: ";
        cin >> dni;
        //Crear empleado
        claseEmpleado *emp = new claseEmpleado(nombre, apellido, renumeracion, dni);
        plantilla.adicionarEmpleado(emp);
    }
    //Listar Empleados

    plantilla.listarEmpleados();

    //Pedir el numero de DNI:

    t_texto p_dni;

    auto emp=plantilla.obtenerEmpleado(p_dni);


    return 0;
    }

