# SwaVe Hair Couture Lounge
## Software Requirements Document (Preliminary)

**Course:** CSC 134 – C++ Programming  
**Project Type:** Expansion of Existing Text Adventure Program  
**Programming Language:** C++  
**Project Name:** SwaVe Hair Couture Lounge – Interactive Salon Management Simulation

### 1. Project Overview

SwaVe Hair Couture Lounge is an expansion of an existing C++ text adventure program. The original application allows users to explore seven rooms within a virtual salon using directional commands.

The proposed application will expand the original program into an interactive salon management simulation. Users will be able to register customers, select salon services, choose stylists, navigate salon departments, and complete a simulated checkout process.

The primary purpose of this project is to demonstrate the use of C++ structures to organize related information and improve the functionality of an existing program.

### 2. Project Goals

The application will:

- Expand the functionality of the existing salon text adventure.
- Incorporate C++ structures to organize customer, service, stylist, appointment, and room information.
- Allow customers to select available salon services.
- Provide a stylist selection system.
- Maintain salon room navigation.
- Calculate service costs and generate customer receipts.
- Demonstrate modular programming through user-defined functions.

### 3. Functional Requirements

The application should provide the following functionality:

**FR-01: Welcome Screen**
- Display the SwaVe Hair Couture Lounge name.
- Display an introduction and available program options.

**FR-02: Customer Registration**
- Allow the user to enter a customer's name.
- Assign a customer identification number.
- Create and store a customer record.
- Track customer loyalty points.

**FR-03: Service Selection**
- Display available salon services.
- Display the price and estimated duration of each service.
- Allow the customer to select a service.

**FR-04: Stylist Selection**
- Display available stylists and their specialties.
- Allow the customer to select a stylist.

**FR-05: Appointment Management**
- Associate customer information with the selected service and stylist.
- Organize appointment information using a nested structure.

**FR-06: Salon Navigation**
- Preserve the original seven-room salon layout.
- Allow users to move between connected rooms using directional commands.
- Display room descriptions and available exits.
- Retain the Fire Exit game-ending condition.

**FR-07: Checkout**
- Calculate the total cost of the selected service.
- Update customer loyalty points.
- Display a receipt containing customer, service, stylist, and payment information.

**FR-08: Program Exit**
- Allow users to exit the application.
- Display an appropriate closing message.

### 4. Nonfunctional Requirements

- The application must be written in C++.
- The program must use structures to organize related information.
- The program must use arrays of structures where appropriate.
- Structure members must be accessed using dot notation.
- Structures must be passed to user-defined functions.
- The application must include appropriate input validation.
- The program must display clear instructions and readable output.
- The program should be organized into manageable functions.
- The program must execute without compilation errors.

### 5. Project Constraints

- The application will operate as a text-based console program.
- Customer and appointment information will be stored in memory while the program runs.
- No external database or online payment system will be required.
- Checkout transactions will be simulated.
- The project will build upon the existing seven-room text adventure.
- Features will remain within the scope of concepts covered in CSC 134.

### 6. Expected Deliverables

The completed project should include:

1. An operational C++ salon simulation.
2. Customer registration and information management.
3. Salon service and stylist selection.
4. Appointment information organized through structures.
5. Functional salon room navigation.
6. Checkout calculations and receipt generation.
7. Successful program testing and demonstration.
