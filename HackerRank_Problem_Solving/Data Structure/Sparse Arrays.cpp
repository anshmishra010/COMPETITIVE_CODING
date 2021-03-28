// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    
    vector<int> result;
    int count;
    int j;
    int qsize = queries.size();
    int ssize = strings.size();
    for(int i=0;i<qsize;i++)
    {
        count =0;
        j=0;
        while(j<ssize)
        {
            if(queries[i] == strings[j])
            {
                count++;
            }
            j++;
        }
        result.push_back(count);
    }
    return  result;


}
