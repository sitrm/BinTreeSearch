#include <iostream>
#include "BinTree.hpp"

using namespace std;

int Test2Constr(int argc, char *argv[]) {
    
    BinTree<int> tree(13);
    BinTree<int>* treeptr = &tree;
    
    if(tree.Search(treeptr,13))
    {
    	return false;
    }
    else
    {
    	return true;
    }
    return 0;
}
