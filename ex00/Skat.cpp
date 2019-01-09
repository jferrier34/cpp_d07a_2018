/*
** EPITECH PROJECT, 2018
** cpp_d07m_2018
** File description:
** skat.cpp
*/

#include "Skat.hpp"

Skat::Skat(std::string const &name, int stimPaks) : _name(name)
{
    if (_name == "") {
        _name = "bob";
    }
    this->_stock = stimPaks;
}

Skat::Skat()
{
    this->_name = "bob";
    this->_stock = 15;
}


int &Skat::stimPaks(void)
{
    return (this->_stock);
}

Skat::~Skat() {
}


const std::string &Skat::name(void)
{
    return (this->_name);
}

void Skat::shareStimPaks(int number, int &stock)
{
    if (number > stock){
        std::cout << "Don't be greedy" << std::endl;
        return ;
    }
    else
        std::cout << "Keep the change." << std::endl;
    this->_stock -= number;
    stock += number;
}

void Skat::addStimPaks(unsigned int number)
{
    if (!number)
        std::cout  << "Hey boya, did you forget something?" << std::endl;;
    this->_stock += number;
}

void Skat::status(void)
{
    std::cout << "Soldier " << this->_name << " reporting " << this->_stock << " stimpaks remaining sir!" << std::endl;
}

void Skat::useStimPaks(void)
{
    if (this->_stock)
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    else
        std::cout << "Mediiiiiic" << std::endl;
}