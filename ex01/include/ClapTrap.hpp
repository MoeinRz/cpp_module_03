# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    private:
        std::string _name;
        int _hitpoints;
        int _energypoints;
        int _attackdamage;

    public:
        ClapTrap(void);
        ~ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ClapTrap& operator=(const ClapTrap &cp);
        void    setName(std::string name);
        void    setAttackDamage(unsigned int amount);
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

# endif
