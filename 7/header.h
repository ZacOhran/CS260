#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

// Constructor of class Dungeon
class Dungeon
{
    // Public Functions. One to add loot, one to see or get loot, one to remove the loot
public:
    void addLootToRoom(int roomNumber, const string &lootName, int lootValue)
    {
        // Formulates the bucket index based on the room number. numbuckets is 100, since thats how many rooms I wanted to add to the dungeon. It's huge.
        int bucketIndex = roomNumber % numBuckets;
        // Get the data structure (a vector) for the bucket
        auto &bucket = table[bucketIndex];
        // Search for an existing key-value pair with the same key (lootName)
        auto it = find_if(bucket.begin(), bucket.end(),
                          [&](const pair<string, int> &pair)
                          { return pair.first == lootName; });
        if (it == bucket.end())
        {
            // Key-value pair not found, add a new one. Ex: adding gold to a room for the first time.
            bucket.push_back(make_pair(lootName, lootValue));
        }
        else
        {
            // Key-value pair already exists, overwrite the value. EX 100g to 200g, or vice versa
            it->second = lootValue;
        }
    }

    // Checks the loot in the room number as an argument and perameter
    int getLootValueInRoom(int roomNumber, const string &lootName)
    {
        // Formulates the bucket index based on the room number. numbuckets is 100, since thats how many rooms I wanted to add to the dungeon. It's huge.
        int bucketIndex = roomNumber % numBuckets;
        // Get the data structure (a vector) for the bucket
        const auto &bucket = table[bucketIndex];
        // Search for the key-value pair with the specified key (lootName)
        auto it = find_if(bucket.begin(), bucket.end(),
                          [&](const pair<string, int> &pair)
                          { return pair.first == lootName; });
        if (it == bucket.end())
        {
            // Key-value pair not found, return a default value of 0. no gold here
            return 0;
        }
        else
        {
            // Key-value pair found, return the value of item. amount of gold, gems, or whatever the user added.
            return it->second;
        }
    }

    // Loot that dungeon room! Steal all the valuables! The residents are long dead, they don't need them!
    void removeLootFromRoom(int roomNumber, const string &lootName)
    {
        // Formulates the bucket index based on the room number. numbuckets is 100, since thats how many rooms I wanted to add to the dungeon. It's huge.
        int bucketIndex = roomNumber % numBuckets;
        // Get the data structure (a vector) for the bucket
        auto &bucket = table[bucketIndex];
        // Search for an existing key-value pair with the same key (lootName)
        auto it = find_if(bucket.begin(), bucket.end(),
                          [&](const pair<string, int> &pair)
                          { return pair.first == lootName; });
        if (it != bucket.end())
        {
            // Key-value pair found, erase it from the bucket. The Room has been looted, and you're up at least 100g!
            bucket.erase(it);
        }
    }

private:
    // Number of buckets in the hash table
    static const int numBuckets = 100;
    // Data structure for each bucket
    vector<pair<string, int>> table[numBuckets];
};
