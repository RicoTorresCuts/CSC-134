
// CSC 134
// M6HW1_CorreaTJ
// Project Prototype - SwaVe Hair Couture Lounge
// 11/23/26

#include <iostream>
#include <string>
using namespace std;

// AI Assistance:
// ChatGPT (OpenAI) was used to help expand the original
// M6BONUS text adventure into a Gold-level project prototype.
// Assistance included adding employee dialogue, collectible
// items, a key and lock system, and user-defined functions.

// ============================================================
// PART 1: ENUMS
// ============================================================

enum Direction {
    NORTH,
    EAST,
    SOUTH,
    WEST,
    NUM_DIRECTIONS
};

const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Salon rooms
enum Room {
    RECEPTION_AREA,
    BARBER_AREA,
    COSMETOLOGY_AREA,
    HAIR_WASHING_STATIONS,
    HAIR_DRYER_SECTION,
    RESTROOMS,
    FIRE_EXIT,
    NUM_ROOMS
};

// ============================================================
// PART 2: FUNCTION PROTOTYPES
// ============================================================

void displayWelcome();
void displayEmployeeDialogue();
void displayNote();
void collectKey(bool &hasKey, bool &keyFound);
void displayInventory(bool hasKey);
void displayRoom(int currentRoom, string roomNames[],
                 string roomDescriptions[]);
void displayExits(int currentRoom, int connections[][NUM_DIRECTIONS]);
void unlockFireExit(bool hasKey, bool &gameRunning);

// ============================================================
// PART 3: MAIN FUNCTION
// ============================================================

int main() {

    // ========================================================
    // ROOM DATA
    // ========================================================

    string roomNames[NUM_ROOMS] = {
        "Reception Area",
        "Barber Area",
        "Cosmetology Area",
        "Hair Washing Stations",
        "Hair Dryer Section",
        "Restrooms",
        "Fire Exit"
    };

    string roomDescriptions[NUM_ROOMS] = {

        "Welcome to SwaVe Hair Couture Lounge! "
        "\nThe reception area is stylish and inviting. "
        "\nGuests can check in and wait for their appointments.",

        "Welcome to the Barber Area! "
        "\nProfessional barber chairs, clippers, and grooming "
        "tools are ready for fresh cuts and clean fades.",

        "Welcome to the Cosmetology Area! "
        "\nThis section specializes in hair coloring, natural "
        "hair care, styling, and creative transformations.",

        "You are at the Hair Washing Stations. "
        "\nComfortable shampoo bowls and reclining chairs "
        "are ready for relaxing shampoo treatments.",

        "You are in the Hair Dryer Section. "
        "\nHooded dryers and styling stations are available "
        "for drying and finishing beautiful hairstyles.",

        "You have entered the Restrooms. "
        "\nThis area provides facilities for salon guests and staff.",

        "You have reached the Fire Exit. "
        "\nThe emergency exit is locked!"
    };

    // ========================================================
    // PART 4: THE MAP (2D ARRAY)
    // ========================================================

    int connections[NUM_ROOMS][NUM_DIRECTIONS];

    // Initialize every connection to -1.
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

    // Reception Area connections
    connections[RECEPTION_AREA][NORTH] = BARBER_AREA;
    connections[RECEPTION_AREA][EAST] = COSMETOLOGY_AREA;
    connections[RECEPTION_AREA][SOUTH] = HAIR_WASHING_STATIONS;
    connections[RECEPTION_AREA][WEST] = RESTROOMS;

    // Barber Area connections
    connections[BARBER_AREA][SOUTH] = RECEPTION_AREA;
    connections[BARBER_AREA][NORTH] = FIRE_EXIT;

    // Cosmetology Area connections
    connections[COSMETOLOGY_AREA][WEST] = RECEPTION_AREA;
    connections[COSMETOLOGY_AREA][SOUTH] = HAIR_DRYER_SECTION;

    // Hair Washing Stations connections
    connections[HAIR_WASHING_STATIONS][NORTH] = RECEPTION_AREA;
    connections[HAIR_WASHING_STATIONS][EAST] = HAIR_DRYER_SECTION;

    // Hair Dryer Section connections
    connections[HAIR_DRYER_SECTION][NORTH] = COSMETOLOGY_AREA;
    connections[HAIR_DRYER_SECTION][WEST] = HAIR_WASHING_STATIONS;

    // Restrooms connections
    connections[RESTROOMS][EAST] = RECEPTION_AREA;

    // Fire Exit connections
    connections[FIRE_EXIT][SOUTH] = BARBER_AREA;

    // ========================================================
    // PART 5: GAME STATE
    // ========================================================

    int currentRoom = RECEPTION_AREA;

    bool gameRunning = true;
    bool hasKey = false;
    bool keyFound = false;

    // ========================================================
    // PART 6: START GAME
    // ========================================================

    displayWelcome();

    // ========================================================
    // PART 7: MAIN GAME LOOP
    // ========================================================

    while (gameRunning) {

        // Display current room
        displayRoom(currentRoom, roomNames, roomDescriptions);

        // Display employee dialogue at reception
        if (currentRoom == RECEPTION_AREA) {
            displayEmployeeDialogue();
        }

        // Display note in Cosmetology Area
        if (currentRoom == COSMETOLOGY_AREA) {
            displayNote();
        }

        // Display key discovery in Hair Dryer Section
        if (currentRoom == HAIR_DRYER_SECTION && !keyFound) {
            cout << "\nYou notice something underneath a styling station."
                 << endl;
            cout << "There appears to be a small object hidden there."
                 << endl;
            cout << "Type 'take' to pick it up." << endl;
        }

        // Display inventory
        displayInventory(hasKey);

        // Check whether player reached the Fire Exit
        if (currentRoom == FIRE_EXIT) {
            unlockFireExit(hasKey, gameRunning);

            if (!gameRunning) {
                break;
            }
        }

        // Display available exits
        displayExits(currentRoom, connections);

        // Read player command
        string command;

        cout << "\nWhat would you like to do? ";

        if (!(cin >> command)) {
            break;
        }

        // ====================================================
        // PART 8: PROCESS PLAYER COMMANDS
        // ====================================================

        if (command == "north" || command == "n") {

            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            }
            else {
                cout << "You can't go that way." << endl;
            }

        }

        else if (command == "east" || command == "e") {

            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            }
            else {
                cout << "You can't go that way." << endl;
            }

        }

        else if (command == "south" || command == "s") {

            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            }
            else {
                cout << "You can't go that way." << endl;
            }

        }

        else if (command == "west" || command == "w") {

            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            }
            else {
                cout << "You can't go that way." << endl;
            }

        }

        // Collect the emergency exit key
        else if (command == "take" &&
                 currentRoom == HAIR_DRYER_SECTION) {

            collectKey(hasKey, keyFound);

        }

        // Display inventory
        else if (command == "inventory" || command == "i") {

            displayInventory(hasKey);

        }

        // Quit the game
        else if (command == "quit" || command == "q") {

            gameRunning = false;

        }

        else {

            cout << "I don't understand that command." << endl;

        }
    }

    // ========================================================
    // PART 9: GOODBYE MESSAGE
    // ========================================================

    cout << "\nThanks for playing SwaVe Hair Couture Lounge!"
         << endl;

    cout << "Game Over!" << endl;

    return 0;
}

// ============================================================
// PART 10: USER-DEFINED FUNCTIONS
// ============================================================

// Display welcome screen
void displayWelcome() {

    cout << "========================================" << endl;
    cout << "       SWAVE HAIR COUTURE LOUNGE" << endl;
    cout << "          AFTER-HOURS MYSTERY" << endl;
    cout << "========================================" << endl;

    cout << "\nWelcome! Explore the different sections "
         << "of our salon." << endl;

    cout << "\nOBJECTIVE:" << endl;
    cout << "Find the missing emergency exit key and "
         << "escape through the Fire Exit." << endl;

    cout << "\nCOMMANDS:" << endl;
    cout << "North, South, East, West" << endl;
    cout << "Take - Pick up an item" << endl;
    cout << "Inventory - Check collected items" << endl;
    cout << "Quit - Exit the game" << endl;
}

// Employee dialogue
void displayEmployeeDialogue() {

    cout << "\n----------------------------------------" << endl;
    cout << "Salon Employee:" << endl;

    cout << "\"Oh no! We seem to have misplaced the "
         << "emergency exit key!\"" << endl;

    cout << "\"I heard someone dropped something near "
         << "the hair dryer section.\"" << endl;

    cout << "\"Please find that key so we can unlock "
         << "the Fire Exit!\"" << endl;

    cout << "----------------------------------------" << endl;
}

// Display clue note
void displayNote() {

    cout << "\nYou notice a small handwritten note "
         << "on a styling station." << endl;

    cout << "\nThe note reads:" << endl;

    cout << "\"The emergency key was last seen near "
         << "the hair dryer stations.\"" << endl;
}

// Collect key
void collectKey(bool &hasKey, bool &keyFound) {

    if (!keyFound) {

        hasKey = true;
        keyFound = true;

        cout << "\nYou found the emergency exit key!" << endl;
        cout << "You picked up the key and added it "
             << "to your inventory." << endl;

    }
    else {

        cout << "\nYou already collected the key." << endl;

    }
}

// Display inventory
void displayInventory(bool hasKey) {

    cout << "\nInventory: ";

    if (hasKey) {
        cout << "Emergency Exit Key" << endl;
    }
    else {
        cout << "Empty" << endl;
    }
}

// Display current room
void displayRoom(int currentRoom, string roomNames[],
                 string roomDescriptions[]) {

    cout << "\n========================================" << endl;

    cout << "You are in the " << roomNames[currentRoom] << endl;

    cout << roomDescriptions[currentRoom] << endl;

    cout << "========================================" << endl;
}

// Display available exits
void displayExits(int currentRoom,
                  int connections[][NUM_DIRECTIONS]) {

    cout << "Exits: ";

    bool hasExits = false;

    for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {

        if (connections[currentRoom][dir] != -1) {

            cout << DIRECTION_NAMES[dir] << " ";

            hasExits = true;

        }
    }

    if (!hasExits) {
        cout << "none";
    }

    cout << endl;
}

// Unlock Fire Exit
void unlockFireExit(bool hasKey, bool &gameRunning) {

    cout << "\nYou have reached the Fire Exit!" << endl;

    if (hasKey) {

        cout << "\nYou insert the emergency key into the lock."
             << endl;

        cout << "CLICK! The door unlocks!" << endl;

        cout << "\nCongratulations!" << endl;

        cout << "You successfully found the missing key "
             << "and escaped SwaVe Hair Couture Lounge!"
             << endl;

        cout << "\nThank you for playing!" << endl;

        gameRunning = false;

    }
    else {

        cout << "\nThe Fire Exit is locked!" << endl;

        cout << "You need the emergency exit key to open it."
             << endl;

        cout << "Explore the salon and find the missing key."
             << endl;

    }
}

