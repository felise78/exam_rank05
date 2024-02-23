#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <map>

#include "ASpell.hpp"

class SpellBook {

    private:
    SpellBook( const SpellBook& copy );
    SpellBook& operator=( const SpellBook& src);
    std::map<std::string, ASpell*> _spells;
    public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell* spell); 
    void forgetSpell(std::string const & spell );
    ASpell* createSpell(std::string const & spell );
};

#endif