#include "Node.h"
Node::Node(char newName){
  name = newName;
}

bool Node::add(Node* toAdd, int newWeight){

  bool linkExists = false;
  if(toAdd == this){
    cout << "You cant link a node to itself" << endl;
    return false;
  }
  for(vector<Link>::iterator it = links.begin(); it != links.end(); it++){
    if((*it).next == toAdd){
      links.erase(it);
      linkExists = true;
      break;
    }
  }
  if (!linkExists){
    Link newLink;
    newLink.weight = newWeight;
    newLink.next = toAdd;
    links.push_back(newLink);
    return true;
  } else{
    cout << "The link from " << name << " to " << toAdd->name << " already exists."<< endl;
    return false; 
  }
}
bool Node::remove(Node* toRemove){
  for(vector<Link>::iterator it = links.begin(); it != links.end(); it++){
    if((*it).next == toRemove){
      links.erase(it);
      return true;
    }
  }
  return false;
} 
void Node::print(){
  bool noLinks = true;
  cout << name << " :: ";
  
  for(vector<Link>::iterator it = links.begin(); it != links.end(); it++){
    cout << (*it).next->name << " ";
    noLinks = false;
  }
  if (noLinks) cout << "No Links";
  cout << endl;
}
