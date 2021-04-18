class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // int count =0,min=201;
        // string str;
        // //finding the length of the min str.
        // for(int i=0;i<strs.size();i++){
        //     int len = strs[i].length();
        //     if(len<min){
        //         min = len;
        //         str = strs[i];
        //     }
        // }
        // for(int i=0;i<min;i++){
        //     for(int j=0;j<strs.size();j++){
        //         if(strs[j][i] != str[i]){
        //             return str.substr(0,count);
        //         }
        //     }
        //     count++;
        // }
        // return str.substr(0,count);
        if (strs.size() == 0)
        {
            return "";
        }
        if (strs.size() == 1)
        {
            return strs[0];
        }

        for (int i = 0; i < strs[0].size(); i++)
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[0][i] != strs[j][i])
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};