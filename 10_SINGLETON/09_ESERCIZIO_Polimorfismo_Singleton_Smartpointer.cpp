/*

Classe base concreta: Service

- Costruttore pubblic che stampa "Service creato"
- Distruttore virtuale che stampa "Service distrutto"
- Metodo virtuale
    virtual void execute() const; -> stampa: "Generic service"

Classe derivata: NetworkService (Meyers)

- Costruttore private che stampa: "NetworkService creato"
- copia e assegnazione bloccate
- static NetworkService& getInstance();
- override di execute() che stampa: "Network service running"

Classe derivata normale: LocalService

- Costruttore pubblico che stampa: LocalService creato
- Override execute() che stampa: "Local service running"

Classe derivata: ConfigurableService

- Struct concreta "Config" con:
    int port
    string host

Requisiti ConfigurableService:
    - eredita da Service
    - ha un membro shared_ptr<Config> cfg;
    - costruttore prende shared_ptr<Config> come:
        Configurable service: host=<...> port=<...>

Funzioni esterne 

A) Funzione che lavora su reference 

    void runService(const Service& s);

B) Funzione che lavora su unique_ptr

    void runServicePtr(const unique_ptr<Service>& p);

*/

#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

class Service{
    public:
        Service(){cout<<"Service creato\n";};
        virtual ~Service(){cout<<"Service distrutto\n";};

        virtual void execute() const{
            cout<<"Generic service\n";
        }
};

class NetworkService : public Service{
    private:
        NetworkService(){cout<<"NetworkService creato\n";};
    public:
        NetworkService(const NetworkService&)=delete;
        NetworkService& operator=(const NetworkService&)=delete;

        static NetworkService& getInstance(){
            static NetworkService instance;
            return instance;
        }

        void execute() const override{
            cout<<"Network service running\n";
        }
};

class LocalService : public Service{
    public:
        LocalService() {cout<<"LocalService creato\n";};

        void execute() const override{
            cout<<"Local service running\n";
        }
};

struct Config{
    int port;
    string host;
};

class ConfigurableService : public Service{
    private:
        shared_ptr<Config> cfg;

    public:
        explicit ConfigurableService(shared_ptr<Config> c): cfg(move(c)){
            cout<<"ConfigurableService creato\n";
        }

        void execute() const override{
            cout<<"Configurable service host:"<<cfg->host<<" port="<<cfg->host<<"\n";
        };
};

void runService(const Service& s){
    s.execute();
}

void runServicePtr(const unique_ptr<Service>& p){
    p->execute();
}

int main(){

    vector<unique_ptr<Service>> services;

    // shared config (condivisione)
    auto shared_cfg = make_shared<Config>();
    shared_cfg->host = "localhost";
    shared_cfg->port = 8080;

    // LocalService (ownership unica nel vector)
    services.push_back(make_unique<LocalService>());
    services.push_back(make_unique<LocalService>());

    // ConfigurableService che condividono la stessa config
    services.push_back(make_unique<ConfigurableService>(shared_cfg));
    services.push_back(make_unique<ConfigurableService>(shared_cfg));

    for(const auto& s : services){
        runServicePtr(s);
    }

    cout<<"SINGLETON\n";
    NetworkService& ns = NetworkService::getInstance();
    runService(ns);

    // cambio configurazione
    shared_cfg->port=9090;

    for(const auto& s : services){
        runServicePtr(s);
    }

    return 0;
}