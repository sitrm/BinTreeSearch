#include <iostream>
#include "BinTree.hpp"

using namespace std;

int Test5Empty(int argc, char *argv[]) {
    
    //BinTree<int> tree;
    BinTree<int>* treeptr;
    if(treeptr->is_empty(treeptr))
    {
	return false;
    }
    else {
    	return true;
    }
    
    
}
