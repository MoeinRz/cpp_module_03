#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Mr.ClapTrap");
	clapTrap.setAttackDamage(5);
	
	ScavTrap scavTrap;
	scavTrap.setName("Ms.ScavTrap");

	clapTrap.attack("Ms.ScavTrap");

	scavTrap.takeDamage(5);
	scavTrap.beRepaired(2);
	scavTrap.attack("Mr.ClapTrap");
	scavTrap.guardGate();
	
	clapTrap.takeDamage (20);
	clapTrap.setAttackDamage(7);
	clapTrap.attack("Ms.ScavTrap");

    return (0);
}
