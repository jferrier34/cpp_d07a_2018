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
Skat(const  std:: string &name , int  stimPaks);
~Skat();
int stimPaks ();
const  std:: string &name();
void  shareStimPaks(int  number , [...]  stock);
void  addStimPaks(unsigned  int  number);
void  useStimPaks ();
void  status ();

private:
int stock;
std::string name;
};

#endif