#include <stdio.h>

// Define a structure for Location
struct Location {
    char city[50];
    char state[50];
    char country[50];
};

// Define a structure for Address
struct Address {
    char street[100];
    int zipCode;
    struct Location location;
};

// Define a structure for Person
struct Person {
    char name[50];
    struct Address address;
};

int main() {
    // Initialize a Person instance
    struct Person person = {
        "John Doe",                   // Name
        {                             // Address
            "123 Main Street",        // Street
            12345,                    // Zip Code
            {                         // Location
                "Springfield",        // City
                "Illinois",           // State
                "USA"                 // Country
            }
        }
    };

    // Print the details
    printf("Name: %s\n", person.name);
    printf("Street: %s\n", person.address.street);
    printf("Zip Code: %d\n", person.address.zipCode);
    printf("City: %s\n", person.address.location.city);
    printf("State: %s\n", person.address.location.state);
    printf("Country: %s\n", person.address.location.country);

    return 0;
}
