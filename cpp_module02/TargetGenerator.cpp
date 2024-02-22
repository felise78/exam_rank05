#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator( const TargetGenerator& copy ){
    (void) copy;
}
TargetGenerator& TargetGenerator::operator=( const TargetGenerator& src ){
    (void) src;
    return *this;
}

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}

void TargetGenerator::learnTargetType(ATarget* target)
{
    if (target)
        _targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const & target)
{
    if (_targets.find(target) != _targets.end())
        _targets.erase(target);
}

ATarget* TargetGenerator::createTarget(std::string const & target)
{
    ATarget *tmp = NULL;
    if (_targets.find(target) != _targets.end())
        tmp = _targets[target];
    return tmp;
}