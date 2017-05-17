#ifndef NODE_H
#define NODE_H

#include <vector>
#include <iostream>

using namespace std;

class Node;

struct Link{
  int weight;
  Node* next;
};


class Node{
private:
  vector<Link> links;
public:
  Node(char newName);
  char name;

  bool remove(Node* toRemove);
  bool add(Node* toAdd, int newWeight);
  void print();
};

#endif
