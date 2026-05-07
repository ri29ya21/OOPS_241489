// Program 11: WAP to demonstrate Containership
// using Real-Life Classes.
// Author – Riya -241489

#include <iostream>
using namespace std;

// ----------- Engine Class -----------
// Independent Class

class Engine
{
public:
    void startEngine()
    {
        cout << "Engine started successfully 🚀" << endl;
    }

    void stopEngine()
    {
        cout << "Engine stopped." << endl;
    }
};

// ----------- FuelSystem Class -----------

class FuelSystem
{
public:
    void fillFuel()
    {
        cout << "Fuel tank filled with plasma fuel" << endl;
    }
};

// ----------- Spaceship Class -----------
// HAS-A Relationship (Containership)

class Spaceship
{
private:
    Engine engine;        // Containership
    FuelSystem fuel;      // Containership

public:

    void launch()
    {
        cout << "\nPreparing Spaceship Launch..." << endl;

        fuel.fillFuel();
        engine.startEngine();

        cout << "Spaceship is now LAUNCHED into space" << endl;
    }

    void landing()
    {
        cout << "\nInitiating Landing Sequence..." << endl;

        engine.stopEngine();

        cout << "Spaceship has landed safely on Earth" << endl;
    }
};

// ----------- Main Function -----------

int main()
{
    Spaceship s1;

    s1.launch();
    s1.landing();

    return 0;
}