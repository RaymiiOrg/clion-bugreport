//
// Created by remy on 26-11-20.
//

#include "ExampleOne.h"

std::string ExampleOne::getDataByConcept(std::string concept) {
    if (concepts.find(concept) == concepts.end())
        throw std::runtime_error("concept not found");

    return concepts.at(concept);
}

void ExampleOne::setData(std::string concept, std::string data) {
    if (concepts.find(concept) == concepts.end())
        concepts.insert({concept, data});
    else
        concepts.at(concept) = data;
}

int ExampleOne::getInt2() {
    return 0;
}
void ExampleOne::setInt2(int int2) {
    _int2 = int2;
}
