My hash table will represent a dungeon and the loot inside each room as the key values. The number of buckets is determined by the number of rooms in the dungeon.
Each dungeon will have space for three to five pieces of loot. The type of loot in each room will be decided by the user in a function that adds loot to a specific 
room.
Default will be zero key values in each bucket, but number of buckets and key value pairs will be determined before.
There will also be a function that checks the loot in each room. This won't remove the values from the buckets, instead just reading what is avaliabe inside, either 
looking for a specific type of loot or showing all of it at once, which ever I can figure out first.
The last function will to be actually emptying one of the pair spots. This effectively 'loots' the dungeon, and will make me want to play DND or Skyrim.

Each of the functions above will have to be public so the user can use them, but deciding the number of things will be private so they cant change. Is there a 
constant variable type? I don't remember, but probably make it that if there is.

Last thing, the tests. They will probably look something like this:
addLootToDungeon(10, gold, 15)
addLootToDungeon(55, gem, 4)
addLootToDungeon(42, weapons, 1)
addLootToDungeon(1, scrolls, 6)
addLootToDungeon(99, gold, 50)

lootRoom(10, gold) If can make it take out one thing I probably will.
OR 
lootRoom(10) Otherwise looting (or removing) will take out everything in the bucket.

Checking the loot will be the same as the remove function above.
checkForLoot(10, gold)
OR 
checkForLoot(10)

And then some formatted print functions or whatever they're called in C++ where I call the functions and print
their returned values of each function.
One to add loot and then tell what is inside the room.
Another to take loot out 

The .cpp is the file to run, as usual. Contains the tests to test the actual code stored in a header for readability. All functions are called and printed to prove 
they work. 
For collision I have it set up so the value is just overwritten. It made sense for my example. This wil set the value of each loot item to whatever the most recently
added using the function addLootToRoom. It also happened to be the easiest way to deal with collsion. Might use this in a random dungeon generator I've been working
on for implementing Dungeon Crawling into DND 5e. Might ust use 3.5e tho.
