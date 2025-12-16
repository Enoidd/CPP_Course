/*

Creare una classe Counter che:

sia un Singleton

contenga un contatore interno int count

abbia:

increment()

getValue() const

*/

#include <iostream>
#include <memory>
using namespace std;

class Counter{
    private:
        Counter(): count(0){};
        int count;

    public:
        // Copia e assegnazione
        Counter(const Counter&)=delete;
        Counter& operator=(const Counter&)=delete;

        static Counter& getInstance(){
            static Counter instance;
            return instance;
        }


        void setCount(int v){
            count = v;
        }

        void increment(){
            count++;
        }

        int getValue() const{
            return count;
        }
};

int main(){

    Counter& c1 = Counter::getInstance();

    c1.setCount(2);
    c1.increment();
    cout<<c1.getValue()<<endl;

}