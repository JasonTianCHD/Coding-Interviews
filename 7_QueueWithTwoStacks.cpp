//用两个栈实现队列的push和pop功能


class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.size()<=0){//此处是重点，不加if判断就会错误
            while(stack1.size()>0){
            int data = stack1.top();
            stack1.pop();
            stack2.push(data);
        	} 
        }
        
        if(stack2.size() == 0)//异常判断
            throw new exception("queue is empty");
            
        int head = stack2.top();
        stack2.pop();
        return head;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
