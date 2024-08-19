#pragma once
#include<string>

class Animal { // класс животные
protected:
	std::string name; // имя
	double weight; // вес
public:
	Animal(); // констр по умолчанияю
	Animal(std::string name, double weight = 0.); // парметрический констр
	void makeSound();
};



class Cat : public Animal {
public:
	Cat() = default; // констр по умолчанияю 
	Cat(std::string name, double weight = 0.); // парметрический констр
	void runTo(std::string place); // кошка может прибежать
	void makeSound();
};


class Fish : public Animal {
public:
	Fish() = default; // констр по умолчанияю
	Fish(std::string name, double weight = 0.); // парметрический констр
	void swimTo(std::string place); // рыба может приплыть
	void makeSound();
};


class Parrot : public Animal {
public:
	Parrot() = default; // констр по умолчанияю
	Parrot(std::string name, double weight = 0.); // парметрический констр
	void flyTo(std::string place); // птица может прилететь
	void makeSound();
};