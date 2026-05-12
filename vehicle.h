#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle { 
protected: 
    int m_count_of_passenger_seats, m_max_speed, m_fuel_consumption, m_cost_of_vehicle;
    std::string m_name_of_vehicle;
public:
    Vehicle();
    virtual ~Vehicle();
    bool setCountOfPassengerSeats(int count);
    bool setMaxSpeed(int max_speed);
    bool setFuelConsumption(int fuel_consumption);
    bool setCostVehicle(int cost);
    bool setName(std::string name_of_vehicle);
    virtual void StartEngine();
    void CreateVehicle();
};

class Machine {
public:
    Machine() { std::cout << "Constructor: Machine\n"; }
    virtual ~Machine() { std::cout << "Destructor: Machine\n"; }
};

class Car : public virtual Vehicle { 
public:
    Car(int cap);
    virtual ~Car();
    void StartEngine() override;
};

class Truck : public virtual Vehicle { 
public:
    Truck(int cap);
    virtual ~Truck();
    void StartEngine() override;
};

class Pickup : public Car, public Truck, public Machine {
public:
    Pickup(int cap);
    ~Pickup();
    void StartEngine() override;
};

class ElectricCar : public Car {
public:
    ElectricCar();
    void StartEngine() override;
};

#endif
