// /*
// // Sample code to perform I/O:

// #include <iostream>

// using namespace std;

// int main() {
//     int num;
//     cin >> num;										// Reading input from STDIN
//     cout << "Input number is " << num << endl;		// Writing output to STDOUT
// }

// // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// */

// // Write your code here
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// struct TreeNode
// {
//     string name;
//     int lockedBy;
//     bool isLocked;
//     vector<TreeNode *> childs;
//     TreeNode *parent;
//     set<TreeNode *> lockedDescentdents;

//     TreeNode(string nm, TreeNode *par)
//     {
//         name = nm;
//         lockedBy = -1;
//         parent = par;
//         isLocked = false;
//     }

//     void addChild(vector<string> &a)
//     {
//         for (string &nm : a)
//         {
//             childs.push_back(new TreeNode(nm, this));
//         }
//     }
// };

// struct MAryTree
// {
//     TreeNode *root;
//     unordered_map<string, TreeNode *> nameToTreeNodeMapping;
//     MAryTree(string name)
//     {
//         root = new TreeNode(name, nullptr);
//     }

//     void makeMArtTree(vector<string> &a, int m)
//     {
//         queue<TreeNode *> q;
//         int k = 1, i, n = a.size();
//         q.push(root);
//         while (!q.empty())
//         {
//             TreeNode *r = q.front();
//             q.pop();
//             nameToTreeNodeMapping[r->name] = r;
//             vector<string> b;
//             for (i = k; i < min(n, k + m); i++)
//             {
//                 b.push_back(a[i]);
//             }
//             r->addChild(b);
//             for (TreeNode *child : r->childs)
//             {
//                 q.push(child);
//             }
//             k = i;
//         }
//     }

//     void print(TreeNode *r)
//     {
//         if (!r)
//             return;
//         cout << "TreeNode ->" << r->name << " " << r->lockedBy << " " << "\n";
//         cout << "Childs => \n";
//         for (TreeNode *child : r->childs)
//         {
//             cout << "    " << child->name << "\n";
//         }
//         for (TreeNode *child : r->childs)
//         {
//             print(child);
//         }
//     }
//     void updateParents(TreeNode *r, TreeNode *curr)
//     {
//         while (r)
//         {
//             r->lockedDescentdents.insert(curr);
//             r = r->parent;
//         }
//     }
//     bool lock(string name, int id)
//     {
//         TreeNode *r = nameToTreeNodeMapping[name];
//         if (r->isLocked || r->lockedDescentdents.size())
//             return false;
//         TreeNode *par = r->parent;
//         while (par)
//         {
//             if (par->isLocked)
//                 return false;
//             ;
//             par = par->parent;
//         }
//         updateParents(r->parent, r);
//         r->isLocked = true;
//         r->lockedBy = id;
//         return true;
//     }

//     bool unlock(string name, int id)
//     {
//         TreeNode *r = nameToTreeNodeMapping[name];
//         if (!r->isLocked || r->lockedBy != id)
//             return false;
//         TreeNode *par = r->parent;
//         while (par)
//         {
//             par->lockedDescentdents.erase(r);
//             par = par->parent;
//         }
//         r->isLocked = false;
//         r->lockedBy = -1;
//         return true;
//     }
//     bool upgradeLocke(string name, int id)
//     {
//         TreeNode *r = nameToTreeNodeMapping[name];
//         if (r->isLocked || r->lockedDescentdents.size() == 0)
//             return false;
//         for (TreeNode *ld : r->lockedDescentdents)
//         {
//             if (ld->lockedBy != id)
//                 return false;
//         }
//         TreeNode *par = r->parent;
//         while (par)
//         {
//             par = par->parent;
//         }
//         set<TreeNode *> sett = r->lockedDescentdents;
//         for (TreeNode *ld : sett)
//         {
//             unlock(ld->name, id);
//         }
//         lock(name, id);
//         return true;
//     }
// };

// int main()
// {
//     int n, m, t, i, opType, id;
//     string name;
//     cin >> n >> m >> t;
//     vector<string> a(n);
//     for (i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     MAryTree *tree = new MAryTree(a[0]);
//     tree->makeMArtTree(a, m);

//     while (t--)
//     {
//         cin >> opType >> name >> id;
//         if (opType == 1)
//         {
//             if (tree->lock(name, id))
//             {
//                 cout << "true";
//             }
//             else
//                 cout << "false";
//         }
//         else if (opType == 2)
//         {
//             if (tree->unlock(name, id))
//             {
//                 cout << "true";
//             }
//             else
//                 cout << "false";
//         }
//         else if (opType == 3)
//         {
//             if (tree->upgradeLocke(name, id))
//             {
//                 cout << "true";
//             }
//             else
//                 cout << "false";
//         }
//         cout << "\n";
//     }
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    string name;
    int LockedBy;
    bool isLocked;
    vector<TreeNode *> childs;
    TreeNode *parents;
    set<TreeNode*> LockedDescendents;

    TreeNode(string nm, TreeNode *par){
        name = nm,
        LockedBy = -1;
        parents = par;
        isLocked = false;
    }

    void addChilds(vector<string> &a){
        for(string nm: a){
            childs.push_back(new TreeNode(nm, this));
        }
    }
};

int main()
{
    
    return 0;
}