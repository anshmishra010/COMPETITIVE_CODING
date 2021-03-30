// void topView(Node * root) {
//         queue<pair<Node*, int>> Q;
//         int level =0;
//         Q.push(make_pair(root,level));
//         map<int,int> map_m;
//         while(!Q.empty()){
//             Node* temp = Q.front().first;
//             int temp_dist = Q.front().second ;
//             if(!map_m[temp_dist]){
//                 map_m[temp_dist] = temp->data;
//             }
//             if(temp->left != NULL) Q.push(make_pair(temp->left,temp_dist-1));
//             if(temp->right != NULL) Q.push(make_pair(temp->right, temp_dist+1));
//             Q.pop();
//         }
//         map<int,int>::iterator it;
//         for(it=map_m.begin();it!=map_m.end();it++){
//             cout<<it->second<<" ";
//         }
//     }
 //shorter version

 void topView(Node * root) {
     map<int,int> m;
     queue<pair<Node*,int>>q;
     if(!root) return;
     q.push({root,0});
     while(!q.empty()){
         Node* t = q.front().first;
         int h = q.front().second;
         q.pop();
         if(!m[h]) m[h] = t->data;
         if(t->left) q.push({t->left,h-1});if(t->right) q.push({t->right,h+1});
     }
     for(auto x:m) cout<<x.second<<" ";
 }