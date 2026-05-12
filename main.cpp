#include <iostream>
#include "vehicle.h"

int main() {
    std::cout << "--- Тест об'єкта за малюнками (Pickup) ---\n";
    Pickup* p = new Pickup(100);
    
    std::cout << "\n--- Видалення ---\n";
    delete p;

    return 0;
}
