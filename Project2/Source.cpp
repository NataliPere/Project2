#include <iostream>
#include "Point.h"
#include "Tiger.h"

//����� ������:
//tenplate <class T>
//class Name
//public:
//constructor (����� ���� � public � private)
//destructor
//�������, ����������
//private:
//constructor (����� ���� � public � private)
//Name* this;
//�������, ����������
//protected:
//�������, ����������

//��������� this, �������� ����� explicit, ������������
 

int main() {
	char str[] = "abc";
	/*Point my_point(5, 10, "abc");

	std::cout << my_point.getX() << "\n";

	//Point& reference_to_my_point = my_point.move(3, 9);
	my_point.move(3, 9).move(2, 10).move(1, 11);


	std::cout << my_point.getX() << "\n";*/

	Tiger t(3, "yellow");
	//std::cout << t << "\n";
	std::cout << t.fight() << "\n"; //�� �������� ������ � ��������� �-���, ������� ���������� � ��������� �-���



}