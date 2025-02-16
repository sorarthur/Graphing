// Library for basic graph algorithms
#include <iostream>
#include <vector>

class basic_graphs
{
private:
    /* data */
    std::vector<int> V;
    std::vector<int> E;
public:
    basic_graphs(int n, int m);
    void printGraph();
    ~basic_graphs();
};

basic_graphs::basic_graphs(int n, int m)
{
    V.resize(n);
    E.resize(m);

    for (std::vector<int>::size_type i = 0; i < n; i++)
    {
        V[i] = i;
    }

    for (std::vector<int>::size_type i = 0; i < m; i++)
    {
        E[i] = i;
    }
}

void basic_graphs::printGraph(){
    std::vector<int>::size_type n = V.size();
    std::vector<int>::size_type m = E.size();
    for (std::vector<int>::size_type i = 0; i < n; i++)
    {
        std::cout << V[i] << " ";
    }
    std::cout << std::endl;

    for (std::vector<int>::size_type i = 0; i < m; i++)
    {
        std::cout << E[i] << " ";
    }
    std::cout << std::endl;
}

basic_graphs::~basic_graphs()
{
}

int main()
{
    basic_graphs bg(5, 10);

    bg.printGraph();
    return 0;
}
