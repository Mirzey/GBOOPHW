#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

class RGBA
{
private:
    uint8_t m_red = 0;
    uint8_t m_green = 0;
    uint8_t m_blue = 0;
    uint8_t m_alpha = 255;
    public:
RGBA(uint8_t valuem_red, uint8_t valuem_green, uint8_t valuem_blue, uint8_t valuem_alpha)
   {
       m_red = valuem_red;
       m_green = valuem_green;
       m_blue = valuem_blue;
       m_alpha = valuem_alpha;
  }
    void Print()
    {
        cout << "result is " << m_red << m_green << m_blue << m_alpha << endl;

    }
};

int main()
{
RGBA color(10,10,10,10);
color.Print();

    return 0;
}
