#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "../color.hpp"

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain( void );
		Brain( Brain const &src );
		~Brain( void );

		Brain	&operator=( Brain const &rhs );
		
		std::string	getIdea( int i ) const;
		void		setIdea( int i, std::string idea );
};

#endif