#ifndef BST_H
#define BST_H
#include <string>
#include <iostream>
using namespace std;
class BST
{
    private:
struct treeNode {
int key;
string value;
treeNode* right;
treeNode* left;
};
 treeNode* root;
 void addLeafPrivate (treeNode* t, int k , string s);
 void printTreePrivate(treeNode* t);
   treeNode* searchKeyPrivate(treeNode* t, int k);

    public:
        BST();
        treeNode* createNewLeaf (int k,string s);
        void addLeaf(int k , string s);
        void printTree();
        treeNode* searchKey(int k);
        string lookUp (int k);
        void modify (int k , string s);
         void Set(int k , string s);


};

#endif // BST_H
