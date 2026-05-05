#include "vehicle.h"

bool Vehicle::setCountOfPassengerSeats(int count) {
    if (count < 0) {
        return false;
    }
    m_count_of_passenger_seats = count;
    return true;
}

bool Vehicle::setMaxSpeed(int max_speed) {
    if (max_speed < 0) {

         return false;

        }

    m_max_speed = max_speed;
    return true;
}

bool Vehicle::setFuelConsumption(int fuel_consumption) {
    if (fuel_consumption < 0) {
        return false;
    }

    m_fuel_consumption = fuel_consumption;
    return true;
}

bool Vehicle::setCostVehicle(int cost) {
    if (cost < 0) {
        return false;
    }
    m_cost_of_vehicle = cost;
    return true;
}

bool Vehicle::setName(std::string name) {
    m_name_of_vehicle = name;
    return true;
}

void Vehicle::StartEngine() {
    std::cout << "\nТранспорт видає невизначений звук двигуна";
}

void Vehicle::CreateVehicle() {
    std::cout << "\n--- Характеристики об'єкта ---"
    << "\nНазва: " << m_name_of_vehicle << "\nПасажирів: " << m_count_of_passenger_seats << "\nМакс. швидкість: " << m_max_speed << "\nВитрата палива: " << m_fuel_consumption << " л/100км" << "\nВартість: " << m_cost_of_vehicle << " $\n";
}

Car::Car(int cap) : FuelTank(cap), Vehicle() {
    setName("Звичайна машина");
    setCountOfPassengerSeats(5);
    setMaxSpeed(200);
    std::cout << "\nConstructor: Car part initialized\n";
}

Car::~Car() { 
    std::cout << "\nDestructor: Car part\n"; 
}

void Car::StartEngine() { 
    std::cout << "\nДвигун машини заведено"; 
}

Truck::Truck(int cap) : FuelTank(cap), Vehicle() {
    setName("Вантажівка MAN");
    setCountOfPassengerSeats(2);
    setMaxSpeed(100);
    m_load_capacity = 20000;
    std::cout << "\nConstructor: Truck part initialized\n";
}

Truck::~Truck() { 
    std::cout << "\nDestructor: Truck part\n"; 
}

void Truck::StartEngine() { 
    std::cout << "\nДизель вантажівки працює"; 
}


Pickup::Pickup(int cap) : FuelTank(cap), Vehicle(), Car(cap), Truck(cap) {
    setName("Універсальний Пікап");
    std::cout << "\nConstructor: Pickup (Diamond) fully initialized\n";
}

Pickup::~Pickup() { 
    std::cout << "\nDestructor: Pickup destroyed\n"; 
}

void Pickup::StartEngine() {
    std::cout << "\nПікап заводиться: ";
    Truck::StartEngine(); 
}

ElectricCar::ElectricCar() : FuelTank(0), Car(0) {
    setName("Електромобіль");
    setFuelConsumption(0);
}

void ElectricCar::StartEngine() { 
    std::cout << "\nЕлектромобіль готовий"; 
}

Plane::Plane() : Vehicle() {
    setName("Літак");
    setCountOfPassengerSeats(200);
}

void Plane::StartEngine() { 
    std::cout << "\nДвигуни літака прогріті"; 
}