Design: Because I'm out of time, I don't want to try to implement anything too crazy. For now I'll start with a
basic 2d grid graph with a row and column, and then a third value to hold the actual value.

For functions, I'll need one for adding values to each vertex, so I'll have it taje the location and value as
arguments.  These will probs be hardcoded in, or if I'm feeling brave, have them be decided by user input.
Second Function would be to read the value, or a get func, I think they're called. This would just read the value 
based on the row and column input (also hardcoded for testing purposes. This doesn't need to be user friendly quite 
yet.)  The third function will be the remove/delete func. This will clear the value at a certain row/column location.

For tests, each func will be called a number of times, hardcoded with values decided at time of creation. Print off
the results in terminal to make sure everything works correctly.

A couple more design aspects, I don't really like only integers being input, so I want to make it be able to take
strings. I know vertices can only take one type at a time, so I hope that doens't effect rows and columns as integer
types. Maybe it won't, I forget. Besides, integers can always be stored as strings anyways. 

Tests will be put in main function called in the actual .cpp file. Grid/Graph will be stored in a header file
probably named header.h

Actual tests (Note: Func names might change if I decide to name them something else):

main(){
Grid.addValue(0,0, "string here");
Grid.addValue(1,0, "string here");
Grid.addValue(1,1, "string here");
Grid.addValue(2,0, "string here");
Grid.addValue(2,1, "string here");
Grid.addValue(2,2, "string here");
Grid.addValue(3,2, "string here");

Initialization of the grid would look something like this:

graphClassName Grid(3,2); // This is based on the tests above. I only test up to 3,2 but this could be any size.

and then a couple of couts<< to getValue(of a certain location) and then the <<endl; I always forget to add.
}
All this would be in a main function.

Oh, and I have no idea how to add edges, so that is something I'l have to learn that. That will be a function inside
the class.
Update in real time:
I learned how to do edges from a web forum, or one way of doing it and ive never heard of a matrix before but it
was the easiest thing I had to learn so far besides python, which is my favorite language. 
Anyways, I am going to implement an adjacent matrix to see which cells are near each other, then add functions to add
edges, remove edges, and see if there is an edge between two vertices.

Testing will look something like this and be included in the main functino:

graph.addEdge(0, 0, 1, 1);
graph.addEdge(0, 2, 1, 0);

Completed Edges: Working on sorting algorithms. I remeber a YT video I watched when we were doing binary trees, so 
gonna go find that. Conclusion: DJ Raksha will be the death of me.
Gonna use Dijkstra's algorithm to find shortest path.

Okay, I am going to be honest, I have no idea how to implement Dijkstra's algorithm as C++ code. I know how it
works, by marking all nodes/vertices as unread, then iterates throguh and checks weight, then decides which route is
fastest to each vertex from a specific vertex (the source, i think its called), but I can't seem to get my weighted
edges to work or the actual algorithm to work. I've tried using other people's I tried using ChatGPT, and i've tried
my own code for almost a whole day now and I cant seem to get it to work. Gonna just take the L and lose the
points, but I do understand the theory, just not the application.

Wow okay, next day looking into the sanning tree algorithm and after dedicating another whole day to researching 
this after the intro in class, I do not know whats going on at all. Please give me no points for this algorithm.

Okay, on to "Analyze the complexity of all of your graph behaviors." Everything once I got it working seems 
relatively simple. The add func changes the value of a location with a specific index of two numbers, and the
remove and read funcs do the same thing.
The class is also decently easy to understand, as it constructs the variables needed, initiates variables in 
private, makes a cople of functions, the edge working is a little more complicated, since  I cant get my weights
to work for shit, but besides that all they do is check to make sure index isn't negative, and then either prints,
overwrites a varaible, or clears it. Weight messes it up, though, so nothing will work if it's ran. I might remove
those sections so it can run?
main func calls the functions created in the class, which is very standard and self explanatory. There are a lot of 
cout statements that I was seeing if weight would work (it wouldn't) but they're good landmarks to see my thought
process of how I went through the process. I think I deleted some stuff, though, so maybe it looks like a huge mess.
The other couts should work fine, however, and should prove the other functions related to edges work well.

Okay, so I did most of the assignments. from what I did, I think I should get at least a 70%, if I get some credit
for at least showing in writing I understand the theory of shortest path algorithm. Sorry its a mess kinda started
to ramble.