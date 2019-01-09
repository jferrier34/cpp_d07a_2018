#ifndef PARTS_HPP_
#define PARTS_HPP_


#include <string>
#include <iostream>

class Arms {
    public:
        Arms(std::string serial, bool functionnal) : _serial("A-01"), _functionnal(true) {}
        Arms() : _serial("A-01"), _functionnal(true) {}
        ~Arms() = default;
        bool isFunctionnal() const { return (this->_functionnal); }
        std::string serial() const { return (this->_serial); }
        void informations() const;

    private:
        std::string _serial;
        bool _functionnal;
};

class Legs {
    public:
        Legs(std::string serial, bool functionnal) : _serial("L-01"), _functionnal(true) {}
        Legs() : _serial("L-01"), _functionnal(true) {}
        ~Legs() = default;
        bool isFunctionnal() const { return (this->_functionnal); }
        std::string serial() const { return (this->_serial); }
        void informations() const ;

    private:
        std::string _serial;
        bool _functionnal;
};

class Head {
    public:
        Head(std::string serial, bool functionnal) : _serial("L-01"), _functionnal(true) {}
        Head() : _serial("H-01"), _functionnal(true) {}
        ~Head() = default;
        bool isFunctionnal() const { return (this->_functionnal); }
        std::string serial() const { return (this->_serial); }
        void informations() const ;
    private:
        std::string _serial;
        bool _functionnal;
};

#endif
