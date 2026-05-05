#include <iostream>
//#include <windows.h>
#include "vehicle.h"

int main() {
  //  SetConsoleOutputCP(65001);
    std::cout << "\n--- Об'єкт Car ---\n";
    Car* my_car = new Car(50);
    my_car->CreateVehicle();
    my_car->StartEngine();
    delete my_car;

    std::cout << "\n\n--- Об'єкт ElectricCar ---\n";
    ElectricCar* my_ev = new ElectricCar();
    my_ev->CreateVehicle();
    my_ev->StartEngine();
    delete my_ev;

    std::cout << "\n\n--- Об'єкт Truck ---\n";
    Truck* my_truck = new Truck(10);
    my_truck->CreateVehicle();
    my_truck->StartEngine();
    delete my_truck;

    return 0;
}