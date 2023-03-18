#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		AMateria( void );
		AMateria( std::string type );
		AMateria( AMateria const & src );

	public:
		~AMateria( void );
		AMateria( std::string const & type );

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
