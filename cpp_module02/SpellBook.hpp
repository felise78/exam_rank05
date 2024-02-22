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
    void learnSpell(ASpell* spell); //that COPIES a spell in the book
    void forgetSpell(std::string const & spell ); //that deletes a spell from the book, except
  //if it isn't there
    ASpell* createSpell(std::string const & spell ); //, that receives a string corresponding to
  //the name of a spell, creates it, and returns it.
};

#endif