/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:39:24 by ghwa              #+#    #+#             */
/*   Updated: 2025/08/05 16:40:42 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
	std::cout << "Constructor called" << std::endl;
}

Harl::~Harl() {
	std::cout << "Destructor called" << std::endl;
}

void Harl::complain(std::string level) {
	int i = 0;
	std::string levelArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++) {
		if (levelArray[i] == level)
			break;
	}
	switch (i) {
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:
			error();
			break;
		default:
			std::cout << "[ UNKNOWN ] Invalid complaint level." << std::endl;
			break;
	}
}

void Harl::debug() {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my burger. I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money!" << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
