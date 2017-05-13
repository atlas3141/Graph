bool Node::add(Node* toAdd, int newWeight){

  bool linkExists = false;

  for(vector<Link*>::iterator it = links->begin(); it != links-> end(); it++){
    if((*it).next == toAdd){
      links.erase(it);
      linkExists = true;
      break;
    }
  }
  if (!linkExists){
    Link newLink;
    newLink.weight = newWeight;
    newLInk.next = toAdd;
    links.push_back(newLink);

  } else{
    cout << "The link from " << name << " to " << toAdd->name << " already exists."<< endl;
  }
}
void remove(Node* toRemove){
  for(vector<Link*>::iterator it = links->begin(); it != links-> end(); it++){
    if((*it).next == toRemove){
      links.erase(it);
      return true;
    }
  }
  return false;
} 
