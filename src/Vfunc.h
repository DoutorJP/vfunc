#ifndef Vfunc
#define Vfunc

double Vm(double distancia, double tempo)
{
    return distancia / tempo;
}

double Vt(double distancia, double media)
{
    return distancia / media;
}

double Vs (double media, double tempo)
{
    return media * tempo;
}

#endif
