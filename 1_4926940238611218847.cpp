#include <iostream>

using namespace std;


const int WIDTH=22; // declare variable ans assign a value
const int HEIGHT=14;
int amazingMaze [HEIGHT][WIDTH];
int R1=2,R3=3,R5=4,R6=5,R7=6,R8 =7;
int E2=8,E4 =9;
bool option;
int step=0;
char pick;

// Function prototypes
void printMaze(char maze[][WIDTH], int curx, int cury);
bool validMove(char maze[][WIDTH], int newX, int newY);
bool move(char maze[][WIDTH], int &curX, int &curY,
 int newX, int newY);
// Return true or false if moving to the specified coordinate is valid
bool validMove(char maze[][WIDTH], int newX, int newY)
{
// Check for going off the maze edges
if (newX < 0 || newX >= WIDTH)
return false;
if (newY < 0 || newY >= HEIGHT)
return false;
// Check if target is a wall
if (maze[newY][newX]=='X')
return false;
return true;
}
// Make the move on the maze to move to a new coordinate
// I passed curX and curY by reference so they are changed to
// the new coordinates. I assume the move coordinates are valid.
// This returns true if we move onto the exit, false otherwise.
bool move(char maze[][WIDTH], int &curX, int &curY,
 int newX, int newY)
{
 bool foundExit = false;
 if (maze[newY][newX]=='E') // Check for exit
foundExit = true;
 curX = newX; // Update location
 curY = newY;
 return foundExit;
}
// Display the maze in ASCII
void printMaze(char maze[][WIDTH], int curx, int cury)
{
 for (int y=0; y < HEIGHT;y++)
 {
 for (int x=0; x < WIDTH; x++)
 {
if ((x==curx) && (y==cury))
cout << "@";
else
cout << maze[y][x];
 }
 cout << endl;
 }
}


int main(){    //In this inner layer; There are (15 *22)= 330 elements in the array named amazingMaze, consisting of 15 rows and 22 columns                      
 int amazingMaze[15][22] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
              				{1, R1, 1, 0, 0, 0, 0, 1, R3, 1, 0, 0, 0, 0, 1, R5, 1, 0, 0, 0, 0, 1},
             				{1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1}, 
              				{1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1},
             			 	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, R7, 1},
              				{1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
              				{1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
              				{1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
              				{E2, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
              				{1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, R6, 1},
              				{1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1},
              				{1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
              				{1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
              				{1, R8, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
              				{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, E4, 1, 1, 1, 1, 1, 1, 1, 1, 1},
              				};  
    // The outer layer displays vertical and horizontal  index number of each element inside the inner layer                              
    cout << "    ";
    for (int i=0;i<22;i++) //loop through each column one at at time NB: the operator <=22 can be used instead of <22 
    {
        cout << i << "   ";
    }
    cout << endl << endl;
    
    
    for (int i=0;i<15;i++) //loop through each row one at at time and teat the condition as follows;
    {
        if(i < 10 )
        {          
            cout << i << "   "; 
        }
        else
        {
            cout << i << "  ";
        }
        for (int j=0;j<22;j++)
        {
        
            switch (amazingMaze[i][j])
          {
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
                 cout<<"R" <<amazingMaze[i][j]<<"   "; // For each case,display R infront of  the number that is stored in i and j that was passed in the loop to test the condition
              break;
              case 8:
              case 9:
                 cout<<"E" <<amazingMaze[i][j]<<"   "; //For each case,display E infront of  the number that is stored in i and j that was passed in the loop to test the condition
              break;
              default:
                  if ( j < 10)
                  cout<<amazingMaze[i][j]<<"   ";  //test the condition
                  else
                  cout<<amazingMaze[i][j]<<"    ";  //else display the  assigned values passed 
          }
        }
        cout << endl << endl;
        }

       
    /* Bellow the nested for loops will be executed: 1st and once executed(declare and initizlize=0 the control varible i and j
the onditions are then evauated,If it is true, the body of the loop is executed. If it is false, the body of the loop does not execute and flow of control jumps to the next statement just after the for loop.
once the body is eecuted then i and j gets incrimented respectively. The condition is now evaluated again. 
If it is true, the loop executes and the process repeats itself until false , the loops terminates*/
							 
        for (int i=0; i<15; i++){ //outer for; loop through each row, element by element
            for(int j=0; j<22; j++){ //inner loop; loop through one at a time each element in each column
                cout << amazingMaze[i][j];
// The user has 4 keys to navigate; - R for right, L for left, U for up, D for down 
                cout << "\tPlease choose direction:  U for up, D for down, R for right and L for left: ";
                cin>> pick;
                tolower(pick);
                switch(pick){
                case 'u' :  // 0 indicates that the cell is free to move and 1 and obstacle
                    cout << "you moved up"<<endl<<"\n";
                    if (amazingMaze[i][j]==0 ||amazingMaze[i][j]>1){  // if player moves up to a cell that is a 0 then add 1 if true
                        option=true;
                        step=step+1;
                        amazingMaze[i][j]=amazingMaze[i-1][j]; //if this condition is false then excecute the else condition below
                    }else{
                        option= false; 
                        step=step-1;
                        amazingMaze[i][j]=amazingMaze[i][j];
                        cout << "Ouch! I hit a wall!";
                    }
                    break;
                case 'd' :
                    cout << "you moved down "<<endl;   // if player moves down to a cell that is a 0 then add 1 if true
                        option=true;
                    if (amazingMaze[i][j]==0 ||amazingMaze[i][j]>1){
                        option=true;
                        step=step+1;
                        amazingMaze[i][j]=amazingMaze[i+1][j]; //if this condition is false then excecute the else condition below and -1
                    }else{
                        option= false;
                        step=step-1;
                        amazingMaze[i][j]=amazingMaze[i][j];
                    }
                    break;
                case 'r':
                    cout << "you moved right"<< endl;  // if player moves right to a cell that is a 0 then add 1 if true
                        option=true;
                    if (amazingMaze[i][j]==0 ||amazingMaze[i][j]>1){
                        option=true;
                        step=step+1;
                        amazingMaze[i][j]=amazingMaze[i+1][j];   //if this condition is false then excecute the else condition below and -1
                    }else{
                        option= false;
                        step=step-1;
                        amazingMaze[i][j]=amazingMaze[i][j];
                    }
                    break;
                case 'l' : 
				cout << "you moved left"<< endl;  // if player moves left to a cell that is a 0 then add 1 if true
                        option=true;  
                    if (amazingMaze[i][j]==0 ||amazingMaze[i][j]>1){     
                        option=true;
                        step=step+1;
                        amazingMaze[i][j]=amazingMaze[i-1][j]; //if this condition is false then excecute the else condition below and -1
                    }else{
                        option= false;
                        step=step-1;
                        amazingMaze[i][j]=amazingMaze[i][j];
                    }
                    break;
                default :
                    cout << "Please choose another option"<<endl; //if the user inputa anything else besides u,d,r,l then prompt the usr to select from option u,d,r,l
                }


        }
    }

};
int x = 1, y = 1;
bool foundExit = false;
while (!foundExit)
{
printMaze(maze,x,y);
cout << "Enter WASD to move." << endl;
char c;
cin >> c;
c = tolower(c);
switch (c)
{
case 'w':
if (validMove(maze,x,y-1))
foundExit = move(maze,x,y,x,y-1);
break;
case 'a':
if (validMove(maze,x-1,y))
foundExit = move(maze,x,y,x-1,y);
break;
case 's':
if (validMove(maze,x,y+1))
foundExit = move(maze,x,y,x,y+1);
break;
case 'd':
if (validMove(maze,x+1,y))
foundExit = move(maze,x,y,x+1,y);
}
}
}
