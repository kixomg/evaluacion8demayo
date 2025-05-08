#include <iostream>
using namespace std;
int main()
{
    int edad, precio, preciofinal, precioreal, dia, descuentosemanal, descuentoviejitos, descuentopeque;
    cout<<"Holi, bienvenidos todos a nuestra interfaz de tienda. :3";
    cout<<"\nDigite su edad: ";cin>>edad;
    cout<<"\nDigite el precio del producto: ";cin>>precio;
    cout<<"\nIngrese el dia de la semana (1 al 7):";cin>>dia;
    if (edad<=12){
        descuentopeque=precio-precio*(0.15);
        preciofinal=descuentopeque;
    }
    
    if (edad>=60){
        descuentoviejitos=precio-precio*(0.10);
        preciofinal=descuentoviejitos;
        
    }
   
    if (dia=2){
        descuentosemanal=preciofinal-preciofinal*(0.05);
        precioreal=descuentosemanal;
    }
    if (dia=4){
        descuentosemanal=preciofinal-preciofinal*(0.05);
        precioreal=descuentosemanal;
    }
    cout<<"\nEl precio de su producto es: "<<precioreal;
    return 0;
}