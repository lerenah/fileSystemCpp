#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <string_view>

#include "file.h"

namespace fs
{
struct Node {
  Node(Node *parent, std::string path);

  virtual ~Node();

  std::string_view getName() const;

  Node* parent;
  std::string path;
};
} // namespace fs

