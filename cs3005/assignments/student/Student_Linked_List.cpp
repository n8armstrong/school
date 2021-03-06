// Linked List for Student Classes
// Assignment 7 CS3005
// Nate Armstrong

// Questions:
// * Create a Node for Insert?
// * How to return -1 in Retrieve?

#include "Student.h"

class Node
{
public:
  Student data;
  Node *next;
};

class LinkedList
{
public:
  int Length() const;
  bool Insert(const Student & key) const;
  bool Exists(const Student & key) const;
  Student Retrieve(const Student & key) const;
  Student Delete(const Student & key);

private:
  Node *mHead;
  int mCount;
};

Linked::List()
{
  int mCount = 0;
}

int LinkedList::Insert(const Student & key) const
{
  Node *curr;
	curr = new Node;
  // new Node points to what mHead points to
	// head points to new Node
	// store Student in new Node
}

int LinkedList::Length() const
{
  return mCount;
}

bool LinkedList::Exists(const Student & key) const
{
  Node *curr;
  for (curr=mHead; curr!=0; curr=curr->next)
  {
    if (curr->data == key)
      return true;
  }
  return false;
}

Student LinkedList::Retrieve(const Student & key) const
{
  Node *curr;
  for (curr=mHead; curr!=0; curr=curr->next)
  {
    if (curr->data == key)
      return curr->data;
  }
  return Student(const Student&);
}

bool LinkedList::Delete(const Student & key)
{
  Node *curr;
  Node *prev;
  for (curr=mHead; curr!=0; curr=curr->next)
  {
    if (curr->data == key)
    {
      prev->next = curr->next;
      delete curr;
      return true;
    }
    prev = curr;
  }
  return false;
}
