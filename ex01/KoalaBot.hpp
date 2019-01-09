/*
** EPITECH PROJECT, 2018
** cpp_d07m_2018
** File description:
** KoalaBot.hpp
*/

#ifndef KOALABOT_HPP_
#define KOALABOT_HPP_


#include <string>
#include <iostream>
#include "Parts.hpp"

class KoalaBot {
	public:
		KoalaBot(std::string serial);
		~KoalaBot() = default;
		bool status();
		void setParts(const Arms *na);
		void setParts(const Head *nh);
		void setParts(const Legs *nl);
		void swapParts(Arms *na);
		void swapParts(Head *nh);
		void swapParts(Legs *nl);
		void informations();
	private:
		Arms *_arms;
		Legs *_legs;
		Head *_head;
		std::string _serial;
};

#endif