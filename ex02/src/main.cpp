#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int main(void)
{
	ClapTrap clapTrap( "Hasan" );
	clapTrap.setAttackDamage(5);
	std::cout << "---------[1]-----------" << std::endl;
	FragTrap fragTrap;
	fragTrap.setName( "Fafa" );
	std::cout << "---------[2]-----------" << std::endl;
	clapTrap.attack( "Fafa" );
	std::cout << "---------[3]-----------" << std::endl;
	fragTrap.takeDamage( 5 );
	std::cout << "---------[4]-----------" << std::endl;
	fragTrap.beRepaired( 2 );
	std::cout << "---------[5]-----------" << std::endl;
	fragTrap.attack( "Hasan" );
	std::cout << "---------[6]-----------" << std::endl;
	clapTrap.takeDamage( 30 );
	clapTrap.setAttackDamage(7);
	std::cout << "---------[7]-----------" << std::endl;
	clapTrap.attack( "Fafa" );
	std::cout << "---------[8]-----------" << std::endl;
	fragTrap.highFivesGuys();
	std::cout << "---------[9]-----------" << std::endl;
    return (0);
}
