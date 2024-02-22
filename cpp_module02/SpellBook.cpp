#include "SpellBook.hpp"

SpellBook::SpellBook( const SpellBook& copy )
{
    (void) copy;
}

SpellBook& SpellBook::operator=( const SpellBook& src)
{
    (void)src;
    return *this;
}


SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
        _spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const & spell )
{
    if (_spells.find(spell) != _spells.end())
        _spells.erase(spell);
}
ASpell* SpellBook::createSpell(std::string const & spell)
{
    ASpell* tmp = NULL;

    if (_spells.find(spell) != _spells.end())
        tmp = _spells[spell];
    return tmp;
}