/*
** EPITECH PROJECT, 2018
** cpp_d07m_2018
** File description:
** Koala.hpp
*/

#include "KoalaBot.hpp"


void Arms::informations(void) const
{
    std::cout << "\t[Parts] Arms " << this->_serial << " status : ";
    if (this->_functionnal)
        std::cout << "OK\n";
    else
        std::cout << "KO\n";
}

void Legs::informations(void) const
{
    std::cout << "\t[Parts] Legs " << this->_serial << " status : ";
    if (this->_functionnal)
        std::cout << "OK\n";
    else
        std::cout << "KO\n";
}

void Head::informations() const
{
    std::cout << "\t[Parts] Head " << this->_serial << " status : ";
    if (this->_functionnal)
        std::cout << "OK\n";
    else
        std::cout << "KO\n";
}