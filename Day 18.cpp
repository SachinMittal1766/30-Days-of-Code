#include <iostream>
#include <stack>
#include <queue> 
using namespace std;

class Solution {
    std::stack<char> stack_1;
    std::queue<char> queue_1;
    
    public:
        void pushCharacter(char ch){
            stack_1.push(ch);
        }
    
        void enqueueCharacter(char ch){
            queue_1.push(ch);
        }
    
        char popCharacter(){
            char top = stack_1.top();
            stack_1.pop();
            return top;
        }
    
        char dequeueCharacter(){
            char front = queue_1.front();
            queue_1.pop();
            return front;
        }
};



