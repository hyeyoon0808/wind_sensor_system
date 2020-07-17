#include "BST.h"
#include<string>
#include<iostream>


using namespace std;
void Test1(BST<int>bst);
void Test2(BST<int>bst);
void Test3(BST<int>bst);
void printNode(int &node);

/*
int main()
{
    BST<int>bst;

    cout<<"BST testing:"<<'\n'<<endl;
    Test1(bst);
    Test2(bst);
    Test3(bst);


}*/

void Test1(BST<int>bst)
{
    cout<<"<Test 1>"<<endl;
    cout<<"Check if insert function works"<<endl;
        bst.Insert(1);
        bst.Insert(3);
        bst.Insert(8);
        bst.Insert(5);
        bst.InorderTraversal(printNode);


}

void Test2(BST<int>bst)
{
    cout<<"<Test 2>"<<endl;
    cout<<"Check if preorder function works"<<endl;
        bst.Insert(1);
        bst.Insert(3);
        bst.Insert(8);
        bst.Insert(5);
        bst.PreorderTraversal();

}

void Test3(BST<int>bst)
{
    cout<<"<Test 3>"<<endl;
    cout<<"Check if postorder function works"<<endl;
        bst.Insert(1);
        bst.Insert(3);
        bst.Insert(8);
        bst.Insert(5);
        bst.PostorderTraversal();

}

void printNode(int &node)
{

    cout<<node<<" ";
}
