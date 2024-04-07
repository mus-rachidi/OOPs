#include <iostream>
#include <string>

using namespace std;

// Declaration of a class
class Car {
    // Access specifier
    private:
        // Data members (attributes)
        string brand;
        string model;
        int year;
        float price;

    // Access specifier
    public:
        // Constructor with parameters
        Car(string brandName, string modelName, int manufactureYear, float carPrice) {
            brand = brandName;
            model = modelName;
            year = manufactureYear;
            price = carPrice;
        }

        // Member function to set the price
        void setPrice(float carPrice) {
            price = carPrice;
        }

        // Member function to display information
        void displayInfo() {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
            cout << "Price: $" << price << endl;
        }
};

int main() {
    // Creating an object of class Car using constructor
    Car myCar("Toyota", "Camry", 2022, 25000.50);

    // Displaying the information using member function
    myCar.displayInfo();

    // Setting new price using member function
    myCar.setPrice(26000.75);

    // Displaying updated information
    cout << "Updated information after price change:" << endl;
    myCar.displayInfo();

    return 0;
}