/*
Geek wants to make a special space for candies on his bookshelf. Currently, it has N books, each of whose height is represented by the array height[] and has unit width.
Help him select 2 books such that he can store maximum candies between them by removing all the other books from between the selected books. The task is to find out the area between two books that can hold the maximum candies without changing the original position of selected books. 

Example 1:

Input: N = 3, height[] = {1, 3, 4}
Output: 1
Explanation:
1. Area between book of height 1 and book of 
height 3 is 0 as there is no space between 
them.
2. Area between book of height 1 and book of 
height 4 is 1 by removing book of height 3.
3. Area between book of height 3 and book of 
height 4 is 0 as there is no space between them.

*/
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        // this question is similar to max water storage !
        int first =0, last = n-1, res=0;
        while(first<last)
        {
            // max area = height*breadth
            int temp = (last-first-1)*min(height[last],height[first]);
            res = max(res,temp);
            // as we want maximum height 
            if(height[first] < height[last]) first++;
            else last--;
        }
        return res;
    } 