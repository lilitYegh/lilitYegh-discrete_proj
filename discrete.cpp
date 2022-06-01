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
void mod1(const int m, const int n)
{
    fill_horiz(m, n);
    fill_vertic(m, n);
}

void mod2_min(const int x, const int y)
{
    std::cout << "(" << 0 + x << ", " << 2 + y << ") ->";
    std::cout << "(" << 1 + x << ", " << 2 + y << ") ->";
    std::cout << "(" << 1 + x << ", " << 1 + y << ") ->";
    std::cout << "(" << 1 + x << ", " << 0 + y << ") ->";
    std::cout << "(" << 0 + x << ", " << 0 + y << ") ->";
    std::cout << "(" << 0 + x << ", " << 1 + y << ")\n";

    std::cout << "(" << 1 + x << ", " << 1 + y << ") ->";
    std::cout << "(" << 0 + x << ", " << 1 + y << ") ->";
    std::cout << "(" << 0 + x << ", " << 2 + y << ") ->";
    std::cout << "(" << 0 + x << ", " << 3 + y << ") ->";
    std::cout << "(" << 1 + x << ", " << 3 + y << ") ->";
    std::cout << "(" << 1 + x << ", " << 2 + y << ")\n";
}

void mod4_min(const int x, const int y)
{
    std::cout << "(" << 2 + x << ", " << 0 + y << ") ->";
    std::cout << "(" << 2 + x << ", " << 1 + y << ") ->";
    std::cout << "(" << 1 + x << ", " << 1 + y << ") ->";
    std::cout << "(" << 0 + x << ", " << 1 + y << ") ->";
    std::cout << "(" << 0 + x << ", " << 0 + y << ") ->";
    std::cout << "(" << 1 + x << ", " << 0 + y << ")\n";

    std::cout << "(" << 1 + x << ", " << 1 + y << ") ->";
    std::cout << "(" << 1 + x << ", " << 0 + y << ") ->";
    std::cout << "(" << 2 + x << ", " << 0 + y << ") ->";
    std::cout << "(" << 3 + x << ", " << 0 + y << ") ->";
    std::cout << "(" << 3 + x << ", " << 1 + y << ") ->";
    std::cout << "(" << 2 + x << ", " << 1 + y << ")\n";
}

void mod2_horiz(const int m, const int n)
{
    int k = (m % SIZE) == 2 ? m / SIZE : 0;
    if (k != 0)
    {
        int i = 0;
        int j = n - 3;

        while (i < m - SIZE)
        {
            vertical_5(i, j, 2);
            i += 5;
        }
    }
    for (int i = 0; i < m - 2; ++i)
    {
        std::cout << "(" << i + 1 << ", " << n - 4 << ") ->";
        std::cout << "(" << i << ", " << n - 4 << ") ->";
        std::cout << "(" << i << ", " << n - 3 << ") ->";
        std::cout << "(" << i << ", " << n - 2 << ") ->";
        std::cout << "(" << i << ", " << n - 1 << ") ->";
        std::cout << "(" << i + 1 << ", " << n - 1 << ")\n";
    }
}

void mod4_vertical(const int m, const int n)
{
    int p = (n % SIZE) == 2 ? n / SIZE : 0;
    if (p != 0)
    {
        int i = m - 3;
        int j = 0;

        while (j < n - SIZE)
        {
            horizontal_5(i, j, 2);
            j += 5;
        }
    }
    for (int i = 0; i < n - 2; ++i)
    {
        std::cout << "(" << m - 4 << ", " << i + 1 << ") ->";
        std::cout << "(" << m - 4 << ", " << i << ") ->";
        std::cout << "(" << m - 3 << ", " << i << ") ->";
        std::cout << "(" << m - 2 << ", " << i << ") ->";
        std::cout << "(" << m - 1 << ", " << i << ") ->";
        std::cout << "(" << m - 1 << ", " << i + 1 << ")\n";
    }
}

void mod2(const int m, const int n)
{
    if (m == 2 && n == 4)
    {
        mod2_min(0, 0);
    }
    int k = m != SIZE ? m / SIZE : 0;
    int p = n != SIZE ? n / SIZE : 0;
    int i, j;

    if (p != 0)
    {
        i = 0;
        j = 0;

        while (j < n - SIZE)
        {
            horizontal_5(i, j, m - 2);
            j += 5;
        }
    }
    if (k != 0)
    {
        i = 0;
        j = 0;

        while (i < m - SIZE)
        {
            vertical_5(i, j, n - 4);
            i += 5;
        }
    };
    mod2_horiz(m, n);
    mod2_min(m - 2, n - 4);
}

void mod4(const int m, const int n)
{
    if (m == 4 && n == 2)
    {
        mod4_min(0, 0);
    }
    int k = m != SIZE ? m / SIZE : 0;
    int p = n != SIZE ? n / SIZE : 0;
    int i, j;

    if (p != 0)
    {
        i = 0;
        j = 0;

        while (j < n - SIZE)
        {
            horizontal_5(i, j, m - 4);
            j += 5;
        }
    }
    if (k != 0)
    {
        i = 0;
        j = 0;

        while (i < m - SIZE)
        {
            vertical_5(i, j, n - 2);
            i += 5;
        }
    }

    mod4_vertical(m, n);
    mod4_min(m - 4, n - 2);
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
            mod2(m, n);
            break;
        case 4:
            mod4(m, n);
            break;
    }
    return 0;
}
