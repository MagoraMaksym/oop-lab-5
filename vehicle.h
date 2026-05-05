#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class FuelTank {
public:
    int capacity;
    FuelTank(int cap) : capacity(cap) {
        std::cout << "Constructor: FuelTank (capacity: " << capacity << ")\n";
    }
    virtual ~FuelTank() {
        std::cout << "Destructor: FuelTank\n";
    }
};

class Vehicle {
private:
    int m_count_of_passenger_seats, m_max_speed, m_fuel_consumption, m_cost_of_vehicle;
    std::string m_name_of_vehicle;
public:
    Vehicle() : m_count_of_passenger_seats(0), m_max_speed(0), m_fuel_consumption(0), m_cost_of_vehicle(0), m_name_of_vehicle("Unknown") {
        std::cout << "Constructor: Vehicle\n";
    }
    
    bool setCountOfPassengerSeats(int count);
    bool setMaxSpeed(int max_speed);
    bool setFuelConsumption(int fuel_consumption);
    bool setCostVehicle(int cost);
    bool setName(std::string name_of_vehicle);
    
    virtual void StartEngine();
    void CreateVehicle();
    virtual ~Vehicle() {
        std::cout << "Destructor: Vehicle\n";
    }
};

class Car : public virtual FuelTank, public virtual Vehicle {
public:
    Car(int cap);
    virtual ~Car();
    void StartEngine() override;
};

class Truck : public virtual FuelTank, public virtual Vehicle {
private:
    int m_load_capacity;
public:
    Truck(int cap);
    virtual ~Truck();
    void StartEngine() override;
};

class Pickup : public Car, public Truck {
public:
    Pickup(int cap);
    ~Pickup();
    
    void StartEngine() override;
};

class ElectricCar : public Car {
private:
    int m_battery_capacity;
public:
    ElectricCar();
    void StartEngine() override;
};

class Plane : public Vehicle {
public:
    Plane();
    void StartEngine() override;
};

#endif // VEHICLE_H