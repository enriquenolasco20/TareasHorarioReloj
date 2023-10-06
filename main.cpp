#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include <debugapi.h>
#include <string.h>
#include "hora.h"

using namespace std;

int main(int argc, char *argv[])
{
    double valorh{0};
    double valorm{0};
    double valors{0};
    int opcion{0};

    QCoreApplication a(argc, argv);

    Hora h_1{0.0,0.0,0.0};

    qInfo()<<"Hola esta es la hora:";
    h_1.imprimeHora(valorh,valorm,valors);
    qInfo()<<"\n\nQue quieres aumentar?, \n1)horas\n2)Minutos\n3)Segundos: ";
    cin >> opcion;
    if(opcion==1){
        qInfo()<<"Vas a aumentar horas";
        qInfo()<<"Cuantas Horas?: ";
        cin>>valorh;
        h_1.setHoras(valorh);
    }
    else if(opcion==2){
        qInfo()<<"Vas a aumentar minutos";
        qInfo()<<"Cuantos minutos?: ";
        cin>>valorm;
        h_1.setMinutos(valorm);
    }
    else if(opcion==3){
        qInfo()<<"Vas a aumentar Segundos";
        qInfo()<<"Cuantos Segundos?: ";
        cin>>valors;
        h_1.setSegundos(valors);
    }
    else{
        qInfo()<<"No haz escogido ninguna opcion";
    }
    /*
    h_1.setHoras(21);
    h_1.setMinutos(2);
    h_1.setSegundos(-1);
*/


    valorh=h_1.getHoras();  //Asignamos los valores del objeto a variables locales
    valorm=h_1.getMinutos();
    valors=h_1.getSegundos();

    h_1.validarPositivos(valorh,valorm,valors); //validamos que los numeros sean mayores a 0

    valorh=h_1.getHoras();  //Volvemos a asignar valores del objeto a variables locales
    valorm=h_1.getMinutos();
    valors=h_1.getSegundos();

    h_1.aumentar(valorh,valorm,valors); //Metodo para aumentar minutos y horas


    valorh=h_1.getHoras();  //Volvemos a asignar valores del objeto a variables locales
    valorm=h_1.getMinutos();
    valors=h_1.getSegundos();

    h_1.imprimeHora(valorh,valorm,valors);






 /*   do{



    }while(n=="si");
*/

    return 0;
}
