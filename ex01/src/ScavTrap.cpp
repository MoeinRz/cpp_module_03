#include "../include/ScavTrap.hpp"

ScavTrap::ScaveTrap() : ClapTrap()
{
    std::cout << "ScaveTrap " << this->_name << " constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScaveTrap " << this->_name << " constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScaveTrap " << this->_name << " copy constructor called" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cp)
{
    std::cout << "ScaveTrap " << this->_name << " operator= called" << std::endl;
    if (this != &cp)
    {
        this->_name = cp._name;
        this->_hitpoints = cp._hitpoints;
        this->_energypoints = cp._energypoints;
        this->_attackdamage = cp._attackdamage;
    }
    return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScaveTrap " << this->_name << " destructor called" << std::endl;
    return ;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << this->_name << " is dead." << std::endl;
        return ;
    }
    if (this->_energypoints > 0)
    {
        std::cout << "ScaveTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
        this->_energypoints--;
        return ;
    }
    if (this->_energypoints <= 0)
    {
        std::cout << this->_name << " has no energy points." << std::endl;
        return ;
    }
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << this->_name << " is dead." << std::endl;
    }
    else
    {
        this->_hitpoints -= amount;
        std::cout << "ScaveTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
    }
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << this->_name << " is dead." << std::endl;
        return ;
    }
    if (this->_energypoints > 0)
    {
        this->_hitpoints += amount;
        std::cout << "ScaveTrap " << this->_name << " repaired by " << amount << " points." << std::endl;
    }
    else
    {
        std::cout << this->_name << " has no energy points." << std::endl;
        return ;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "ScaveTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
    return ;
}
