#include<iostream>
#include<unistd.h>

#include<yaml-cpp/yaml.h>

using namespace std;

int main()
{
    string config_path = get_current_dir_name();
    config_path += "/config.yml";

    std::cout << "hello" << std::endl;

    YAML::Node config = YAML::LoadFile(config_path);

    std::cout << config["ISA"] << std::endl;
    std::cout << config["version"] << std::endl;
    std::cout << config["level"] << std::endl;
}
