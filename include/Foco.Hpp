#pragma once

class Foco
{
private:
    EstadoFoco estado;
public:
    Foco() { estadoActual=false}
    ~Foco() {}
    void encender(){}
    void Apagar(){}
    EstadoFoco MostrarEstado(){}
};