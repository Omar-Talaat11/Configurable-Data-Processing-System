#include "../include/ProcessorFactory.hpp"
#include "../include/Processor.hpp"

#include <stdexcept>
#include <memory>

std::unique_ptr<Processor> ProcessorFactory::create(const std::string& type) 
{
    if      (type.compare("Image") == 0  )  return std::make_unique<ImageProcessor>();
    else if (type.compare("Text") == 0   )  return std::make_unique<TextProcessor>();
    else if (type.compare("Numeric") == 0)  return std::make_unique<NumericProcessor>();
    else if (type.compare("Audio") == 0  )  return std::make_unique<AudioProcessor>();
    else throw std::runtime_error("Unknown processor type: " + type);
}
