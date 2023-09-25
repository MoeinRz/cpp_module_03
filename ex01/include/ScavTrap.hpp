# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ~ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap &cp);
        void    setName(std::string name);
        void    setAttackDamage(unsigned int amount);
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    guardGate();
};

# endif