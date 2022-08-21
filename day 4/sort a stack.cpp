https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

void insertcorrect(stack<int> &stack,int x){
    if(stack.empty() or stack.top()<x){
        stack.push(x);
    }
    else{
       int p= stack.top();
        stack.pop();
       insertcorrect(stack,x);
        stack.push(p);
    }
}
void sortStack(stack<int> &stack)
{
	// Write your code here
    if(stack.empty())return;
    int x=stack.top();
    stack.pop();
    sortStack(stack);
    insertcorrect(stack,x);
}