/*
** EPITECH PROJECT, 2018
** cpp_d07m_2018
** File description:
** skat.hpp
*/

#ifndef SKAT_HPP_
#define SKAT_HPP_
#include <string>
#include <iostream>

class  Skat
{
public:

Skat(const std:: string &name, int stimPaks);
Skat();
~Skat();
int &stimPaks ();
const  std:: string &name();
void  shareStimPaks(int  number , int &stock);
void  addStimPaks(unsigned  int  number);
void  useStimPaks ();
void  status ();

private:
int _stock;
std::string _name;
};


#endif