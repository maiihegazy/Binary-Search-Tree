#include <iostream>
#include<BST.h>
#include<string>

using namespace std;

int main()
{
    cout << "                                  ***Binary Search Tree Project***        " << endl;
    cout << "                                    ***Data Structure Course***           " << endl;
    cout << "                                      **Mai Mahmoud Hegazy**              " << endl;
    cout << endl << endl;
    cout << "                This is a Binary Search Tree, its printing model is inorder traverse" << endl;
    cout << endl << endl;
    char con = 'y' , choise ;
    int k ;
    char insert='y';
    string s;
    BST b;

    while (con== 'y'|| con == 'Y')
    {
       cout << "Please enter (I) To add a new leaf." << endl;
       cout << "             (K) To check if a key is in the tree or not." << endl;
       cout << "             (L) To get a string attached to a key." << endl;
       cout << "             (M) To modify the string value attached to a key." << endl;
       cout << "             (S) To modifies the entry, and if not exist, it adds a new leaf." << endl;
       cout << "             (D) To display the tree." << endl << endl;
       cin  >> choise;
       switch (choise)
       {
        case ('i'):
          {insert ='y';
              while (insert == 'y'|| insert == 'Y')
          {
           cout << "Enter the key: ";
           cin >> k;
           cout << "Enter the string value for that key: ";
           cin >> s;
           b.addLeaf(k,s);
            cout << "Do you want to add another leaf (Y/N)?" ;
            cin >> insert ;
          }
          break;
          }
           case ('I'):
        {while (insert == 'y'|| insert == 'Y')
          {cout << "Enter the key: ";
           cin >> k;
           cout << "Enter the string value for that key: ";
           cin >> s;
           b.addLeaf(k,s);
            cout << "Do you want to add another leaf (Y/N)?" ;
          cin >> insert ;
          }
           break;
          }
       case ('k'):
          {cout << "Enter The Key: ";
           cin >> k;
           if (b.searchKey(k)!= NULL)
            cout << "         The Key " << k << " is Found" <<endl;
           else
            cout << "         The Key " << k << " is Not Found" <<endl;
           break;
          }
          case ('K'):
          {cout << "Enter The Key: ";
           cin >> k;
           if (b.searchKey(k)!= NULL)
            cout << "         The Key " << k << " is Found" <<endl;
           else
            cout << "         The Key " << k << " is Not Found" <<endl;
           break;
          }
       case ('l' ):
         {cout << "Enter the key: ";
          cin >> k;
          s = b.lookUp(k);
          cout << "         The string value of Key "<< k << " is " << s << endl;
          break;
         }
         case ('L' ):
         {cout << "Enter the key: ";
          cin >> k;
          s = b.lookUp(k);
          cout << "         The string value of Key "<< k << " is " << s << endl;
          break;
         }
       case ('m'):
        {cout << "Enter the key: ";
         cin >> k;
         cout << "Enter the string value for that key: ";
         cin >> s;
         b.modify(k,s);
         break;
        }
        case ('M'):
        {cout << "Enter the key: ";
         cin >> k;
         cout << "Enter the string value for that key: ";
         cin >> s;
         b.modify(k,s);
         break;
        }
       case ('s'):
        {cout << "Enter the key: ";
         cin >> k;
         cout << "Enter the string value for that key: ";
         cin >> s;
         b.Set(k,s);
         break;
        }
        case ('S'):
        {cout << "Enter the key: ";
         cin >> k;
         cout << "Enter the string value for that key: ";
         cin >> s;
         b.Set(k,s);
         break;
        }
       case ('d'):
        { cout << "         The binary search tree printed as inorder traverse " << endl;
          b.printTree();
          cout << endl;
          break;
        }
        case ('D'):
        { cout << "         The binary search tree printed as inorder traverse " << endl;
          b.printTree();
          cout << endl;
          break;
        }
       default:
        {
            cout << "         *You entered invalid choice, Please choose valid one!" << endl << endl;
             break;
        }
       }
       cout << "         Do you want to do another operation (Y/N)?" ;
       cin >> con;

    }

    return 0;
}
