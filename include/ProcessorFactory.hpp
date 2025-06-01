#ifndef PROCESSORFACTORY
#define PROCESSORFACTORY

#include "Processor.hpp"
#include <memory>

class ProcessorFactory 
{
public:
    static std::unique_ptr<Processor> create(const std::string& type);
};

#endif