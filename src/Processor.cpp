#include "../include/Processor.hpp"
#include <iostream>


void TextProcessor::display_type() const  {   std::cout<<"Processor type is Text Processor"<<std::endl;       }


void NumericProcessor::display_type() const   {   std::cout<<"Processor type is Numeric Processor"<<std::endl;    }


void ImageProcessor::display_type() const   {   std::cout<<"Processor type is Image Processor"<<std::endl;      }


void AudioProcessor ::display_type() const   {   std::cout<<"Processor type is Audio Processor"<<std::endl;      }

