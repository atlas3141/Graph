#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>
#include "Node.h"

class Graph{
 private:
  vector<Node*> nodes;
  Node* nodeLookup(char a);
  
 public:
  
  void add(char a, char b, int newWeight);
  void add(char a);
  void remove(char a, char b);
  void remove(char a);
  void print();
  
};
#endif
