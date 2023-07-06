#include <iostream>
#include "BinTree.hpp"

using namespace std;

int Test1Insert(int argc, char *argv[]) {
    BinTree<int>* tree = nullptr;
    tree = tree->Insert(tree, 1);
    tree = tree->Insert(tree, 2);
    tree = tree->Insert(tree, 3);
    tree = tree->Insert(tree, 4);
    if(tree->Search(tree, 1) && tree->Search(tree, 2) && tree->Search(tree, 3) && tree->Search(tree, 4)){
    	return false;
    }
    else {
    	return true;
    }
}
