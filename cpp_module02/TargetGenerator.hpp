#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <string>
#include <map>

class TargetGenerator {

private:
TargetGenerator( const TargetGenerator& copy );
TargetGenerator& operator=( const TargetGenerator& src );
std::map<std::string, ATarget*> _targets;

public:
TargetGenerator();
~TargetGenerator();
void learnTargetType(ATarget* target);
void forgetTargetType(std::string const & target);
ATarget* createTarget(std::string const & target);

};

#endif