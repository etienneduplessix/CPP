#include "Zombie.hpp"



int main() {
  
    int hordeSize = 5;
    Zombie* zombieHordePtr = zombieHorde(hordeSize, "HordeZombie");

    // Announce each zombie in the horde
    for (int i = 0; i < hordeSize; ++i) {
        zombieHordePtr[i].announce();
    }
    delete[] zombieHordePtr;

    return 0;
}
