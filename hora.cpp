#include "hora.h"
#include <QDebug>
#include <iostream>
using namespace std;
void Hora::setSegundos(double seg){
    segundos=seg;
};
double Hora::getHoras(){
    return horas;
};

void Hora::setMinutos(double min){
    minutos=min;
};
double Hora::getMinutos(){
    return minutos;
};

void Hora::setHoras(double hor){
    horas=hor;
};
double Hora::getSegundos(){
    return segundos;
    };

Hora::Hora(double hor,double min,double seg){

};

void Hora::validarPositivos(double hor,double min,double seg){

    if(hor<0){
        horas=0;
    }
    else{
        horas=hor;
    }
    if(min<0){
        minutos=0;
    }
    else{
        minutos=min;
    }
    if(seg<0){
        segundos=0;
    }
    else{
        segundos=seg;
    }

}

void Hora::imprimeHora(double hor,double min,double seg){
    qInfo()<<"La hora es"<<hor<<min<<seg;
};

void Hora::aumentar(double hor,double min,double seg){
    double respaldo{0};
    int i{0};
    for(i=0;i<=3;i++){
        if(seg>59){
            respaldo=seg-60;
            segundos=respaldo;
            minutos++;
        }
        if(min>59){
            respaldo=min-60;
            minutos=respaldo;
            horas++;
        }
        if(hor>23){
            respaldo=hor-23;
            horas=respaldo;
        }
    }

};

