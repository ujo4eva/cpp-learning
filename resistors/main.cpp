#include "lib.h"

int main()
{
    Resistor r1 {1000};
    Resistor r2 {2000};

    Circuit c1;

    c1.addResistor(r1);
    c1.addResistor(r2);

    c1.displayResistors();

    c1.displayTotalResistance();

    ParallelCircuit pc1;
    pc1.addResistor(r1);
    pc1.addResistor(r2);

    pc1.displayResistors();

    pc1.displayTotalResistance();

    return 0;
}
