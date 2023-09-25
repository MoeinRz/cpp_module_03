#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
    return ;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap& cp)
{
    std::cout << "FragTrap " << this->_name << " operator= called" << std::endl;
    if (this != &cp)
    {
        this->_name = cp._name;
        this->_hitpoints = cp._hitpoints;
        this->_energypoints = cp._energypoints;
        this->_attackdamage = cp._attackdamage;
    }
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
    return ;
}

void    FragTrap::attack(const std::string& target)
{
    if (_hitpoints <= 0)
    {
        std::cout << this->_name << " is dead." << std::endl;
        return ;
    }
    if (_energypoints > 0)
    {
        std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
        this->_energypoints--;
        return ;
    }
    if (this->_energypoints <= 0)
    {
        std::cout << "FragTrap " << this->_name << " is out of energy." << std::endl;
        return ;
    }
}

void    FragTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints <= 0)
    {
        std::cout << this->_name << " is dead." << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    this->_hitpoints -= amount;
    return ;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    if (_hitpoints <= 0)
    {
        std::cout << this->_name << " is dead." << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " is repaired for " << amount << " points of health!" << std::endl;
    this->_hitpoints += amount;
    return ;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " requests a high five." << std::endl;
    return ;
}
