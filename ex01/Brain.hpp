#pragma once 
#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(std::string _name);
        Brain(const Brain &obj);
        Brain& operator=(const Brain &obj);
        ~Brain();
    private:
        std::string _ideas[100];
};