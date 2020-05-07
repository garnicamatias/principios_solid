#include <iostream>
#include <string>

using namespace std;


class Coche {  
    
    public:
        Coche(string m)
        { 
           	marca = m;
           	cout<<"coche de marca :"<<marca<<" construido"<<endl;
        }
        ~Coche()
        {
           	cout<<"coche destruido"<<endl;
        }
        string getMarcaCoche()
        {
            return marca;
        }

    private: 
    	string marca;
};

class DBHandler{  
    //void insertDB(...){ ... }
   // void deleteDB(...){ ... }
}

int main()
{
    Coche* coche_1 = new Coche("Renault");

    cout<<coche_1->getMarcaCoche()<<endl;

    delete coche_1;
    return 0;
}