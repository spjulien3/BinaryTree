#include "bintree.h"
#include "build_tree.h"
#include <iostream>
using namespace std;

template <class T>
void printItem(T item)
{
    cout<<item<<" ";
}

int main() {
    binary_tree_node<int> *s1 = sample1();
    print(s1, 0);
    cout<<endl;    
    
    inorder(printItem<int>, s1);
    cout<<endl;    
        
    preorder(printItem<int>, s1);
    cout<<endl;    
        
    postorder(printItem<int>, s1);
    cout<<endl;    
    
    binary_tree_node<int> *s2 = sample2();
    print(s2, 0);
    cout<<endl;
    
    inorder(printItem<int>, s2);
    cout<<endl;    
        
    preorder(printItem<int>, s2);
    cout<<endl;    
        
    postorder(printItem<int>, s2);
    cout<<endl;   
    
/*    binary_tree_node<double> *s3 =sample3();
    print(s3, 0);
    cout<<endl;
    
    binary_tree_node<double> *s4 =sample4();
    print(s4, 0);
    cout<<endl;


    binary_tree_node<string> *s5 = sample5();
    print(s5, 0);
    cout<<endl;
     
    binary_tree_node<double> *s6 =sample_bal1();
    print(s6, 0);
    cout<<endl;
    
    binary_tree_node<double> *s7 =sample_bal2();
    print(s7, 0);
    cout<<endl;
*/
}
