#include <fstream>

// 5x5 blocks
namespace letterPrints
{
void A(std::ofstream& image)
{
    for (int i = 0; i < 5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(i == 1 && j == 2 ||
               i == 2 && j == 1 ||  i == 2 && j == 3 ||
                i == 3 && j == 1 || i == 3 && j == 2  || i == 3 && j == 3 ||
                i == 4 && j == 0 ||  i == 4 && j == 4)
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else

            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
    }
}

void B(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(i == 0 && j==1 || i == 0 && j==2 ||
                i==1 && j==1 || i==1 && j ==3 ||
                i==2 && j == 1 || i == 2 && j ==2 ||
                i == 3 && j == 1 || i == 3 && j == 3 ||
                i == 4 && j == 1 || i == 4 && j==2)
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}


void C(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(i==0 && j==1 || i == 0 && j ==2 ||
                i == 1 && j == 0 || i == 1 && j ==3 ||
                i == 2 && j == 0 ||
                i == 3 && j == 0 || i == 3 && j==3 ||
                i == 4 && j == 1 || i == 4 && j ==2)
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}

void D(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(j==0 ||
                i == 0 && j==2 || i == 0&& j==1 ||
             i==1 && j ==3  ||
             i == 2 && j ==3 ||
             i == 3 && j == 3 ||
            i == 4 && j==1 || i==4 && j==2)
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}


void E(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if (j == 1 ||
                i == 0 && j == 2 || i == 0 && j==3 ||
                i == 2 && j==2  ||
                i == 4 && j == 2 || i == 4 && j==3)
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}


void F(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(j == 1 ||
                i == 0 && j == 2 || i == 0 && j==3 ||
                i == 2 && j==2
                )
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}

void G(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(i==0 && j == 1 || i == 0 && j==2 || i==0 && j==3 ||
                i==1 && j ==0 ||
                i == 2 && j == 0 || i == 2 && j==2 || i ==2 && j==3 ||
                i == 3 && j == 0 || i == 3 && j == 3 ||
                i == 4 && j == 1 || i == 4 && j ==2
                )
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}

void H(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(j%5 == 1 ||
                j %5== 3 ||
                    j%5 == 2 && i == 2
                )
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}

void I(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(j%5 == 3
                )
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}

void J(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(j%5 == 2 && i%5 != 4 || i%5 == 4 && j%5 == 1
                    || j%5 == 0 && i%5 == 3
                )
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}

void K(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(j%5 == 1 || i%5 == 0 && j%5 == 4
                    || j%5 == 3 && i%5 == 1||
                     j%5 == 3 && i%5 == 3 ||
                     j%5 == 4 && i%5 == 4 || j%5==2 && i==2
                )
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}

void L(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(j%5 == 1 ||
                    i%5==4 && j%5 >=2 && j%5!=4
                )
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}

void M(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(j%5 == 0 || j%5 == 4
                  || (j%5 == 2 && i%5 == 2) ||
                    j%5 == 1 && i%5 == 1 ||
                    j%5 == 3 && i%5 == 1
                )
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}
void N(std::ofstream& image)
{
    for (int i = 0;i<5;i++)
    {
        for(int j=0;j<255;j++)
        {
            if(j%5 == 0 || j%5 == 4
                  || (j%5 == 2 && i%5 == 2) ||
                    j%5 == 1 && i%5 == 1 ||
                    j%5 == 3 && i%5 == 3
                )
            {
                image << "0 "<< "0 " << "0" << std::endl;
            }
            else
            {
                image << "255 "<< "255 " << "255" << std::endl;
            }
        }
     }
}
}
