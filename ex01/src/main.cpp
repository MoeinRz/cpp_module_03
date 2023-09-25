#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Hasan");
	clapTrap.setAttackDamage(5);
	std::cout << "---------[1]-----------" << std::endl;
	ScavTrap scavTrap;
	scavTrap.setName("Fafa");
	std::cout << "---------[2]-----------" << std::endl;
	clapTrap.attack("Fafa");
	std::cout << "---------[3]-----------" << std::endl;
	scavTrap.takeDamage(5);
	std::cout << "---------[4]-----------" << std::endl;
	scavTrap.beRepaired(2);
	std::cout << "---------[5]-----------" << std::endl;
	scavTrap.attack("Hasan");
	std::cout << "---------[6]-----------" << std::endl;
	scavTrap.guardGate();
	std::cout << "---------[7]-----------" << std::endl;	
	clapTrap.takeDamage (20);
	std::cout << "---------[8]-----------" << std::endl;
	clapTrap.setAttackDamage(7);
	clapTrap.attack("Fafa");
	std::cout << "---------[9]-----------" << std::endl;

    return (0);
}
