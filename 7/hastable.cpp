#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
#include "header.h"

// Main func to run through all functions to make sure everythig works. Expected result in comments after every func called.
int main()
{
    Dungeon dungeon;
    dungeon.addLootToRoom(1, "gold", 100);  // Adds 100g to Room 1
    dungeon.addLootToRoom(1, "gem", 50);    // Adds 50 gems to ROom 1. Should still have gold?
    dungeon.addLootToRoom(2, "gold", 200);  // Adds 200g to Room 2.
    dungeon.addLootToRoom(2, "potion", 20); // Adds 20 pots to Room 2, should have gold.

    cout << "Loot in room 1: gold=" << dungeon.getLootValueInRoom(1, "gold")
         << ", gem=" << dungeon.getLootValueInRoom(1, "gem") << endl; // Expected output is the 100g and 50 gems in Room one.
    cout << "Loot in room 2: gold=" << dungeon.getLootValueInRoom(2, "gold")
         << ", potion=" << dungeon.getLootValueInRoom(2, "potion") << endl; // Expected output is 20g and 20 pots in Room two.

    // Remove the gold from Room 1. I will cry if it still removes only one gold.
    dungeon.removeLootFromRoom(1, "gold"); // Expected outcome is only 50 gems in Room one.

    // Prints the updated loot values, Room 2 should still have gold in it.
    cout << "Loot in room 1 after removing gold: gold=" << dungeon.getLootValueInRoom(1, "gold")
         << ", gem=" << dungeon.getLootValueInRoom(1, "gem") << endl; // Expected output is to have zero gold with 50 gems still there.
    cout << "Loot in room 2: gold=" << dungeon.getLootValueInRoom(2, "gold")
         << ", potion=" << dungeon.getLootValueInRoom(2, "potion") << endl; // Expected output is to have same loot as above. 200g and 20 pots
}
