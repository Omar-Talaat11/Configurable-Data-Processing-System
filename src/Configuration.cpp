#include "../include/Configuration.hpp"

#include <fstream>

Configuration::Configuration(const std::string& fname)
{
    std::ifstream infile(fname);
    std::string line;
    if(infile.is_open())
    {
        while(std::getline(infile,line))
        {
            if(line[0]=='#') continue;
            
            auto i = line.find('=');
            if( i != std::string::npos )
            {
                std::string option = line.substr(0,i);
                std::string value = line.substr(i+1);
                size_t start = value.find_first_not_of(" \t\r\n");
                size_t end = value.find_last_not_of(" \t\r\n");
                value = value.substr(start, end-start+1);
                options[option] = value;
            }
            
        }
        infile.close();
    }
    else    { throw std::runtime_error("File failed to open!"); }
}

const std::string& Configuration::get_type()
{
    if(options.find("Processor.Options.Type") == options.end() ) throw std::runtime_error("Processor type is not known");
    return options["Processor.Options.Type"];
}

