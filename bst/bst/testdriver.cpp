#include <iostream>
#include"bst.h"

int main()
{
    std::cout << "Creation of the bst";

    int testdata[] = { 15,6,18,3,7,17,20,2,4,13,9};
    class ds::tree::bst bstTree;

    std::cout << "Insert the elements to the bst" << std::endl;
    for (int i = 0; i < sizeof(testdata) / sizeof(testdata[0]); i++)
    {
        bstTree.insert(testdata[i]);
    }

    std::cout << "Find if all the elements present" << std::endl;
    for (int i = 0; i < sizeof(testdata) / sizeof(testdata[0]); i++)
    {        
        if (ds::tree::status::FOUND != bstTree.search(testdata[i]))
        {
            std::cout << "Element not found" << std::endl;
        }
    }
    std::cout << "In order tree traversals" << std::endl;
    bstTree.treewalk(ds::tree::isOfType::INORDER);


    std::cout << "Pre order tree traversals" << std::endl;
    bstTree.treewalk(ds::tree::isOfType::PREORDER);


    std::cout << "Post order tree traversals" << std::endl;
    bstTree.treewalk(ds::tree::isOfType::POSTORDER);

    std::cout << "Max of the BST tree:"<< bstTree.max()<< std::endl;
    std::cout << "Min of the BST tree:" << bstTree.min() << std::endl;

    std::cout << "Test the succeossor of the tree" << std::endl;
    int key = 15;
    int successor = bstTree.successor(key);
    std::cout << "Successor of:" << key<< "is"<<successor << std::endl;
    if (17 != successor)
    {
        std::cout << "Successor Test :: Failed \n";
    }
    key = 13;
    successor = bstTree.successor(key);    
    std::cout << "Successor of:" << key << "is" << successor << std::endl;
    if (15 != successor)
    {
        std::cout << "Successor Test :: Failed \n";
    }


    key = 15;
    int predecessor = bstTree.predeccessor(key);
    std::cout << "Predecessor of:" << key << "is" << predecessor << std::endl;
    if (13 != predecessor)
    {
        std::cout << "Predecessor Test :: Failed \n";
    }
    key = 17;
    predecessor = bstTree.predeccessor(key);
    std::cout << "Predecessor of:" << key << "is" << predecessor << std::endl;
    if (15 != predecessor)
    {
        std::cout << "Predecessor Test :: Failed \n";
    }
    return 0;

    std::cout << "Delete the Nodes from the binary search tree" << std::endl;

}