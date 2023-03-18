#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
		AMateria *_floor[100];
		Character( void );
	public:
		Character( std::string name );
		Character( Character const & src );
		~Character( void );

		Character & operator=( Character const & rhs );

		std::string const & getName() const;
		void equip( AMateria* m );
		void unequip( int slot );
		void use( int idx, ICharacter& target );
};

#endif
