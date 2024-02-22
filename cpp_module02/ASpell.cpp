#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell( const std::string& name, const std::string effects ) : _name(name), _effects(effects)
{

}

ASpell::ASpell( const ASpell& copy )
{
    *this = copy;
}

ASpell& ASpell::operator=( const ASpell& src )
{
    _name = src._name;
    _effects = src._effects;
    return *this;
}

ASpell::~ASpell()
{
    
}

const std::string& ASpell::getName( void ) const 
{
    return _name;
}

const std::string& ASpell::getEffects( void ) const
{
    return _effects;
}

void ASpell::launch(const ATarget& target)
{
    target.getHitBySpell(*this);
}