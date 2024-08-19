#include <iostream>
#include "Animals.hpp"

class A {
private:
    int variable;
public:
    A() { // констр. по умолчанию
        std::cout << "Конструктор A\n";
        variable = 0;
    }
    A(int var) { // параметрический коснтр
        std::cout << "Конструктор A\n";
        variable = var;
    }

    ~A() {
        std::cout<<"Деструктор A\n";
    }
    int getVar() { return variable;  } // геттер для поля variable
};

class B : public A {
private:
    int size;
public:
    B() { // констр. по умолчанию
        std::cout << "Конструктор B\n";
        size = 0;
    }
    B(int num1, int num2) : A(num1) { // вызывается конмтруктор А
        std::cout << "Конструктор B\n";
        size = num2;
    }
    ~B() {
        std::cout << "Деструктор B\n";
    }
    void print() {
        std::cout << "Variable = " << getVar() << std::endl;
        std::cout << "Size = " << size << std::endl;
    }
};



int main(){
    setlocale(LC_ALL, "ru");

   // Наследование
    /*
    B b1;
    B b2(10, 20);
    b1.print();
    b2.print();
*/


    Cat cat("Musya");
    Fish fish("Aqua");
    Parrot parrot("Kesha");


    cat.runTo("bathroom");
    fish.swimTo("Flo Rida");
    parrot.flyTo("kitchen");

    cat.makeSound();
    fish.makeSound();
    parrot.makeSound();

    return 0;
}