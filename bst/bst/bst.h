#include<memory>
#pragma once
namespace ds
{
    namespace tree
    {
        enum class status { FAILED = -1, FOUND, SUCCESS };
        enum class isOfType { INORDER= -1, PREORDER, POSTORDER};
        class bstImpl;        

        class bst final
        {
        public:            
            bst();
            ~bst();
            bst(const bst&) = delete;
            bst& operator=(const bst&) = delete;
            bst(bst&&) = delete;
            bst& operator=(bst&&) = delete;

            status insert(int key);
            status del(int key);
            status search(int key) const;
            int min() const ;
            int max()const ;
            int predeccessor(int key) const;
            int successor(int key)const;

            void treewalk(isOfType val)const;

        private:
            std::unique_ptr<class bstImpl> m_pImpl;
        };
    }
}


