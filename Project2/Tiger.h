#pragma once
#include <string>
#include "Tiger.h"
#include <iostream>

//метод - функци€-член класса
//поле - переменна€-член класса
//Ќаследование
//ƒекомпозици€
//существует множественное наследование - не желательно использовать в —++, в —# запрещено

class Animal
{
public:
	Animal() {
		std::cout << "Animal() constructor\n";
	}
	~Animal() {
		std::cout << "~Animal() destructor\n";
	}

	int fight() {
		return 10;
	}
	int run() {
		return 5;
	}
	void eat() {
		std::cout << "Animal have eaten\n";
	}

private:
	int strength = 10;
	int speed = 5;
};


// Tiger наследуетс€ от Animal, в Tiger есть все ф-ции Animal
class Tiger : public Animal //класс Tiger  наследуетс€ публично от Animal, т.е. мы дали доступ в классе Tiger к публичным данным Animal
	//и они там тоже стали публичные
{
public:
	Tiger(int height, const std::string& color) {
		std::cout << "Tiger() constructor\n";
	this->_height = height;
	this->_color = color;

}
	~Tiger() {
		std::cout << "~Tiger() destructor\n";
	}
	int fight() {
		return _strength;
	}


void setHeight(int height) {

	_height = height;

}
int getHeight() const { //константна€ ф-ци€ (внутри них нельз€ мен€ть значени€ полей класса)
	//_height = 5; - ошибка компил€ции
	//setHeight(10); - не константна€ ф-ци€ (внутри константной ф-ции нельз€ вызывать не константную ф-цию)

	return _height;
}

const std::string getColor() {
	return _color;
}

friend std::ostream& operator<<(std::ostream& os, Tiger& t) {
	os << t.getHeight() <<" " << t.getColor();
	return os;
}


private:
	int _height;
	std::string _color;
	int _strength = 50;
};

