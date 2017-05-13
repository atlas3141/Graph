#include <iostream>
#include <fstream>
#include "Node.h"
#include "Graph.h"

using namespace std;

int main(){
  //main program loop
  RedBlackTree* tree = new RedBlackTree();
  char input[128];
  bool running = true;


  while(running){

    cin.getline(input, 128);
    toLower(input);
    
    if(input[0] == 'e' || input[0] == 'E'){
      cout << "Give me 2 single character vertex names and a weight, space separated" << endl;
      cin.getLine(input,10);

      if(isdigit(input[5]) 

    }
    else if(input[0] == 'v' || input[0] == 'V'){
      cout << "Give me the single character name for the new Vertex" << endl;
      cin.getLine(input,10);


    }
    else if(input[0] == 'd' || input[0] == 'D'){
      cout << "Give me one vertex name to delete it or two to delete the edge between them" << endl;
      cin.getLine(input,10);
      

    } 
    else if(input[0] == 'p' || input[0] == 'P'){
      
    } 
    else if(input[0] == 's' || input[0] == 'S'){
      cout << "Give me two nodes to find a path between" << endl;
      cin.getLine(input,10);


    }
    else if(input[0] == 'q' || input[0] == 'Q'){
      running = false;
    }
    else{
      cout << "I don't understand" << endl;
      cout << "The possible commands are:\nEdge\nVertex\nDelete\nFind\nQuit" << endl;
    }
  }
}

