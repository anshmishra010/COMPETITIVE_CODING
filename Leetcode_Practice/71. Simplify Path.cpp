/*
Given a string path, which is an absolute path (starting with a slash '/') to a file or 
directory in a Unix-style file system, convert it to the simplified canonical path.

In a Unix-style file system, a period '.' refers to the current directory, a double period 
'..' refers to the directory up a level, and any multiple consecutive slashes (i.e. '//') 
are treated as a single slash '/'. For this problem, any other format of periods such as 
'...' are treated as file/directory names.

The canonical path should have the following format:

The path starts with a single slash '/'.
Any two directories are separated by a single slash '/'.
The path does not end with a trailing '/'.
The path only contains the directories on the path from the root directory to the target file or directory (i.e., no period '.' or double period '..')
Return the simplified canonical path.

 

Example 1:

Input: path = "/home/"
Output: "/home"
Explanation: Note that there is no trailing slash after the last directory name.
*/

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string temp, res;
        
        while(getline(ss,temp,'/'))
        {
            if(temp == "." or temp == "") continue;
            else if (temp == ".."){
                if(!st.empty()) st.pop();
            }
            else st.push(temp);
        }
        
        while(!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }
        return res.empty() ? "/" : res;
    }
};


// Another way! To solve it. Without using stringstream in a simplified way.



 string simplifyPath(string path) {
        vector<string> str;
        string ans="";
        int n = path.length();
        for(int i=0;i<n;i++)
        {
            string dir = "";  // temporary string 
            while(i<n && path[i]!='/')
            {
                dir+=path[i];
                i++;
            }
            
            if(dir=="..")
            {
                if(!str.empty())
                    str.pop_back();
            }
            else if(dir=="."||dir=="")
            {
                //Eat 5Star do Nothing or just continue;
            }
            else{
                str.push_back(dir);
            }
        }
     
            for(auto i:str)
                ans+= "/"+i;
            
            if(ans=="")   // if we got the empty string then too we have to return this
                return "/";
            
            return ans;
    }