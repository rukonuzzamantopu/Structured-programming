#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define structures
typedef struct {
    int id;
    char name[100];
    int age;
    char gender[10];
    char disease[100];
} Patient;

typedef struct {
    int id;
    char name[100];
    int quantity;
} InventoryItem;

typedef struct {
    int id;
    int patientId;
    char date[20];
    char time[10];
} Appointment;

// Function prototypes
void addPatient();
void viewPatients();
void scheduleAppointment();
void viewAppointments();
void manageInventory();
void viewInventory();
void menu();

// Global variables
Patient patients[100];
int patientCount = 0;

Appointment appointments[100];
int appointmentCount = 0;

InventoryItem inventory[100];
int inventoryCount = 0;

int main() {
    menu();
    return 0;
}

void menu() {
    int choice;
    do {
        printf("\nHospital Management System\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Schedule Appointment\n");
        printf("4. View Appointments\n");
        printf("5. Manage Inventory\n");
        printf("6. View Inventory\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                viewPatients();
                break;
            case 3:
                scheduleAppointment();
                break;
            case 4:
                viewAppointments();
                break;
            case 5:
                manageInventory();
                break;
            case 6:
                viewInventory();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
}

void addPatient() {
    if (patientCount >= 100) {
        printf("Patient limit reached.\n");
        return;
    }

    Patient newPatient;
    newPatient.id = patientCount + 1;

    printf("Enter patient name: ");
    scanf("%s", newPatient.name);
    printf("Enter patient age: ");
    scanf("%d", &newPatient.age);
    printf("Enter patient gender: ");
    scanf("%s", newPatient.gender);
    printf("Enter patient disease: ");
    scanf("%s", newPatient.disease);

    patients[patientCount++] = newPatient;

    printf("Patient added successfully!\n");
}

void viewPatients() {
    if (patientCount == 0) {
        printf("No patients to display.\n");
        return;
    }

    printf("\nPatient List:\n");
    for (int i = 0; i < patientCount; i++) {
        printf("ID: %d, Name: %s, Age: %d, Gender: %s, Disease: %s\n",
            patients[i].id, patients[i].name, patients[i].age, patients[i].gender, patients[i].disease);
    }
}

void scheduleAppointment() {
    if (appointmentCount >= 100) {
        printf("Appointment limit reached.\n");
        return;
    }

    Appointment newAppointment;
    newAppointment.id = appointmentCount + 1;

    printf("Enter patient ID: ");
    scanf("%d", &newAppointment.patientId);
    printf("Enter appointment date (YYYY-MM-DD): ");
    scanf("%s", newAppointment.date);
    printf("Enter appointment time (HH:MM): ");
    scanf("%s", newAppointment.time);

    appointments[appointmentCount++] = newAppointment;

    printf("Appointment scheduled successfully!\n");
}

void viewAppointments() {
    if (appointmentCount == 0) {
        printf("No appointments to display.\n");
        return;
    }

    printf("\nAppointment List:\n");
    for (int i = 0; i < appointmentCount; i++) {
        printf("ID: %d, Patient ID: %d, Date: %s, Time: %s\n",
            appointments[i].id, appointments[i].patientId, appointments[i].date, appointments[i].time);
    }
}

void manageInventory() {
    int choice;
    printf("1. Add Inventory Item\n");
    printf("2. Update Inventory Item\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (inventoryCount >= 100) {
            printf("Inventory limit reached.\n");
            return;
        }

        InventoryItem newItem;
        newItem.id = inventoryCount + 1;

        printf("Enter item name: ");
        scanf("%s", newItem.name);
        printf("Enter item quantity: ");
        scanf("%d", &newItem.quantity);

        inventory[inventoryCount++] = newItem;

        printf("Inventory item added successfully!\n");
    } else if (choice == 2) {
        int id, newQuantity;
        printf("Enter item ID to update: ");
        scanf("%d", &id);

        for (int i = 0; i < inventoryCount; i++) {
            if (inventory[i].id == id) {
                printf("Enter new quantity: ");
                scanf("%d", &newQuantity);
                inventory[i].quantity = newQuantity;
                printf("Inventory item updated successfully!\n");
                return;
            }
        }

        printf("Item ID not found.\n");
    } else {
        printf("Invalid choice! Please try again.\n");
    }
}

void viewInventory() {
    if (inventoryCount == 0) {
        printf("No inventory items to display.\n");
        return;
    }

    printf("\nInventory List:\n");
    for (int i = 0; i < inventoryCount; i++) {
        printf("ID: %d, Name: %s, Quantity: %d\n",
            inventory[i].id, inventory[i].name, inventory[i].quantity);
    }
}
