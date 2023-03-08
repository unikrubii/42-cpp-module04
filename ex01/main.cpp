#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;

	delete j;//should not create a leak
	delete i;
	
	std::cout << "\n=======================================================\n" << std::endl;

	const Animal* someDog = new Dog();
	const Animal* someCat = new Cat();

	std::cout << std::endl;

	someCat->makeSound(); //will output the cat sound!
	someDog->makeSound();

	

	std::cout << std::endl;

	delete j;
	delete i;



	return 0;
}