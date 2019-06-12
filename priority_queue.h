#ifndef __PRIORITY_QUEUE__H__
#define __PRIORITY_QUEUE__H__
#include <queue>

template <typename T> 
class TemplatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
};

#endif 
