#include "BST.h"

BST::BST()
{
    root = NULL;
}


BST::treeNode* BST:: createNewLeaf (int k,string s)
{
    treeNode* newNode = new treeNode();
    newNode->key=k;
    newNode->value=s;
    newNode->right=NULL;
    newNode->left=NULL;
    return newNode;
}
void BST:: addLeaf(int k , string s)
{
    addLeafPrivate(root , k , s);
}
void BST:: printTree()
{
    printTreePrivate(root);
}
BST:: treeNode* BST:: searchKey(int k)
{
 return searchKeyPrivate(root , k);
}
string BST:: lookUp (int k)
    {
        if (searchKey(k)!=NULL)
        return (searchKey(k))->value;
        else
        return "not Found";
    }
    void BST:: modify (int k , string s)
    {
        if (searchKey(k)!=NULL)
        {(searchKey(k))->value = s;
        cout << "The new string value of key " << k << " is " << s <<endl;
        }
        else
        cout << "The string value of key " << k << " is not Found"<<endl;

    }
    void BST:: Set(int k , string s)
    {
        if (searchKey(k)!=NULL)
           {
               modify(k,s);
               cout << " You Modified the string value attached to Key " << k << " with " << s <<endl;  }
        else
           {
            addLeaf(k,s);
            cout << " You added a new Key " << k << " with string value " << s <<endl;
           }
    }
 void BST::addLeafPrivate (treeNode* t, int k , string s)
    {
        if (searchKey(k)==NULL){
        if(root==NULL)
            root = createNewLeaf(k,s);
        else if (k<t->key)
        {
            if(t->left != NULL)
                addLeafPrivate(t->left, k , s);
            else
                t->left = createNewLeaf(k,s);
        }
        else if (k>t->key)
        {
            if (t->right != NULL)
                addLeafPrivate(t->right,k,s);
            else
                t->right = createNewLeaf(k,s);
        }
        }
        else
            cout << "The Key " << k <<" is already exist. Can not add this new leaf you can modify its string value" << endl;
    }
    void BST:: printTreePrivate(treeNode* t)
    {
        if(root != NULL)
        {   cout <<"[";
            if (t->left != NULL)
            {
                printTreePrivate(t->left);
            }
            cout <<"[" <<t->key << ":" << "\"" << t->value << "\","<<"]" ;
            if (t->right != NULL)
            {
                printTreePrivate(t->right);
            }
            cout <<"]" ;
        }
        else
            cout << "The Tree is Empty" << endl;
    }
BST :: treeNode* BST:: searchKeyPrivate(treeNode* t, int k)
    {
        if(t != NULL)
        {
            if(k == t->key)
            {

                return t;

            }
            else if (k < t->key)
            {
                return searchKeyPrivate(t->left , k);
            }
            else
            {
                return searchKeyPrivate(t->right , k);
            }
        }
        else
            return NULL;

    }
