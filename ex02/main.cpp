#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Dog* j = new Dog();
	const Cat* i = new Cat();
	
	std::cout << std::endl;

	delete j;//should not create a leak
	delete i;
	
	std::cout << "\n=======================================================\n" << std::endl;

	const Dog* someDog = new Dog();
	const Cat* someCat = new Cat();

	std::cout << std::endl;

	someCat->makeSound(); //will output the cat sound!
	someDog->makeSound();

	std::cout << std::endl;

	std::cout << YEL << "MESSAGE FROM BRAIN" << RES << std::endl;
	std::cout << someCat->getBrain()->getIdea(5) << std::endl;
	std::cout << YEL << "MESSAGE FROM CAT BRAIN" << RES << std::endl;
	someCat->getBrain()->setIdea(5, "Cat Idea");
	std::cout << someCat->getBrain()->getIdea(5) << std::endl;

	std::cout << std::endl;

	std::cout << YEL << "MESSAGE FROM BRAIN" << RES << std::endl;
	std::cout << someCat->getBrain()->getIdea(99) << std::endl;
	std::cout << YEL << "MESSAGE FROM DOG BRAIN" << RES << std::endl;
	someCat->getBrain()->setIdea(99, "Not Cat Idea");
	std::cout << someCat->getBrain()->getIdea(99) << std::endl;


	std::cout << std::endl;

	delete j;
	delete i;

	return 0;
}