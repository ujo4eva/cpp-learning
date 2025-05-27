#include <iostream>

enum driveType {
    Electric,
    ICE,
    Hydrogen,
    Hybrid
};

enum buildType {
    Sedan,
    Hatchback,
    SUV,
    Pickup,
    Minivan
};

std::string driveTypeToString(driveType d) {
    switch (d) {
        case Electric: return "Electric";
        case ICE: return "ICE";
        case Hydrogen: return "Hydrogen";
        case Hybrid: return "Hybrid";
        default: return "Unknown";
    }
}

std::string buildTypeToString(buildType b) {
    switch (b) {
        case Sedan: return "Sedan";
        case Hatchback: return "Hatchback";
        case SUV: return "SUV";
        case Pickup: return "Pickup";
        case Minivan: return "Minivan";
        default: return "Unknown";
    }
}

class Car{
protected:
    /* data */
    std::string brand;
    std::string model;
    int year;
    buildType build;
    driveType drive;

public:
    //parameterized constructor
    Car(std::string br, std::string m, int y, buildType b, driveType d) : brand(br), model(m), year(y), build(b), drive(d) {
        if (br.empty() || m.empty()) {
            throw std::invalid_argument("Brand and Model cannot be empty");
        }
    }

    //default constructor
    Car() : brand("Unknown"), model("Unknown"), year(0), build(Sedan), drive(ICE) {}
    
    //virtual destructor
    virtual ~Car() = default;

    void displayInfo() const {
        std::cout << year << " " << brand << " " << model << std::endl;
        std::cout << driveTypeToString(drive) << " " << buildTypeToString(build) << std::endl;
    }
};

int main() {
    Car cyberbeast("Tesla", "Cyberbeast", 2024, Pickup, Electric);

    cyberbeast.displayInfo();
}