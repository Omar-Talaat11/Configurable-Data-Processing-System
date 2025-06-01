#ifndef CONFIG
#define CONFIG

#include <map>
#include <string>

class Configuration
{
    private:
    std::map<std::string,std::string> options;

    public:
    Configuration(const std::string& fname);

    const std::string& get_type();
};

#endif