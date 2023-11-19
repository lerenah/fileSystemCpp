#pragma once
#include <string>
#include <vector>
#include <memory>

#include "node.h"

namespace fs
{
struct Directory : public Node
{
  Directory(Node *parent, std::string path);

  void ls() const;

  Node *mkdir(std::string name);

  std::vector<std::unique_ptr<Node>> children;
};
} // namespace fs
