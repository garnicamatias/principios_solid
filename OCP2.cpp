#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;


class Coche {  
    
    public:
        Coche(){};
        virtual ~Coche(){};
        virtual int precioMedioCoche()=0;

};


class Renault : public Coche {

    int precioMedioCoche() 
    { 
        return 18000; 
    }
};

class Audi : public Coche {

    int precioMedioCoche() 
    { 
        return 25000; 
    }

};

class Ford : public Coche {

    int precioMedioCoche() 
    { 
        return 30000; 
    }

};


void imprimirPrecioMedioCoche(vector<Coche*> L){

for (int i = 0; i < L.size(); ++i)
    {
        cout<<L[i]->precioMedioCoche()<<endl;
    }

}

int main()
{

    Coche* c_renault = new Renault();
    Coche* c_audi = new Audi();
    Coche* c_ford = new Ford();

    vector<Coche*> Lista_Coches;

    Lista_Coches.push_back(c_renault);
    Lista_Coches.push_back(c_audi);
    Lista_Coches.push_back(c_ford);

    imprimirPrecioMedioCoche(Lista_Coches);
    
    return 0;
}