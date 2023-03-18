#ifndef MATERIALSOURCE_HPP
# define MATERIALSOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_materia[4];
		int			_count;
	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		~MateriaSource( void );

		MateriaSource & operator=( MateriaSource const & rhs );

		void learnMateria( AMateria* );
		AMateria* createMateria( std::string const & type );
};

#endif
