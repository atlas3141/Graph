#ifndef NODE_H
#define NODE_H

#include <vector>
#include <iostream>

using namespace std;

struct Link{
  int weight;
  Node* next;
};


class Node{
private:
  vector<Link> links;
public:
  char name;

  bool remove(Node* toRemove);
  void add(Node* toAdd, int newWeight);
};
