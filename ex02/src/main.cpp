#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

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

	ClapTrap clapTrap( "Mr.ClapTrap" );
	clapTrap.setAttackDamage(5);
	std::cout << "---------[1]-----------" << std::endl;
	FragTrap fragTrap;
	fragTrap.setName( "Mr.FragTrap" );
	std::cout << "---------[3]-----------" << std::endl;
	clapTrap.attack( "Mr.FragTrap" );
	std::cout << "---------[4]-----------" << std::endl;
	fragTrap.takeDamage( 5 );
	std::cout << "---------[5]-----------" << std::endl;
	fragTrap.beRepaired( 2 );
	std::cout << "---------[6]-----------" << std::endl;
	fragTrap.attack( "Mr.ClapTrap" );
	std::cout << "---------[7]-----------" << std::endl;
	clapTrap.takeDamage( 30 );
	clapTrap.setAttackDamage(7);
	std::cout << "---------[9]-----------" << std::endl;
	clapTrap.attack( "Mr.FragTrap" );
	std::cout << "---------[10]-----------" << std::endl;
	fragTrap.highFivesGuys();
	std::cout << "---------[11]-----------" << std::endl;
	

    return (0);
}
