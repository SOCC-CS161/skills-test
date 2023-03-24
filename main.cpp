#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// (1-1) Define global variables
  //number of rows and columns in GRID
  // number of mines in the GRID
  // true when in flag mode, false when in search mode
  // GRID[row][column][mine, flag status, search status]

// Function Prototypes
void resetGrid();
int countMines();
void printGrid(bool showMines = false);
int countFlags();
void printGameStatus(int startTime);
bool getCellSelection(int cellSelection[]);
void selectCell(int cellSelection[]);
int countAdjacentMines(int cellSelection[]);
void testCountAdjacentMines(); // provided
bool checkWin();
bool checkLose(int cellSelection[]);

int main(){
  // Part 2 Test code

  // Part 2 Test code

  // (3-3) Modify your code in main() such that it initializes a game and then goes into a loop, each iteration of which prints the status and board, gets input from the user, and acts on that input, and checks for a win or lose.


  return 0;
}

// (1-2) Write a function called countMines() which takes no input and returns the number (integer)of mines in the GRID

// (1-3) Write a function called resetGrid() which takes no inputs, returns no value, resets the flag and search layers to all false and randomly places NUMBER_OF_MINES mines amongs the cells

// (1-4) Write a function called printGrid() that returns no value but prints the grid.  A boolean parameter called showMines will determine whether the function displays the mines or hides them

    // (2-4)  Come back to this in Part 2. Upgrade printGrid() to print the number of adjacent cells with mines if there are any, or an empty space if there aren't for all cells that have been searched

// (1-5) Write a function called countFlags() that counts and  returns the number (int) of flags on the GRID

// (1-6) Write a function called printGameStatus() that takes and integer startTime as input and prints the number of mines remaining and the time elapsed since the start of of the game

// (2-1) Write a function called getCellSelection() which will get the desired cell (row and column) to select from the user and allow them to change the mode between search and flag by entering a negative number. The function shoudl return true if a valid cell was selected or false otherwise.

// (2-2) Write a function called countAdjacentMines() that takes a cell selction array (row and column) as input and returns the number of mines in the 8 surrounding/adjacent cells

// (2-2c) Test countAdjacentMines() using the provided testCountAdjacentMines() function
void testCountAdjacentMines(){
  resetGrid();
  for (int row = GRID_SIZE - 1; row >= 0; row--){
    // Print row lables
    cout << row << " " << "| ";

    for (int column = 0; column < GRID_SIZE; column++){
      int cell[] = {row, column};
      if (GRID[row][column][0])
        cout << "M";
      else if (GRID[row][column][1])
        cout << "F";
      else if (countAdjacentMines(cell) > 0)
        cout << countAdjacentMines(cell);
      else 
        cout << " ";


      cout << " ";

      if (column >= GRID_SIZE - 1)
        cout << endl;
    } // end column
  } // end row

  // Print column lables

  cout << "   ";
  for (int column = 0; column < GRID_SIZE; column++){
    cout <<  "--";
  }
  cout << endl << "    ";
  
  for (int column = 0; column < GRID_SIZE; column++){
    cout << column << " ";
  }
  cout << endl << endl;
} // end testCountAdjacentMines()

// (2-3) Write a function called select cell which takes a cell selection array as input, searches/flags/unflags the cell as appropriate, and returns nothing.

// (3-1) Write a function called checkWin() that takes no input and checks every cell to see if they have all been either searched or correclty flagged.  If so, return true. Otherwise return false.

// (3-2) Write a function called checkLose() that takes a cell selection array as input and returns true if that cell has been searched AND has a mine.  