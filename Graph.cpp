#include "Node.h"
#include "Graph.h"

void Graph::add(char a, char b, int newWeight){
  Node* node1 = nodeLookup(a);
  Node* node2 = nodeLookup(b);

  if ( node1 && node2 ){
    node1->add(node2,newWeight); 
  } 
}
void Graph::add(char a){
  nodes.push_back(new Node(a));
}
void Graph::remove(char a, char b){
  
}
void Graph::remove(char a){

}
void Graph::print(){
  for(vector<Node*>::iterator it = nodes.begin(); it != nodes.end(); it++){
    (*it)->print();
  }
}

Node* Graph::nodeLookup(char a){
  for(vector<Node*>::iterator it = nodes.begin(); it != nodes.end(); it++){
    if ( (*it)->name == a){
      return (*it);
    }
  }
  return NULL;
}
