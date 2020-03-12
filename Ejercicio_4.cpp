#include <iostream>

using namespace std;

class GatoSimple{
    public:
    GatoSimple();
    ~GatoSimple();
    int ObtenerEdad()const{
        return *suEdad;
    }
    void AsignarEdad(int edad){
        *suEdad = edad;
    }
    int ObtenerPeso(){
        return *suPeso;
    }
    void AsignarPeso(int peso){
        *suPeso = peso;
    }

    private:
        int * suEdad;
        int * suPeso;

};

GatoSimple::GatoSimple(){
    suEdad= new int(2);
    suPeso = new int(5);

}
 GatoSimple * Pelusa = new GatoSimple;
    cout << "Pelusa tiene: " << Pelusa->ObtenerEdad();
    cout << "aios de edad " << endl;
    Pelusa->AsignarEdad(5);
    cout << "Pelusa tiene: " << Pelusa->ObtenerEdad();
    cout << "anios de edad" << endl;
    return 0;
