/*Задание 3 (необязательное)
Роботы приходят в очередь и называют(вводят с клавиатуры) свои порядковые номера 
(целые положительные). Комната, в которой роботы-андроиды занимают своё место, 
имеет ограниченный размер (который равен capacity вектора, в который вы их записываете). 
Когда комната заполняется, роботам приходится “переходить” в другую комнату, чуть больше 
(но вы этого не видите). Необходимо отследить, когда в комнате будет оставаться всего 
2 свободных места для роботов, и вывести сообщение об этом на экран.
Последний робот будет иметь номер -1.*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> room;
	int capacity;
    int number;

	std::cout << "Enter the capacity room: ";
	std::cin >> capacity;
	std::cout << '\n';

	while (true)
	{
		std::cout << "Enter your serial number: ";
		std::cin >> number;

		if (number == -1) break;
		
		room.push_back(number);

		if (room.size() >= capacity - 2) 
			std::cout << '\n' << "Only " << capacity - room.size() 
					<< " free spot(s) left in the room : " << '\n';
	}
	
	std::cout << "All robots in the room: " << '\n';
	for (int i = 0; i < room.size(); i++)
	{
		std::cout << room[i];
		if (i != room.size() - 1)
			std::cout << ", ";
	}
}
