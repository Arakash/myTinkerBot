
#pragma once

#include <list>

class servoConfig;
//loads and stores carConfig
class CarConfig{
    std::list<servoConfig> servoConfigs;

    public:
    void loadCarConfig(const char* path);


};

class servoConfig{
    int servoID;
    int servoNullPos;
};