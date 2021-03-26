int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    
    int s1_h=0;
    int s2_h = 0;
    int s3_h = 0;
    
    for(int i=h1.size()-1;i>=0;i--)
    {
        s1_h = s1_h+h1[i];
        s1.push(s1_h);
    }
    for(int i=h2.size()-1;i>=0;i--)
    {
        s2_h = s2_h+h2[i];
        s2.push(s2_h);
    }
    for(int i=h3.size()-1;i>=0;i--)
    {
        s3_h=s3_h+h3[i];
        s3.push(s3_h);
    }
    
    while(1)
    {
        if(s1.empty() || s2.empty() || s3.empty())
        {
            return 0;
        }
        s1_h = s1.top();
        s2_h = s2.top();
        s3_h =s3.top();
        
        if(s1_h == s2_h && s2_h == s3_h)
        {
            return s2_h;
        }
        
        if(s1_h >=s2_h && s1_h>=s3_h)
        {
            s1.pop();
        }
        else if(s2_h>=s1_h && s2_h>=s3_h)
        {
            s2.pop();
        }
        else
        {
            s3.pop();
        }
    }

}
