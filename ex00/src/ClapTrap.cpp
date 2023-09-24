#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Moein"), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
    std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :  _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
    std::cout << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void    ClapTrap::setAttackDamage(unsigned int amount)
{
    this->_attackdamage = amount;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &cp)
{
    if (this != &cp)
    {
        std::cout << "Copy assignment operattor used" << std::endl;
        this->_name = cp._name;
        this->_hitpoints = cp._hitpoints;
        this->_energypoints = cp._energypoints;
        this->_attackdamage = cp._attackdamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap disstructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << this->_name <<" is dead." << std::endl;
        return ;
    }
    if (this->_energypoints > 0)
    {
        std::cout << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
        this->_energypoints--;
        return ;
    }
    if (this->_energypoints <= 0)
    {
        std::cout << this->_name << " has no energy points." << std::endl;
        return ;
    }
    
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << this->_name << " is dead." << std::endl;
    }
    else
    {
        this->_hitpoints -= amount;
        std::cout << this->_name << " take " << amount << " points of damage!" << std::endl;
    }
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitpoints <= 0)
    {
        std::cout << this->_name << " is dead." << std::endl;
        return ;
    }
    if (this->_energypoints > 0)
    {
        this->_hitpoints += amount;
        std::cout << this->_name << " repaired by " << amount << " points." << std::endl;
    }
    else
        std::cout << this->_name << " has no energy points." << std::endl;
    return ;
}
