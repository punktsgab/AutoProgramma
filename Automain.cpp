#include <iostream>
#include <string>
using namespace std;

// Gabriela Garuta, P2-3

class Auto {
    private:
        string marka;
        float vidBenzinaPaterins;
        string razotajs;
        string* draugaAuto;

    public:
        Auto();
        Auto(string nosaukums);

        ~Auto();

        void setMarka (string marka);
        void setVidBenzinaPaterins (float vidBenzinaPaterins);
        void setRazotajs (string razotajs);

        string getMarka() const;
        float getVidBenzinaPaterins() const;
        string getRazotajs() const;

        float getCelaIzmaksa(float attalums) const;  
        float getCelaIzmaksa(float attalums, float cena) const;  
        float getCelaBenzins(float attalums) const;
        void printAutoData();
};

        Auto::Auto(){
            marka = "Audi";
            vidBenzinaPaterins = 7;
        }
        Auto::Auto(string nosaukums) {
           
           draugaAuto = new string;
           *draugaAuto = nosaukums;

        };

        Auto::~Auto(){
            printAutoData();
            cout<<"\nAutomasinai "<<marka<<" tiek norakstita.\n";
            cin.get();
        };

void Auto::setMarka(string marka){
    this-> marka=marka;
}

void Auto::setVidBenzinaPaterins(float vidBenzinaPaterins){
    this->vidBenzinaPaterins=vidBenzinaPaterins;
}

void Auto::setRazotajs(string razotajs){
    this->razotajs=razotajs;
}



string Auto::getMarka() const{
    return this->marka;
}

string Auto::getRazotajs() const {
    return this->razotajs;
}

float Auto::getCelaBenzins(float attalums) const {
    return attalums/100;
}

float Auto::getCelaIzmaksa(float attalums) const {
    return attalums*7;
}

float Auto::getCelaIzmaksa(float attalums, float cena) const {
    return attalums*cena;
}

void Auto::printAutoData(){
    cout<<"\nMasinai "<<marka<<" ar razotaju "<<razotajs<<" videjais benzina paterins ir "<<vidBenzinaPaterins<<" litri"<<endl;
}

Auto mansAuto;
Auto*skolasAuto;

int main(){
    mansAuto.setMarka("BMW");
    mansAuto.setRazotajs("China");
    mansAuto.setVidBenzinaPaterins(1);
    mansAuto.printAutoData();

    float attalums;
    float cena;
    skolasAuto = new Auto;
    skolasAuto -> setMarka("Audi");
    skolasAuto -> setRazotajs("Tokyo");
    skolasAuto -> setVidBenzinaPaterins(3);
    cout <<"\nKada ir celojuma distance: ";
    cin>>attalums;
    cout <<"\nKada ir benzina cena: ";
    cin>>cena;
    skolasAuto -> printAutoData();
    cout << "Izmaksa pa so distanci ir "<< skolasAuto ->getCelaIzmaksa(attalums, cena);
    delete skolasAuto;
    cin.get();

    Auto draugaAuto = Auto("Dodge");
    draugaAuto.printAutoData();
    cin.get();
    return 0;
};
