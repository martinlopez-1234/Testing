/*
Problema Una empresa de Reparto de Mercadería nos encarga realizar una Aplicación que permita manejar un Dron,
tenemos una interfaz que controla y captura automáticamente los datos x consola y la manda al Drone,
por lo que cada “Texto” que se Imprima en Consola se “Envia” al Drone y lo ejecuta, por este motivo,
necesitamos que el Drone “IBag151” pueda, Despegar, Aterrizar, Elevar, Bajar, girar derecha, girar Izquierda, Descargar el Paquete, 
sacar foto de la Recepción y notificar la Entrega,  acelerar y frenar.
*/
#include <iostream>

using namespace std;

//Interfaz que va a ser implementada en la clase consola. Podria no haberla creado y trabajar con dos
//clases pero la dejo por si quiero empezar a clasificar a los drones por tipos de drones 
class iInterfaz
{
    public:
    virtual string despegar() = 0;
    virtual string aterrizar() = 0;
    virtual string elevar()= 0;
    virtual string bajar()= 0;
    virtual string girarDerecha()= 0;
    virtual string girarizquierda()= 0;
    virtual string descargarPaquete()= 0;
    virtual string sacarFotoRecepcion()= 0;
    virtual string notificarEntrega()= 0;
    virtual string acelerar() = 0;
    virtual string frenar()= 0;
};
//Esta clase no tiene ningun atributo
class Consola:public iInterfaz
{
    private:
    //Creo la referencia al dron, lo que me permite crear la asociación
    Dron* dron;
    public:
    //Creo el constructor que inicializa el puntero    
    Consola(Dron* dron):dron(dron) {}
    //Implemento los metodos de la clase iInterfaz, usando la refencia al dron para controlarlo

    //Le envío el mensaje de despegar al dron
    string despegar()
    {
        return dron->despegar();
    }
    //Le envío el mensaje de aterrizar al dron
    string aterrizar()
    {
        return dron->aterrizar();
    }
    string bajar()
    {
        return dron->bajar();
    }
    string elevar()
    {
        return dron->elevar();
    }
    string girarDerecha()
    {
        return dron->girarDerecha();
    }
    string girarizquierda()
    {
        return dron->girarizquierda();
    }
    string descargarPaquete()
    {
        return dron->descargarPaquete();
    }
    string sacarFotoRecepcion()
    {
        return dron->sacarFotoRecepcion();
    }
    string notificarEntrega()
    {
        return dron->notificarEntrega();
    }
    string acelerar()
    {
        return dron->acelerar();
    }
    string frenar()
    {
        return dron->frenar();
    }
};   
    
class Dron
{
    private:
    string id;
    public:
    //Constructor
    Dron (string _id)
    {
        id = _id;
    } 
    //Métodos de dron que devuelven el mensaje a la consola, para que se entienda
    //que esta recibiendo los mensajes
    string despegar()
    {
        return "El dron " + id + " está despegando.";
    }
    string aterrizar()
    {
        return "El dron " + id + " está aterrizando.";
    }
    string elevar()
    {
        return "El dron " + id + " se está elevando.";
    }
    string bajar()
    {
        return "El dron " + id + " está bajando.";
    }
    string girarDerecha()
    {
        return "El dron " + id + " está girando a la derecha.";
    }
    string girarizquierda()
    {
        return "El dron " + id + " está girando a la izquierda.";
    }
    string descargarPaquete()
    {
        return "El dron " + id + " está descargando el paquete.";
    }
    string sacarFotoRecepcion()
    {
        return "El dron " + id + " está sacando una foto de la recepción.";
    }
    string notificarEntrega()
    {
        return "El dron " + id + " está notificando la entrega.";
    }
    string acelerar()
    {
        return "El dron " + id + " está acelerando.";
    }
    string frenar()
    {
        return "El dron " + id + " está frenando.";
    }
};



int main(int argc, char** argv) 
{
    Dron* dron = new Dron("IBANG151");
    //Creo una instancia de consola que envía como argumento a su contructor un objeto del tipo dron
    Consola* consola = new Consola(dron);

    cout << consola->descargarPaquete() << endl;

    delete dron;
    delete consola;

    return 0;
}
