#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock( const std::string& name, const std::string& title ) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock( const Warlock& copy )
{
    *this = copy;
}

Warlock& Warlock::operator=( const Warlock& src )
{
    _name = src._name;
    _title = src._title;
    return *this;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName( void ) const
{
    return _name;
}

const std::string& Warlock::getTitle( void ) const
{
    return _title;
}

void    Warlock::setTitle( const std::string& title )
{
    _title = title;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " <<_title << "!" << std::endl;
}