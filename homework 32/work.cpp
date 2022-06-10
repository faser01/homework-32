#include <iostream>

    //long int Pow2(long int i);
    int count(int n);
    int BitIndex(char num, int index); 

int main(){
setlocale(LC_ALL, "Russian");

   /* unsigned a;
    std::cout << "Задача 1\nВведите число : ";
    std::cin >> a;
    std::cout << "2^" << a << " = "<< Pow2(a) << std::endl << std::endl;*/


    std::cout << "Задача 1\n";
    unsigned int a;
    std::cout << "Введите число: ";
    std::cin >> a;
    a--;
    unsigned int res = 2 << a;
    std::cout << "2^" << a + 1 << " = " << res << std::endl << std::endl;



    unsigned n;
    std::cout << "Задача 2\nВведите число: ";
    std::cin >> n;
    std::cout << "Количество '1' в двоичном виде = " << count(n) << std::endl;



   std:: cout << "\nЗадача 3\n";
    int m;
   std:: cout << "Введите число: ";
   std::cin >> m;
   std::cout << "Введите индекс искомого числа: ";
   std::cin >> n;
   std::cout << "Индекс " << n << " в числе " << m << " = " << BitIndex(m, n) <<std:: endl;
   
    
    return 0;
}
    int count(int n){
        int r = 0;
        while (n)
        {
            n &= (n - 1);
            ++r;
        }
        return r;
    }

    int BitIndex(char num, int index) {
        int res = 0;
        for (int i = 7; i >= 0; i--) {
            res += (num >> i & 1) * pow(10, i);
        }
        if (((num >> index) & 1) == 1)
            return 1;
        return 0;
    }

    //такой вариант решения, только он ограничен
    /*long int Pow2(long int i)
    {
        int ret = 1;

        for (int j = 0; j < i; j++)
        {
            ret <<= 1;
        }

        return ret;
    }*/

  