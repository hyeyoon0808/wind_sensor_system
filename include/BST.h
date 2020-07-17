#ifndef BST_H
#define BST_H
#include "WindLog.h"
#include <vector>
#include <cstddef>
#include <string>
#include <iostream>

using namespace std;

template <class T>
struct node{
    T d;
    node <T> *left;
    node <T> *right;
};

template <class T>
class BST
{
    public:
        public:
        /** @brief Default constructor
         *
         */
        BST();
        /**
         * @brief destructor
         */
        ~BST();
        /**
         * @brief initializes BST
         * @param BST ->bst
         */
        BST(const BST &bst);
        /**
         * @brief inserts data into bst
         * @param T->d
         */
        void Insert(T d);
        /**
         * @brief searches data from bst
         * @param T->d
         */
        bool Search(T d);
        /**
         * @brief inorder the tree
         * @param call pointer function from main
         */
        void InorderTraversal(void(*pointer)(T&));
        /**
         * @brief preorder the tree
         * @param call preorder function
         */
        void PreorderTraversal();
        /**
         * @brief postorder the tree
         * @param call postorder function
         */
        void PostorderTraversal();

    protected:

    private:
        /**
         * @brief initializes node<T>
         * @param node<T> -> root
         */
        node<T> *root;
        /**
         * @brief copies data from BST
         * @param node<T>->root, node<T> -> newRoot
         */
        void Copy(node<T> *root, node<T> *newRoot);
        /**
         * @brief inserts data into BST
         * @param node<T>->newNode, node<T> -> Root
         */
        void Insert(node<T> *newNode, node<T> *root);
        /**
         * @brief searches data from BST
         * @param node<T>->newNode, node<T> -> Root
         */
        bool Search(node<T> *newNode, node<T> *root);
        /**
         * @brief inorder data from BST
         * @param node<T>->root, pointer function
         */
        void Inorder(node<T> *root, void(*pointer)(T&));
        /**
         * @brief preorder data from BST
         * @param node<T>->root
         */
        void Preorder(node<T> *root);
        /**
         * @brief postorder data from BST
         * @param node<T>->root
         */
        void Postorder(node<T> *root);

};
template <class T>
BST <T> :: BST()
{
    root = NULL;//CTOR

}
template <class T>
BST<T> ::~BST()
{
    //DTOR+++
}


template<class T>
BST<T>::BST(const BST &bst)
{
    if(bst.root == NULL){
        root = NULL;
    }
    else{
         Copy(this->root, bst.root);
    }
}

template<class T>
void BST<T>::Copy(node<T> *root, node<T> *newRoot)
{
    if(newRoot==NULL){
        root = NULL;
    }
    else{
        root = new node<T>;
        root->d = newRoot->d;
        Copy(root->left, newRoot->left);
        Copy(root->right, newRoot->right);
    }
}

template <class T>
void BST<T>::Insert(T data)
{
    node<T> *newNode = new node<T>();
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->d = data;

    if (root==NULL)
    {
        root = newNode;
    }
    else
    {
        Insert(newNode, root);
    }
}
template <class T>
void BST<T>::Insert(node <T> *newNode, node <T> *root)
{

    if ((newNode->d) <= (root->d))
    {
        if ((root->left) == NULL)
        {
            root->left = newNode;
        }
        else
        {
            Insert(newNode, root->left);
        }
    }
    else
    {

        if ((root->right) == NULL)
        {
            root->right = newNode;
        }
        else
        {
            Insert(newNode, root->right);
        }
    }
}

template <class T>
bool BST<T>::Search(T data)
{
    node<T> *searchNode = new node<T>();
    searchNode->d = data;
    bool found = false;

    if (root==NULL){
        return false;
    }
    else
    {
        while(root != NULL && !found)
        {
           return Search(searchNode, root);
        }
    }
}

template <class T>
bool BST<T>::Search(node <T> *searchNode, node<T> *root)
{
    if((root->d) == (searchNode->d))
    {
        return true;
    }
    else if ((searchNode->d) <= (root->d))
    {
        if ((root->left) == NULL)
        {
            return false;
        }
        else
        {
            return Search(searchNode, root->left);
        }
    }
    else if((searchNode->d) > (root->d))
    {
        if ((root->right) == NULL)
        {
            return false;
        }
        else
        {
            return Search(searchNode, root->right);
        }
    }
    return false;
}

template <class T>
void BST<T>::InorderTraversal(void(*pointer)(T&))
{
    Inorder(root, pointer);
}

template <class T>
void BST<T>::Inorder(node<T> *root, void(*pointer)(T&))
{
    if(root->left != NULL){
        Inorder(root->left, pointer);
    }

    pointer(root->d);
    //cout<<root->d<<" ";

    if(root->right != NULL){
        Inorder(root->right, pointer);
    }
}

/*
template <class T>
void BST<T>::copyByDate(void(*pointer)(T&))
{
    Inorder(root, pointer);
}

template <class T>
void BST<T>::copyByDate(node<T> *root, Date d, void(*pointer)(T&))
{
    if(root->left != NULL){
        Inorder(root->left, pointer);
    }

    pointer(root->d);
    //cout<<root->d<<" ";

    if(root->right != NULL){
        Inorder(root->right, pointer);
    }
}
*/


template <class T>
void BST<T>::PreorderTraversal()
{
    Preorder(root);
}
template <class T>
void BST<T>::Preorder(node <T> *root)
{
    cout<<root->d<<" ";

    if(root->left != NULL){
       Preorder(root->left);
    }

    if(root->right != NULL){
        Preorder(root->right);
    }
}
template <class T>
void BST<T>::PostorderTraversal()
{
    Postorder(root);
}
template <class T>
void BST<T>::Postorder(node<T> *root)
{
    if(root->left != NULL){
        Postorder(root->left);
    }

    if(root->right != NULL){
        Postorder(root->right);
    }

    cout<<root->d<<" ";
}

#endif // BST_H
