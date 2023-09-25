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

	FragTrap fragTrap;
	fragTrap.setName( "Mr.FragTrap" );

	clapTrap.attack( "Mr.FragTrap" );

	fragTrap.takeDamage( 5 );
	fragTrap.beRepaired( 2 );
	fragTrap.attack( "Mr.ClapTrap" );
	
	clapTrap.takeDamage( 30 );
	clapTrap.setAttackDamage(7);
	clapTrap.attack( "Mr.FragTrap" );
	fragTrap.highFivesGuys();
	

    return (0);
}
