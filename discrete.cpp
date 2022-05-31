#include <iostream>
int SIZE = 5;
void insert_size(int& m, int& n)
{
    m = 0;
    n = 0;

    while ((n <= 0) && (m <= 0))
    {
        std::cout << "Insert m ";
        std::cin >> m;
        std::cout << "Insert n ";
        std::cin >> n;
    }
}

bool check_size(const int n, const int m)
{
    if ((m % SIZE == 0) && (n % SIZE == 0))
    {
        return true;
    }
    if ((m % SIZE == 1) && (n % SIZE == 1))
    {
        return true;
    }
    if ((m % SIZE == 2) && (n % SIZE == 4))
    {
        return true;
    }
    if ((m % SIZE == 4) && (n % SIZE == 2))
    {
        return true;
    }
    return false;
}
void horizontal_5(const int x, const int y, const int count)
{
    for (int i = 0; i < count; ++i)
    {
        int j = 0;
        for (int j = 0; j <= SIZE; ++j)
        {
            if (j && j % SIZE == 0)
            {
                std::cout << "(" << i + x << ", " << j + y << ")\n";
                
            }
            else
            {

                std::cout << "(" << i + x << ", " << j + y << ") ->";
            }
        }
        
        
    }
}
void vertical_5(const int x, const int y, const int count)
{
    for (int i = 0; i < count; ++i)
    {
        for (int j = 0; j <= SIZE; ++j)
        {
            if (j && j % SIZE == 0)
            {
                std::cout << "(" << j + x << ", " << i + y << ")\n";

            }
            else
            {

                std::cout << "(" << j + x << ", " << i + y << ") ->";
            }
        }


    }

}
void fill_horiz(const int m, const int n)
{
    int i = 0;
    int j = 0;

    while (j <= n - SIZE)
    {
        horizontal_5(i, j, m);
        j += 5;
    }

}
void fill_vertic(const int m, const int n)
{
    int i = 0;
    int j = 0;

    while (i <= m - SIZE)
    {
        vertical_5(i, j, n);
        i += 5;
    }

}
void horiz_mod0(const int m, const int n)
{
    for (int i = 0; i < m - 1; ++i)
    {
        std::cout << "(" << i << ", " << n - 5 << ") ->";
        std::cout << "(" << i << ", " << n - 4 << ") ->";
        std::cout << "(" << i << ", " << n - 3 << ") ->";
        std::cout << "(" << i << ", " << n - 2 << ") ->";
        std::cout << "(" << i << ", " << n - 1 << ") ->";
        std::cout << "(" << i + 1 << ", " << n - 1 << ")\n";
    }
}
void vertical_mod0(const int m, const int n)
{
   for (int i = 0; i < n - 1; ++i)
    {
        std::cout << "(" << m - 5 << ", " << i << ") ->";
        std::cout << "(" << m - 4 << ", " << i << ") ->";
        std::cout << "(" << m - 3 << ", " << i << ") ->";
        std::cout << "(" << m - 2 << ", " << i << ") ->";
        std::cout << "(" << m - 1 << ", " << i << ") ->";
        std::cout << "(" << m - 1 << ", " << i + 1 << ")\n";
    }
}
void mod0(const int m, const int n)
{
    int k = m != SIZE ? m / SIZE : 0;
    int p = n != SIZE ? n / SIZE : 0;
    int i, j;
    
    if (p != 0)
    {
        i = 0;
        j = 0;

        while (j < n - SIZE)
        {
            horizontal_5(i, j, m - 1);
            j += 5;
        }
    }
    if (k != 0)
    {
        i = 0;
        j = 0;

        while (i < m - SIZE)
        {
            vertical_5(i, j, n - 1);
            i += 5;
        }
    }
    horiz_mod0(m, n);
    vertical_mod0(m, n);
}
void mod1(const int m, const int n)
{
    fill_horiz(m, n);
    fill_vertic(m, n);
}

int main()
{
    int m, n;
    insert_size(m, n);
    if (!check_size(m, n))
    {
        std::cout << "Wrong size can not be covered \n";
        return 0;
    }
     
    switch (m % 5)
    {
        case 0:
            mod0(m, n);
            break;
        case 1:
            mod1(m, n);
            break;
        case 2:
            break;
        case 4:
            break;
        default:

            break;

    }
    return 0;
}


