#include <iostream>
#include <string>
#include "files/game.h"
int main() {
	std::string username;
	int userChoice;
	std::cout << "Добро пожаловать в крестики-нолики ХО. Введите свое имя:" << std::endl;
	std::getline(std::cin, username);
	
	std::cout << "Отлично тебя тебя назвали! Против кого ты хочешь поиграть сегодня?\n1. Против бота\n2. Против другого игрока" << std::endl;
	std::cin >> userChoice;
	
	switch(userChoice) {
		case 1:
			vsBot();
			break;
		case 2:
			vsPlayer();
			break;
	}
	return 0;
}
