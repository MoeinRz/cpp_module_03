#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main(void)
{
	// ClapTrap fighter1("Hasan");
	// fighter1.setAttackDamage(5);
	// ClapTrap fighter2 (fighter1);
	// fighter2.setName("Ali");
	// fighter1.attack("Ali");
	// fighter2.takeDamage(5);
	// fighter2.beRepaired(2);
	// fighter2.attack("Hasan");
	// fighter1.takeDamage(5);
	// fighter1.setAttackDamage(7);
	// fighter1.attack("Ali");
	// fighter2.takeDamage(7);
	// fighter2.attack("Hasan");
	// fighter2.beRepaired(2);

	ClapTrap clapTrap("Mr.ClapTrap");
	clapTrap.setAttackDamage(5);

	ScavTrap scavTrap;
	scavTrap.setName("Mr.ScavTrap");

	clapTrap.attack("Mr.ScavTrap");

	scavTrap.takeDamage(5);
	scavTrap.beRepaired(2);
	scavTrap.attack("Mr.ClapTrap");
	scavTrap.guardGate();
	
	clapTrap.takeDamage (20);
	clapTrap.setAttackDamage(7);
	clapTrap.attack("Mr.ScavTrap");

    return (0);
}
