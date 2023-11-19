#include "directory.h"

namespace fs
{
Directory::Directory(Node* parent, std::string path) 
  : Node(parent, std::move(path))
{   
}

void Directory::ls() const
{
  for (auto v : children){
    std::cout << v->getName() << std::endl;
  }
}

Node *Directory::mkdir(std::string name)
{
  std::unique_ptr<Node> directory = std::make_unique<Directory>(this, path + "/" + name);
  children.push_back(std::move(directory));
  return directory.get();
}
} // namespace fs
