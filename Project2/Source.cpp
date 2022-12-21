#include <iostream>
#include "Point.h"
#include "Tiger.h"

//—хема класса:
//tenplate <class T>
//class Name
//public:
//constructor (может быть в public и private)
//destructor
//функции, переменные
//private:
//constructor (может быть в public и private)
//Name* this;
//функции, переменные
//protected:
//функции, переменные

//”казатель this, ключевое слово explicit, наследование
 

int main() {
	char str[] = "abc";
	/*Point my_point(5, 10, "abc");

	std::cout << my_point.getX() << "\n";

	//Point& reference_to_my_point = my_point.move(3, 9);
	my_point.move(3, 9).move(2, 10).move(1, 11);


	std::cout << my_point.getX() << "\n";*/

	Tiger t(3, "yellow");
	//std::cout << t << "\n";
	std::cout << t.fight() << "\n"; //мы получили доступ к публичной ф-ции, котора€ обратилась к приватной ф-ции



}