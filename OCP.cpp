#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


class Coche {  
    
    public:
        Coche(string m, int p)
        { 
           	marca = m;
            precioMedioCoche=p;
        }

        ~Coche()
        {
           	cout<<"coche destruido"<<endl;
        }

        string getMarcaCoche()
        {
            return marca;
        }

        int getPrecioMedioCoche()
        {
            return precioMedioCoche;        }

    private: 
    	string marca;
        int precioMedioCoche;
};

void imprimirPrecioMedioCoche(Coche* L[]){

int MAX_NUM=16;

for (int i = 0; i < MAX_NUM; ++i)
    {
        cout<<L[i]->getMarcaCoche()<<": "<<L[i]->getPrecioMedioCoche()<<endl;
    }


/*Coche* (* temp);
temp=L;

while (temp!=nullptr)
    {
        cout<<(*temp)->getMarcaCoche()<<": "<<(*temp)->getPrecioMedioCoche()<<endl;
        temp++;
    }
*/

}

int main()
{

    Coche* Renault = new Coche("Renault",15000);
    Coche* Audi = new Coche("Audi",45000);
    Coche* Ford = new Coche("Ford",22000);

    int MAX_NUM=16;
    Coche* Lista_Coches[MAX_NUM]={Renault, Audi, Ford};

    imprimirPrecioMedioCoche(Lista_Coches);
    
    return 0;
}