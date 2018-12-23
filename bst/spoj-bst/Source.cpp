#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#define test
#include<iostream>
#include<vector>
#include <algorithm> 
#include <iterator>
class node
{
public:
    int m_data;
    node(int val) :m_data(val)
        , m_pLeft(nullptr)
        , m_pRight(nullptr)
    {
    }
    virtual ~node() = default;
    class node *m_pLeft;
    class node *m_pRight;    
};
template <class T>
class bstTree
{
public:
    bstTree() :
        m_pRoot(nullptr)
        , m_counter(0)
    {
    }
    ~bstTree() {}

    void insert(int key)
    {
        class node *pNode = new (std::nothrow) node(key);
        class node **parser = &m_pRoot;        

        if (!m_pRoot)
        {
            m_pRoot = pNode;
        }
        else
        {
            while (*parser != nullptr)
            {                
                if (pNode->m_data < (*parser)->m_data)
                {
                    parser = &(*parser)->m_pLeft;
                }
                else
                {
                    parser = &(*parser)->m_pRight;
                }
                m_counter++;
            }
            *parser = pNode;
        }
        m_printQ.push_back(m_counter);
    }
    void printAllCounterValues(void)
    {
        std::copy(m_printQ.begin(), m_printQ.end(), std::ostream_iterator<T>(std::cout, "\n"));
    }
private:
    class node *m_pRoot;
    T m_counter;
    std::vector<T> m_printQ;
};

int main(void)
{
#ifdef test    
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n, input = 0;
    scanf("%d", &n);
    class bstTree <long long int>bst;
    std::vector<int> intputQ;
    while (n--)
    {
        scanf("%d", &input);
        intputQ.push_back(input);        
    }

    for (const int i : intputQ)
    {
        bst.insert(i);
    }

    bst.printAllCounterValues();
#ifdef test
    fclose(stdout);
    fclose(stdin);
#endif   
    return 0;
}