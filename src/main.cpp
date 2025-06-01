#include <iostream>
#include <stdexcept>

#include "../include/Configuration.hpp"
#include "../include/ProcessorFactory.hpp"




int main()
{
    try
    {
        Configuration C("../config/settings.txt");

        auto myProcessor = ProcessorFactory::create(C.get_type());

        myProcessor->display_type();
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Code failed due to : "<<e.what() << '\n';
    }
}