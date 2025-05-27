#ifndef RESISTORS_LIB_H
#define RESISTORS_LIB_H

#include <vector>
#include <iostream>

class Resistor {
    private:
    double value;

    public:
    void setResistance(double resistance)
    {
        if (resistance >= 0)
        {
            value = resistance;
        }
    }

    double getResistance() const
    {
        return value;
    }

    Resistor(double value) : value(value)
    {

    }

    ~Resistor()
    {

    }
};

class Circuit {
    protected:
    std::vector<Resistor> circuit;

    public:
    void addResistor(Resistor resistor)
    {
        circuit.push_back(resistor);
    }

    void removeResistor(Resistor resistor)
    {
        for (auto it = circuit.begin(); it != circuit.end(); ++it)
        {
            if  (it->getResistance() == resistor.getResistance())
            {
                circuit.erase(it);
                break;
            }
        }
    }

    void removeAllResistors()
    {
        circuit.clear();
    }

    double calculateTotalResistance() const
    {
        double totalResistance = 0;
        for (auto it = circuit.begin(); it != circuit.end(); ++it)
        {
            totalResistance += it->getResistance();
        }
        return totalResistance;
    }

    void displayTotalResistance() const
    {
        std::cout << "Total series resistance: " << calculateTotalResistance() << " Ohms" << std::endl;
    }

    void displayResistors() const
    {
        std::cout << "Resistors in the circuit:" << std::endl;
        for (auto it = circuit.begin(); it != circuit.end(); ++it)
        {
            std::cout << "Resistance: " << it->getResistance() << " Ohms" << std::endl;
        }
    }
};

class ParallelCircuit : public Circuit
{
    public:
    void removeAllResistors()
    {
        circuit.clear();
    }

    double calculateTotalResistance() const
    {
        double totalResistance = 0;
        for (auto it = circuit.begin(); it != circuit.end(); ++it)
        {
            totalResistance += 1 / it->getResistance();
        }
        return 1 / totalResistance;
    }

    void displayTotalResistance() const
    {
        std::cout << "Total parallel resistance: " << calculateTotalResistance() << " Ohms" << std::endl;
    }
};

#endif
