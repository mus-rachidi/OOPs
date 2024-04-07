# Constructors

## Introuction
- In C++, constructors are special member functions that are automatically called when an object is created. 
- They initialize the object's data members. Here's a brief example:
```cpp

#include <iostream>

// Class with constructor
class MyClassWithConstructor {
public:
    // Constructor
    MyClassWithConstructor(int value) {
        std::cout << "Constructor called with value: " << value << std::endl;
    }
};

int main() {
    // Creating an object of MyClassWithConstructor
    MyClassWithConstructor obj(10); // Constructor called with value: 10
    return 0;
}
```

In the above example, `MyClassWithConstructor` has a constructor that takes an integer argument. When an object of this class is created (`MyClassWithConstructor obj(10);`), the constructor is automatically called with the value `10`.

Now, let's see an example without a constructor:

```cpp
#include <iostream>

// Class without constructor
class MyClassWithoutConstructor {
public:
    // Data member
    int value;
};

int main() {
    // Creating an object of MyClassWithoutConstructor
    MyClassWithoutConstructor obj;
    obj.value = 10; // Initializing data member directly
    std::cout << "Value: " << obj.value << std::endl; // Output: Value: 10
    return 0;
}
```

In this example, `MyClassWithoutConstructor` does not have a constructor. Instead, the data member `value` is initialized directly in the `main()` function after creating an object of the class.

## Types of construcors 

1. **Default Constructor**:
   A default constructor doesn't take any parameters. It initializes the member variables with default values, which could be zero or any other predefined value.

```cpp
#include <iostream>

class DefaultConstructorExample {
public:
    int value; // Member variable

    // Default constructor
    DefaultConstructorExample() {
        value = 0; // Initializing value to 0
    }
};

int main() {
    // Creating an object of DefaultConstructorExample
    DefaultConstructorExample obj;
    
    std::cout << "Value initialized by default constructor: " << obj.value << std::endl; // Output: Value initialized by default constructor: 0
    
    return 0;
}
```

In this example, `DefaultConstructorExample` has a default constructor that initializes the `value` member variable to 0 by default.

2. **Parameterized Constructor**:
   A parameterized constructor takes parameters that are used to initialize member variables with the provided values.

```cpp
#include <iostream>

class ParameterizedConstructorExample {
public:
    int value; // Member variable

    // Parameterized constructor
    ParameterizedConstructorExample(int val) {
        value = val; // Initializing value with the provided parameter
    }
};

int main() {
    // Creating an object of ParameterizedConstructorExample with value 10
    ParameterizedConstructorExample obj(10);
    
    std::cout << "Value initialized by parameterized constructor: " << obj.value << std::endl; // Output: Value initialized by parameterized constructor: 10
    
    return 0;
}
```

Here, `ParameterizedConstructorExample` has a parameterized constructor that takes an integer parameter to initialize the `value` member variable.

3. **Copy Constructor**:
   A copy constructor creates a new object as a copy of an existing object of the same class.

```cpp
#include <iostream>

class CopyConstructorExample {
public:
    int value; // Member variable

    // Copy constructor
    CopyConstructorExample(const CopyConstructorExample& other) {
        value = other.value; // Initializing value with the value of the existing object
    }
};

int main() {
    // Creating an object of CopyConstructorExample
    CopyConstructorExample obj1;
    obj1.value = 5;

    // Creating another object by copying obj1
    CopyConstructorExample obj2 = obj1;
    
    std::cout << "Value initialized by copy constructor: " << obj2.value << std::endl; // Output: Value initialized by copy constructor: 5
    
    return 0;
}
```

In this example, `CopyConstructorExample` has a copy constructor that initializes the `value` member variable of the new object with the value of the existing object.