/*
** EPITECH PROJECT, 2018
** cpp_d07m_2018
** File description:
** KoalaBot.hpp
*/

#include "KoalaBot.hpp"
#include <string>

KoalaBot::KoalaBot(std::string serial = "Bob-01")
{
    this->_serial = serial;
    this->_arms = new Arms();
    this->_legs = new Legs();
    this->_head = new Head();
}

void KoalaBot::setParts(Arms const *arms)
{
    if (this->_arms)
    delete this->_arms;
    this->_arms = new Arms(arms->serial(), arms->isFunctionnal());
}

void KoalaBot::setParts(Legs const *legs)
{
    if (this->_legs)
    delete this->_legs;
    this->_legs = new Legs(legs->serial(), legs->isFunctionnal());
}

void KoalaBot::setParts(Head const *head)
{
    if (this->_head)
    delete this->_head;
    this->_head = new Head(head->serial(), head->isFunctionnal());
}

void KoalaBot::swapParts(Arms *arms)
{
    Arms *tmp = arms;
    arms = this->_arms;
    this->_arms = tmp;
}

void KoalaBot::swapParts(Legs *arms)
{
    Legs *tmp = arms;
    arms = this->_legs;
    this->_legs = tmp;
}

void KoalaBot::swapParts(Head *arms)
{
    Head *tmp = arms;
    arms = this->_head;
    this->_head = tmp;
}

bool KoalaBot::status()
{
    if (this->_arms->isFunctionnal() && this->_legs->isFunctionnal() && this->_head->isFunctionnal())
        return true;
    return false; 
}

void KoalaBot::informations(void)
{
    std::cout << "[KoalaBot] " << this->_serial << std::endl;
    _arms->informations();
    _legs->informations();
    _head->informations();
}
