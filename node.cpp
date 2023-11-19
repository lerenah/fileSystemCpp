#include "node.h"

namespace fs{
Node::Node(Node *parent, std::string path)
    : parent(parent), path(std::move(path))
{
}

Node::~Node() = default;

std::string_view getName() const
{
  auto lastIndex = path.find_last_of('/');
  assert((lastIndex != std::string::npos) && "No / found.");
  return std::string_view(path.c_str() + lastIndex + 1);
}
} // namespace fs
