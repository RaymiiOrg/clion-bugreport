#include <iostream>
#include "ExampleOne.h"

int main() {
    auto ex = ExampleOne();
    ex.setData("concept1", "data1");
    auto output = ex.getDataByConcept("concept1");
    std::cout << output << std::endl;
    return 0;
}
