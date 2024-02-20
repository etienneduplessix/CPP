#include "Zombie.hpp"

int main() {
    Zombie* heapZombie = newZombie("Zombie1");
    heapZombie->announce();
    randomChump("Zombie1");
    delete heapZombie;

    return 0;
}
