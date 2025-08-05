/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:39:18 by ghwa              #+#    #+#             */
/*   Updated: 2025/08/05 15:34:44 by ghwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <stdio.h>

int main(int argc, char **argv) {
	Harl harl;
	if (argc == 2) {
		harl.complain(argv[1]);
	}
	return (0);
}
