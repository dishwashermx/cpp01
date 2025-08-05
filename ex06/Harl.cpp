/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:39:24 by ghwa              #+#    #+#             */
/*   Updated: 2025/08/05 16:37:07 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

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

void Harl::complain(std::string level) {
	typedef void (Harl::*FuncPtr)();

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	FuncPtr functions[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int i = 0;
	while (i < 4 && levels[i] != level)
		i++;

	if (i == 4) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}

	for (; i < 4; i++) {
		(this->*functions[i])();
	}
}
