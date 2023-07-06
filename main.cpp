#include <iostream>
#include "Tor.cpp"
#include "BinTree.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Rus");
    
    Tor A(3, 2), B(1, 2), C(1, 1), D(3, 4), E(2, 2);
    BinTree<Tor>* tree = nullptr; 
    tree = tree->Insert(tree, A);
    tree = tree->Insert(tree, B);
    tree = tree->Insert(tree, C);
    tree = tree->Insert(tree, D);
    tree = tree->Insert(tree, E);
    cout<<"Sort ascending:"<<endl;
    tree->print(tree, 0);//LKP ����
    cout<<"Sort descending:"<<endl;
    tree->print(tree, 1);//PKL ����
    tree->Delete(tree, E);
    cout<<"KLP"<<endl;
    tree->print(tree, -1);//KPL
    
    // cout<<tree->FindMax(tree) <<endl;
    // cout<< tree->FindMin(tree)<<endl;
    
    return 0;
}