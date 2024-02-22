#include "ATarget.hpp"
#include <iostream>
#include "ASpell.hpp"

 ATarget::ATarget( const std::string& type ) : _type(type)
 {

 }
    
ATarget::ATarget( const ATarget& copy )
{
    *this = copy;
}

ATarget& ATarget::operator=( const ATarget& src )
{
    _type = src._type;
    return *this;
}

ATarget::~ATarget()
{

}

const std::string& ATarget::getType( void ) const
{
    return _type;
}

void    ATarget::getHitBySpell(const ASpell& spell) const
{
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}