#include "priority_queue.h"

template <>
TemplatePriorityQueue<int>::templatePriorityQueue(){
}

template <>
TemplatePriorityQueue<int>::~templatePriorityQueue(){
}

template <>
bool TemplatePriorityQueue<int>::empty() const{
  return storage.empty();
}

template <>
int TemplatePriorityQueue<int>::size() {
  return storage.size();
}

template <>
const int& TemplatePriorityQueue<int>::top() const{
  if (storage.empty())
    return 0;  // TODO(junbumshin) check return 0 is allowed as a return of int& 
  return storage.top();
}

template <>
void TemplatePriorityQueue<int>::pop(){
  if (storage.empty())
    return 0;  // TODO(junbumshin) check return 0 is allowed as a return of int& 
  storage.pop();
}

template <>
void TemplatePriorityQueue<int>::push(const int& val){
  storage.push(val);
}
