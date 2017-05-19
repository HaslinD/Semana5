#include <typeinfo>
#include <iostream>
#include <string>

using namespace std;

class Base{
    virtual void foo(){}
};
class Derivada:public Base{
    virtual void foo(){}
};
class DerivadaDos:public Derivada{
    virtual void foo(){}
};


int main(){
    
    Base base;
    Derivada derivada;
    DerivadaDos derivada2;

    //Obtener typeid de objetos
    cout << "Clase Base: " << typeid(base).name() << endl;
    cout << "Clase Derivada: " << typeid(derivada).name() << endl;
    cout << "Clase Derivada2: " << typeid(derivada2).name() << endl;
    
    //obtener typeid de la clase
    cout << "Base: " << typeid(Base).name() << endl;

    if(typeid(Base) == typeid(base)){
	cout << "La Variable es tipo Base " << endl;

    }
    //apuntadores
    Base* variable = new Derivada();
    cout << "El tipo de variable es: " << typeid(*variable).name() << endl; 

    if(typeid(Base) == typeid(*variable)){
	cout << "Es un apuntador a Base. " << endl;
    }

    delete variable;
    
    //string-------------------------------------------------------/
    string cadena = "Hola Mundo";
    cout << typeid(cadena).name() << endl;

    cout << cadena[1] << endl;
 
    cout << "Elemento es: " << typeid(cadena[1]).name() << endl;

    int val = cadena[1];
    cout << val << endl;

    cadena[1] = val + 1;

    cout << cadena << endl;
    
    cadena.push_back('s');

    cout << cadena << endl;

    return 0;
}
