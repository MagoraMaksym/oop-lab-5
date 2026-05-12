#include "vehicle.h"

Vehicle::Vehicle() : m_count_of_passenger_seats(0), m_max_speed(0), m_fuel_consumption(0), m_cost_of_vehicle(0), m_name_of_vehicle("Unknown") {
    std::cout << "Constructor: Vehicle \n";
}


Vehicle::~Vehicle() { std::cout << "Destructor: Vehicle \n"; }

bool Vehicle::setName(std::string name) { m_name_of_vehicle = name; return true; }
void Vehicle::StartEngine() { std::cout << "\nЗвук двигуна"; }
void Vehicle::CreateVehicle() { std::cout << "\nОб'єкт: " << m_name_of_vehicle; }



Car::Car(int cap) : Vehicle() { std::cout << "Constructor: Car \n"; }
Car::~Car() { std::cout << "Destructor: Car \n"; }
void Car::StartEngine() { std::cout << "\nДвигун авто"; }



Truck::Truck(int cap) : Vehicle() { std::cout << "Constructor: Truck \n"; }
Truck::~Truck() { std::cout << "Destructor: Truck \n"; }
void Truck::StartEngine() { std::cout << "\nДизель вантажівки"; }


Pickup::Pickup(int cap) : Vehicle(), Car(cap), Truck(cap), Machine() {
    setName("Pickup Diamond");
    std::cout << "Constructor: Pickup \n";
}
Pickup::~Pickup() { std::cout << "Destructor: Pickup\n"; }
void Pickup::StartEngine() { std::cout << "\nПікап заведено!"; }

ElectricCar::ElectricCar() : Car(0) { setName("EV"); }
void ElectricCar::StartEngine() { std::cout << "\nЕлектро готовий"; }
