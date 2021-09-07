/*
You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.

Example 1:

Input:
push(2)
push(3)
pop()
getMin()
push(1)
getMin()
Output: 3 2 1
Explanation: In the first test case for
query 
push(2)  the stack will be {2}
push(3)  the stack will be {2 3}
pop()    poped element will be 3 the
         stack will be {2}
getMin() min element will be 2 
push(1)  the stack will be {2 1}
getMin() min element will be 1
*/

int _stack :: getMin()
{
   //Your code here
   if(s.empty()) return -1;
   return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty()) return -1;
   else if(minEle < s.top()){
       int t = s.top();
       s.pop();
       return t;
   }
   else{
       // this means we are at the current minimum ele, so if we pop that
       // then we have to find next minimum element.
       // so here that logic(2*x)-minEle and 2*minEle - top, comes into picture
       int t= minEle;
       minEle = (2*minEle) - s.top();
       s.pop();
       return t;
       
   }
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty())
   {
       s.push(x);
       minEle = x;
       return;
   }
   else if(minEle < x){
       s.push(x);
   }
   else{
       s.push((2*x)-minEle);
       minEle =x;
       return;
   }
}