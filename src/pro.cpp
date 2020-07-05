#include<iostream>
using namespace std;

int main()
{
    int cuenta, codigotarea, contadorsumatareas = 0 , contadorestudiante = 0 , cantidadtareas = 0 ;
    string nombre, respuesta, descripcion ;
    
    do
    {
       cout << " ingrese la cuenta del alumno: " << endl;
       cin  >> cuenta;
       cout << " ingrese el nombre del alumno: " << endl;
       cin  >> nombre;
       cout << " ingrese el codigo de la tarea: " << endl;
       cin  >> codigotarea;
       cout << " ingrese la descripcion de la tarea: " << endl;
       cin  >> descripcion;
       cout << " ingrese la cantidad de tareas: "<< endl;
       cin  >> cantidadtareas;


       for (int i = 0; i < cantidadtareas; i++)
        {
      
            contadorsumatareas ++;

           
        }
       
        contadorestudiante ++ ;
        
        
        cout << " desea seguir con otro otro estudiante S/N: " << endl;
        cin  >> respuesta;
        
    } while (respuesta == "S" || respuesta == "s");
    
    cout << " el numero de estudiante es el siguiente: " << contadorestudiante << endl;
    cout << " el numero de tareas realizadas son: " << contadorsumatareas << endl;
    
    
    return 0;
}