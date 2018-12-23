#include<iostream>
#include "bst.h"
#include <memory>
using namespace std;

namespace ds
{
    namespace tree
    {   
        enum class direction {Right, Left};
        class node
        {            
        public:            
            int m_data;
            node(int val) :m_data(val)
                                , m_pLeft(nullptr)
                                , m_pRight(nullptr)
                                , m_pParent(nullptr)
                                , m_pSuccesor(nullptr)
            {
            }
            virtual ~node() = default;
            class node *m_pLeft;
            class node *m_pRight;
            class node *m_pParent;  //Will work on it later
            class node *m_pSuccesor;   //Will work on it later        
            
        };

        class bstImpl final
        {
        public:
            bstImpl() :m_pRoot(nullptr)
            {
            };
            ~bstImpl() = default;
            bstImpl(const bst&) = delete;
            bstImpl& operator=(const bstImpl&) = delete;
            bstImpl(bstImpl&&) = delete;
            bstImpl& operator=(bstImpl&&) = delete;

            status insert(int key);
            void   treewalk(ds::tree::isOfType val);
            status search(int key);

            int min();
            int max();
            int predecessor(int key);
            int successor(int key);

            status del(int key);

        private:
            class node *m_pRoot;  

            int internal_max(class node *parser);
            node * find(int key);
            int internal_min(class node *parser);

            void inOrder(class node *ptr);
            void preOrder(class node *ptr);
            void postOrder(class node *ptr); 
        };

        status bstImpl::insert(int key) 
        {
            status  st = status::FAILED;
            class node *pNode     = new (std::nothrow) node(key);
            class node **parser   = nullptr;
            class node *Predcesor = nullptr;
            if (pNode)
            {
                parser  = &m_pRoot;                
                while (*parser != nullptr)
                {   
                    Predcesor = *parser;
                    if (pNode->m_data < (*parser)->m_data )
                    {
                        parser = &(*parser)->m_pLeft;
                    }
                    else
                    {
                        parser = &(*parser)->m_pRight;
                    }                    
                }
                if (Predcesor)
                {   
                    pNode->m_pParent = Predcesor;
                    *parser = pNode;
                }
                else
                {                    
                    m_pRoot = pNode;
                }
                st = status::SUCCESS;
            }
            return st;
        }

        void bstImpl::treewalk(ds::tree::isOfType val)
        {
            switch (val)
            {
            case ds::tree::isOfType::INORDER:
                if(m_pRoot) 
                    inOrder(m_pRoot);
                break;
            case ds::tree::isOfType::PREORDER:
                if (m_pRoot)
                    preOrder(m_pRoot);
                break;
            case ds::tree::isOfType::POSTORDER:
                if (m_pRoot)
                    postOrder(m_pRoot);
                break;
            }
        }

        status bstImpl::search(int key)
        {
            status s = status::FAILED;
            class node *parser = m_pRoot;
            while (parser)
            {
                if (key == parser->m_data)
                {
                    s = status::FOUND;
                    break;
                }
                else if (key < parser->m_data)
                {
                    parser = parser->m_pLeft;
                }
                else
                {
                    parser = parser->m_pRight;
                }
            }
            return s;
        }
        int bstImpl::min()
        {
            return internal_min(m_pRoot);
        }

        int bstImpl::internal_min(class node *parser)
        {            
            while (parser)
            {
                if (parser->m_pLeft == nullptr)
                {
                    return parser->m_data;
                }
                else
                {
                    parser = parser->m_pLeft;
                }
            }
            return 0;
        }

        int bstImpl::max()
        {
            return internal_max(m_pRoot);
        }

        int bstImpl::internal_max(class node *parser)
        {            
            while (parser)
            {
                if (parser->m_pRight == nullptr)
                {
                    return parser->m_data;
                }
                else
                {
                    parser = parser->m_pRight;
                }
            }
            return 0;
        }

        class node* bstImpl::find(int key)
        {            
            class node *parser = m_pRoot;
            while (parser)
            {
                if (key == parser->m_data)
                {                    
                    break;
                }
                else if (key < parser->m_data)
                {
                    parser = parser->m_pLeft;
                }
                else
                {
                    parser = parser->m_pRight;
                }
            }
            return parser;
        }

        int bstImpl::successor(int key)
        {
            class node *x = find(key);
            if (x)
            {
                if (x->m_pRight != nullptr)
                {
                    return internal_min(x->m_pRight);
                }

                class node *y = x->m_pParent;

                while (y && x == y->m_pRight)
                {
                    x = y;
                    y = x->m_pParent;
                }
                return y->m_data;
            }
            return 0;
        }

        int bstImpl::predecessor(int key)
        {
            class node *x = find(key);
            if (x)
            {
                if (x->m_pLeft != nullptr)
                {
                    return internal_max(x->m_pLeft);
                }

                class node *y = x->m_pParent;

                while (y && x == y->m_pLeft)
                {
                    x = y;
                    y = x->m_pParent;
                }
                return y->m_data;
            }
            return 0;            
        }

        /*
         case 1:
        */

        bool haveChildern(class node *pNode)
        {
            return (pNode->m_pLeft == nullptr && pNode->m_pRight == nullptr);
        }

        void removeNode(class node *parent,int key)
        {
            if (parent->m_pLeft->m_data == key)
            {
                delete parent->m_pLeft;
                parent->m_pLeft = nullptr;
            }
            else
            {
                delete parent->m_pRight;
                parent->m_pRight = nullptr;
            }
        }

        enum  class  direction getdirection(class node *ptr,int key)
        {
            if (ptr->m_pLeft->m_data == key)
            {
                return direction::Left;
            }
            else
            {
                return direction::Right;
            }
        }


        status bstImpl::del(int key)
        {
            class node *nodeTobeDeleted = m_pRoot;

            //Find the node which has to be deleted
            while (nodeTobeDeleted)
            {                
                if (key == nodeTobeDeleted->m_data)
                {
                    break;
                }
                else if (key < nodeTobeDeleted->m_data)
                {                    
                    nodeTobeDeleted = nodeTobeDeleted->m_pLeft;
                }
                else
                {                    
                    nodeTobeDeleted = nodeTobeDeleted->m_pRight;
                }
            }

            if (true == haveChildern(nodeTobeDeleted))
            {
                removeNode(nodeTobeDeleted->m_pParent,key);
            }
            else
            {
                if (nodeTobeDeleted->m_pLeft == nullptr &&  nodeTobeDeleted->m_pRight)
                {
                    class node *tmp = nodeTobeDeleted->m_pRight;
                    if (direction::Left == getdirection(nodeTobeDeleted->m_pParent, key))
                    {
                        nodeTobeDeleted->m_pParent->m_pLeft = tmp;
                    }
                    else
                    {
                        nodeTobeDeleted->m_pParent->m_pRight = tmp;
                    }
                }
                else if(nodeTobeDeleted->m_pLeft &&  nodeTobeDeleted->m_pRight == nullptr)
                {
                    class node *tmp = nodeTobeDeleted->m_pLeft;
                    if (direction::Left == getdirection(nodeTobeDeleted->m_pParent, key))
                    {
                        nodeTobeDeleted->m_pParent->m_pLeft = tmp;
                    }
                    else
                    {
                        nodeTobeDeleted->m_pParent->m_pRight = tmp;
                    }
                }
                else
                {


                }
            }
                
        

            return status();
        }

        void bstImpl::inOrder(class node *ptr)
        {
            if (ptr)
            {
                this->inOrder(ptr->m_pLeft);
                std::cout << "key:" << ptr->m_data<<std::endl;
                this->inOrder(ptr->m_pRight);
            }
        }

        void bstImpl::preOrder(class node *ptr)
        {
            if (ptr)
            {                
                std::cout << "key:" << ptr->m_data << std::endl;
                this->preOrder(ptr->m_pLeft);
                this->preOrder(ptr->m_pRight);
            }
        }

        void bstImpl::postOrder(node * ptr)
        {
            if (ptr)
            {                
                this->postOrder(ptr->m_pLeft);
                this->postOrder(ptr->m_pRight);
                std::cout << "key:" << ptr->m_data << std::endl;
            }
        }

/*The code definition for the external interface*/
        bst::bst():m_pImpl(make_unique<class bstImpl>())
        {
        }
        bst::~bst()
        {
        }
        status bst::insert(int key)
        {
            return (m_pImpl) ? m_pImpl->insert(key) : status::FAILED;
        }
        status bst::del(int key)
        {
            return (m_pImpl) ? m_pImpl->del(key) : status::FAILED;            
        }
        status bst::search(int key) const
        {            
            return (m_pImpl) ? m_pImpl->search(key) : status::FAILED;
        }
        int bst::min() const
        {
            return (m_pImpl) ? m_pImpl->min() : 0;
        }
        int bst::max() const
        {
            return (m_pImpl)? m_pImpl->max() : 0;
        }
        int bst::successor(int key) const
        {
            return (m_pImpl) ? m_pImpl->successor(key) : 0;
        }
        int bst::predeccessor(int key) const
        {
            return (m_pImpl) ? m_pImpl->predecessor(key) : 0;
        } 
        void bst::treewalk(isOfType val) const
        {
            if (m_pImpl)
                m_pImpl->treewalk(val);
        }
    }
}

