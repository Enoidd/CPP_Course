/*


*/

#include <iostream>
using namespace std;

class Service{
    public:
        Service(){cout<<"Service creato\n";};
        virtual ~Service(){cout<<"Distruttore service\n";};

        virtual void execute() const{
            cout<<"Generic service\n";
        }
};

class NetworkService : public Service{
    private:
        NetworkService(){};
    public:
        NetworkService(const NetworkService&)=delete; // copia
        NetworkService& operator=(const NetworkService&)=delete; // assegnazione

        static NetworkService& getIstance(){
            static NetworkService instance;
            return instance;
        }

        void execute() const override{
            cout<<"Network service running\n";
        }
};

class LocalService : public Service{
    public:
        LocalService(){cout<<"LocalService creato\n";};

        void execute() const override{
            cout<<"Local service running\n";
        }
};

void runService(const Service& s){
    s.execute();
}

int main(){

    NetworkService& s = NetworkService::getIstance();

    LocalService l1;
    LocalService l2;

    runService(s);
    runService(l1);
}