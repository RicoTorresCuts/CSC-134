// CSC 134
// M6BONUS_CorreaTJ
// Text Adventure - SwaVe Hair Couture Lounge
// 11/11/26


#include <iostream>
#include <string>
using namespace std;

// AI Assistance:
// ChatGPT (OpenAI) was used to help rename rooms, create
// descriptions, modify room connections, and add a game-ending
// condition for the Fire Exit.
// Prompt: "Help me change my existing house text adventure
// program into a barbershop/salon named SwaVe Hair Couture Lounge
// Lounge with seven rooms and make the Fire Exit end the game."

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

int main() {

    // ============================================================
    // PART 2: ROOM DATA (parallel arrays)
    // ============================================================

    string roomNames[NUM_ROOMS] = {
        "Reception Area",
        "Barber Area",
        "Cosmetology Area (Color and Natural Hair)",
        "Hair Washing Stations",
        "Hair Dryer Section",
        "Restrooms",
        "Fire Exit"
    };

    string roomDescriptions[NUM_ROOMS] = {
        "Welcome to SwaVe Hair Couture Lounge! \nThe reception area is stylish and inviting. \nGuests can check in and wait for their appointments.",

        "Welcome to the Barber Area! \nProfessional barber chairs, clippers, and grooming tools are ready for fresh cuts and clean fades.",

        "Welcome to the Cosmetology Area! \nThis section specializes in hair coloring, natural hair care, styling, and creative transformations.",

        "You are at the Hair Washing Stations. \nComfortable shampoo bowls and reclining chairs are ready for relaxing shampoo and conditioning treatments.",

        "You are in the Hair Dryer Section. \nHooded dryers and styling stations are available for drying and finishing beautiful hairstyles.",

        "You have entered the Restrooms. \nThis area provides facilities for salon guests and staff.",

        "You have reached the Fire Exit. \nThank you for coming to the SwaVe Hair Couture Lounge! Hope to see you back soon"
    };

    // ============================================================
    // PART 3: THE MAP (a 2D array)
    // ============================================================

    int connections[NUM_ROOMS][NUM_DIRECTIONS];

    // Set every cell to -1 first.
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

    // Salon room connections

    // Reception Area connections
    connections[RECEPTION_AREA][NORTH] = BARBER_AREA;
    connections[RECEPTION_AREA][EAST]  = COSMETOLOGY_AREA;
    connections[RECEPTION_AREA][SOUTH] = HAIR_WASHING_STATIONS;
    connections[RECEPTION_AREA][WEST]  = RESTROOMS;

    // Barber Area connections
    connections[BARBER_AREA][SOUTH] = RECEPTION_AREA;
    connections[BARBER_AREA][NORTH] = FIRE_EXIT;

    // Cosmetology Area connections
    connections[COSMETOLOGY_AREA][WEST]  = RECEPTION_AREA;
    connections[COSMETOLOGY_AREA][SOUTH] = HAIR_DRYER_SECTION;

    // Hair Washing Stations connections
    connections[HAIR_WASHING_STATIONS][NORTH] = RECEPTION_AREA;
    connections[HAIR_WASHING_STATIONS][EAST]  = HAIR_DRYER_SECTION;

    // Hair Dryer Section connections
    connections[HAIR_DRYER_SECTION][NORTH] = COSMETOLOGY_AREA;
    connections[HAIR_DRYER_SECTION][WEST]  = HAIR_WASHING_STATIONS;

    // Restrooms connections
    connections[RESTROOMS][EAST] = RECEPTION_AREA;

    // Fire Exit connections
    connections[FIRE_EXIT][SOUTH] = BARBER_AREA;

    // ============================================================
    // PART 4: GAME STATE
    // ============================================================

    int currentRoom = RECEPTION_AREA;
    bool gameRunning = true;

    // ============================================================
    // PART 5: THE GAME LOOP
    // ============================================================

    cout << "========================================" << endl;
    cout << "       SWAVE HAIR COUTURE LOUNGE" << endl;
    cout << "              TEXT ADVENTURE" << endl;
    cout << "========================================" << endl;

    cout << "\nWelcome! Explore the different sections "
         << "of our salon." << endl;

    cout << "Type north, south, east, west, or quit to play."
         << endl;

    while (gameRunning) {

        // Step 1: Show the current room.
        cout << "\nYou are in the " << roomNames[currentRoom] << endl;
        cout << roomDescriptions[currentRoom] << endl;

        // Check if the player reached the Fire Exit.
        if (currentRoom == FIRE_EXIT) {
            cout << "\nYou found the Fire Exit!" << endl;
            cout << "You have successfully completed your visit "
                 << "to SwaVe Hair Couture Lounge!" << endl;

            gameRunning = false;
            break;
        }

        // Step 1, continued: Show available exits.
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

        // Step 2: Read a command.
        string command;

        cout << "\nWhat would you like to do? ";

        if (!(cin >> command)) {
            break;
        }

        // Step 3: Act on the command.

        if (command == "north" || command == "n") {

            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can't go that way." << endl;
            }

        } else if (command == "east" || command == "e") {

            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can't go that way." << endl;
            }

        } else if (command == "south" || command == "s") {

            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can't go that way." << endl;
            }

        } else if (command == "west" || command == "w") {

            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can't go that way." << endl;
            }

        } else if (command == "quit" || command == "q") {

            gameRunning = false;

        } else {

            cout << "I don't understand that command." << endl;
        }
    }

    // Goodbye message.
    cout << "\nThanks for playing SwaVe Hair Couture Lounge!"
         << endl;
    cout << "Game Over!" << endl;

    return 0;
}
