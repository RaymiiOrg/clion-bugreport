//
// Created by remy on 26-11-20.
//

#ifndef UNTITLED2_EXAMPLEONE_H
#define UNTITLED2_EXAMPLEONE_H
#include <string>
#include <map>

class ExampleOne {
private:
    std::map<std::string,std::string> concepts;
    int _int2;

public:
    std::string getDataByConcept(std::string concept);
    void setData(std::string concept, std::string data);
    int getInt2();
    void setInt2(int int2);
};


#endif//UNTITLED2_EXAMPLEONE_H
