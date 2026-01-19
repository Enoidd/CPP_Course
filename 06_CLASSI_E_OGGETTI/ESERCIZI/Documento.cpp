#include <iostream>
#include <string>

/* Indent indica quanti spazi da stampare prima del testo */

using namespace std;

class Documento{
    protected:
        string titolo;
    public:
        Documento(){
            titolo = "Sconosciuto";
        }

        Documento(const string& titolo){
            this->titolo = titolo;
        }

        ~Documento(){

        }
        //Polimorfismo dinamico
        virtual void stampa() const{
            cout<<"Titolo: "<<endl;
        }

        // Overloading (polimorfismo statico)
        void stampa(int indent) const{
            for(int i=0; i<indent; i++)
                cout<<" ";
            cout<<"Documento: "<<titolo<<endl;
        }
};

class Libro : public Documento{
    private:
        int pagine;

    public:
        Libro() : Documento() {
            pagine = 0;
        }

        Libro(const string& titolo, int pagine) : Documento(titolo){
            this->pagine = pagine;
        }

        ~Libro(){

        }

        // Polimorfismo dinamico
        void stampa() const override{
            Documento::stampa();
            cout<<", Pagine: "<<pagine;
        }
        // Overloading della derivata (polimorfismo statico)
        void stampa(bool mostraPagine) const{
            if(mostraPagine)
                cout<<"Libro: "<<titolo<<", Pagine: "<<pagine<<endl;
            else
                cout<<"Libro: "<<titolo<<endl;
        }

};

class Email : public Documento{
    protected:
        string mittente;

    public:
        Email() : Documento(titolo){
            mittente = "Sconosciuto";
        }

        Email(const string& titolo, const string& mittente) : Documento(titolo){
            this->mittente = mittente;
        }

        ~Email(){

        }

        // Polimorfismo dinamico
        void stampa() const override{
            Documento::stampa();
            cout<<", Mittende: "<<mittente<<endl;
        }

        // Overloading della derivata (polimorfismo statico)
        void stampa(const string& prefisso) const{
            cout<<"Email: "<<titolo<<", Mittente: "<<mittente<<endl;
        }
};

int main(){

}