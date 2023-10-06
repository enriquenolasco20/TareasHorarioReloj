#ifndef HORA_H
#define HORA_H
#include <QDebug>

class Hora
{
private:

    double segundos{0};
    double minutos{0};
    double horas{0};

public:

    void setSegundos(double seg);
    double getSegundos();

    void setMinutos(double min);
    double getMinutos();

    void setHoras(double hor);
    double getHoras();

    Hora(double hor,double min,double seg);


    void imprimeHora(double hor,double min,double seg);

    void validarPositivos(double hor,double min,double seg);

    void aumentar(double hor,double min,double seg);

    /*void definirvalor(double hor, double min,double seg);*/

#endif // HORA_H
};
