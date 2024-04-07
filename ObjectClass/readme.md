
# Car Information Display

This program demonstrates the use of classes and objects in C++ to manage car information.

## Explanation

### Class Definition
- We define a class named `Car` which encapsulates information about a car.
- Inside the class:
  - We have private data members (`brand`, `model`, `year`, `price`) to store car details.
  - We have public member functions (`Car()`, `setPrice()`, `displayInfo()`) to interact with the data.

### Constructor
- The `Car` class has a constructor that initializes the car's data members when an object is created.

### Member Functions
1. `setPrice(float carPrice)`: Sets the price of the car.
2. `displayInfo()`: Displays all information about the car.

### Main Function
- In the `main()` function:
  - We create an object `myCar` of class `Car` with initial details.
  - We display the initial information using `displayInfo()`.
  - We update the price of the car using `setPrice()` and display the updated information.

## Sample Output

```
Brand: Toyota
Model: Camry
Year: 2022
Price: $25000.5
Updated information after price change:
Brand: Toyota
Model: Camry
Year: 2022
Price: $26000.8
```
This program is a basic example of using classes and objects in C++ to manage data related to cars.