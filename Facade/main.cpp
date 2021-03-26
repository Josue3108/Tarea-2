#include <iostream>
class Engine{
private:
    int state;
public:
    Engine(){
        state = 0;
    }

    void State(){
        if (state == 1){
            std::cout<<"Engine: On\n";
        }else{
            std::cout<<"Engine: Off\n";
        }
    }

    void TurnOn(){
        state = 1;
    }
};

class Headlights{
private:
    int state;
public:
    Headlights(){
        state = 0;
    }

    void State(){
        if (state == 1){
            std::cout<<"Headlights: On\n";
        }else{
            std::cout<<"Headlights: Off\n";
        }
    }

    void TurnOn(){
        state = 1;
    }
};

class Car{
private:
    Engine engine;
    Headlights headlights;

public:
    Car(){
        engine.State();
        headlights.State();
    }

    void turnOnEngine(){
        engine.TurnOn();
    }
    void turnOnHeadlights(){
        headlights.TurnOn();
    }
    void State(){
        engine.State();
        headlights.State();
    }
};

int main(){
    Car car;
    car.turnOnEngine();
    car.State();
    car.turnOnHeadlights();
    car.State();

    return 0;
}