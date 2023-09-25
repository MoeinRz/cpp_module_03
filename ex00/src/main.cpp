#include "../include/ClapTrap.hpp"

int main(void)
{
	ClapTrap fighter1("Hasan");
	std::cout << "---------[1]-----------" << std::endl;
	fighter1.setAttackDamage(5);
	ClapTrap fighter2 (fighter1);
	fighter2.setName("Ali");
	std::cout << "---------[2]-----------" << std::endl;
	fighter1.attack("Ali");
	std::cout << "---------[3]-----------" << std::endl;
	fighter2.takeDamage(5);
	std::cout << "---------[4]-----------" << std::endl;
	fighter2.beRepaired(2);
	std::cout << "---------[5]-----------" << std::endl;
	fighter2.attack("Hasan");
	std::cout << "---------[6]-----------" << std::endl;
	fighter1.takeDamage(5);
	std::cout << "---------[7]-----------" << std::endl;
	fighter1.setAttackDamage(7);
	fighter1.attack("Ali");
	std::cout << "---------[8]-----------" << std::endl;
	fighter2.takeDamage(7);
	std::cout << "---------[9]-----------" << std::endl;
	fighter2.attack("Hasan");
	std::cout << "---------[10]-----------" << std::endl;
	fighter2.beRepaired(2);
	std::cout << "---------[11]-----------" << std::endl;
    return (0);
}
