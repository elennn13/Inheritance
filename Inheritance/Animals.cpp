#include "Animals.hpp"
#include<iostream>
Animal::Animal() : weight(0.) {}

Animal::Animal(std::string name, double weight){
	this-> name = name;
	this->weight = weight;
}

void Animal::makeSound() {}



Cat::Cat(std::string name, double weight) 
	: Animal(name, weight){}


void Cat::runTo(std::string place){
	std::cout << name << " runs to " << place << std::endl;
}

void Cat::makeSound() {
	std::cout << "Meow\n";
}



Fish::Fish(std::string name, double weight)
	: Animal(name, weight){}

void Fish::swimTo(std::string place){
	std::cout << name << " swims to " << place << std::endl;
}

void Fish::makeSound() {
	std::cout << "Blob\n";
}



Parrot::Parrot(std::string name, double weight)
	: Animal(name, weight){}

void Parrot::flyTo(std::string place){
	std::cout << name << " flyies to " << place << std::endl;
}

void Parrot::makeSound() {
	std::cout << "i love c++\n";
}
