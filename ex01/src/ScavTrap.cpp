#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap " << _name << " copy constructor called" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cp)
{
    std::cout << "ScavTrap " << _name << " operator= called" << std::endl;
    if (this != &cp)
    {
        _name = cp._name;
        _hitpoints = cp._hitpoints;
        _energypoints = cp._energypoints;
        _attackdamage = cp._attackdamage;
    }
    return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
    return ;
}

void    ScavTrap::attack(const std::string& target)
{
    if (_hitpoints <= 0)
    {
        std::cout << _name << " is dead." << std::endl;
        return ;
    }
    if (_energypoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
        _energypoints--;
        return ;
    }
    if (_energypoints <= 0)
    {
        std::cout << _name << " has no energy points." << std::endl;
        return ;
    }
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints <= 0)
    {
        std::cout << _name << " is dead." << std::endl;
    }
    else
    {
        _hitpoints -= amount;
        std::cout << "ScavTrap " << _name << " took " << amount << " points of damage!" << std::endl;
    }
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (_hitpoints <= 0)
    {
        std::cout << _name << " is dead." << std::endl;
        return ;
    }
    if (_energypoints > 0)
    {
        _hitpoints += amount;
        std::cout << "ScavTrap " << _name << " repaired by " << amount << " points." << std::endl;
    }
    else
    {
        std::cout << _name << " has no energy points." << std::endl;
        return ;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
    return ;
}
