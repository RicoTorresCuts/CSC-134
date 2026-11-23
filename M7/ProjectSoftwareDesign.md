# SwaVe Hair Couture Lounge
## Preliminary Software Design Document

### 1. System Design Overview

The application will use a modular design consisting of multiple user-defined functions and C++ structures.

The existing room navigation system will be retained and integrated with the new salon management features.

The program will use structures to group related information into logical data types rather than relying exclusively on separate variables and parallel arrays.

### 2. Data Structure Design

The following structures are proposed:

**Customer Structure**

Stores customer information.

- Customer name
- Customer identification number
- Loyalty points

**Service Structure**

Stores available salon services.

- Service name
- Service price
- Estimated service duration

**Stylist Structure**

Stores stylist information.

- Stylist name
- Area of specialization

**Appointment Structure**

Uses nested structures to organize appointment information.

- Customer information
- Selected service information
- Assigned stylist information

**RoomInfo Structure**

Stores salon room information.

- Room name
- Room description
- Directional connections

### 3. Arrays of Structures

The program will use arrays of structures to organize multiple records.

Proposed arrays include:

- Customer records
- Available salon services
- Available stylists
- Salon room information

These arrays will allow the program to access and manage related information through individual structure variables and array indexes.

### 4. Proposed Function Design

The application will be divided into functions to improve organization and simplify program maintenance.

| Function | Purpose |
|---|---|
| displayWelcome() | Displays the welcome screen |
| registerCustomer() | Registers a customer |
| displayServices() | Displays available services |
| selectService() | Processes service selection |
| selectStylist() | Processes stylist selection |
| manageAppointment() | Organizes appointment information |
| navigateSalon() | Controls room navigation |
| calculateTotal() | Calculates service costs |
| processCheckout() | Processes the simulated transaction |
| displayReceipt() | Displays the final receipt |

Structures will be passed to appropriate functions to allow information to be accessed and updated.

### 5. Program Flow Design

The proposed application will follow this general sequence:

1. Start the program.
2. Display the salon welcome screen.
3. Register the customer.
4. Display available salon services.
5. Allow the customer to select a service.
6. Display available stylists.
7. Assign a stylist.
8. Organize the appointment information.
9. Allow the customer to explore the salon.
10. Calculate the service total.
11. Update loyalty points.
12. Display the final receipt.
13. End the program.

### 6. Salon Navigation Design

The original seven-room layout will be preserved:

- Reception Area
- Barber Area
- Cosmetology Area
- Hair Washing Stations
- Hair Dryer Section
- Restrooms
- Fire Exit

Room connections will continue to use a two-dimensional array of directional connections. Room names, descriptions, and connections will be organized through the proposed RoomInfo structure.

### 7. Proposed User Interface

The application will use a console-based interface with numbered menu options and directional commands.

The main menu will provide access to customer registration, service selection, stylist selection, salon exploration, and checkout.

Clear instructions and feedback messages will guide users through the application.

### 8. Testing and Evaluation Plan

During implementation, the following areas will be tested:

- Customer information entry and storage.
- Structure member access.
- Arrays of structures.
- Passing structures to functions.
- Nested structure access.
- Service selection and pricing calculations.
- Stylist selection.
- Salon room navigation.
- Loyalty point calculations.
- Receipt generation.
- Invalid user input and program termination.

### 9. Expected Design Outcome

The proposed design will transform the existing text adventure into a more complete salon management simulation.

The final application will demonstrate how C++ structures, arrays, functions, and control statements can work together to organize information and create a functional application.
