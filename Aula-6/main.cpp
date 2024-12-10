#include <iostream>

int main(){
    //declaração de ponteiro sem inicialização
   int *ptr1;
   float *ptr2;

   std::cout << "Enderço de ptr1: " << &ptr1 << std::endl;
   std::cout << "Valor de ptr1: " << ptr1 << std::endl;
   std::cout << "Conteudo de ptr1: " << *ptr1 << std::endl;
   std::cout << "-----------------------------" << std::endl; 

    //declaração com incialização
   int *ptr3 = nullptr;
   
   float x = 5.;
   float *ptr4 = &x;

   std::cout << "Valor de x: " << x << std::endl;

   *ptr4 = 51.;

   std::cout << "Endereço de pt3: " << &ptr3 << std::endl;
   std::cout << "Valor de pt3: " << ptr3 << std::endl;
   //std::cout << "Conteudo de pt3: " << *ptr3 << std::endl;
   std::cout << "-----------------------------" << std::endl; 

   std::cout << "Endereço de pt4: " << &ptr4 << std::endl;
   std::cout << "Valor de pt4: " << ptr4 << std::endl;
   std::cout << "Conteudo de pt4: " << *ptr4 << std::endl;
   std::cout << "Endereço de x: " << &x << std::endl;
   std::cout << "Valor de x: " << x << std::endl;
   std::cout << "-----------------------------" << std::endl; 

   //ponteiro duplo
   int num = 5;
   int *ptr_num = &num;
   int **ptrD_num = &ptr_num;

   std::cout << "Valor de num: " << num << "\tEndereço de num: " << &num << std::endl;
   std::cout << "Valor de ptr_num: " << ptr_num << "\tEndereço de ptr_num: " << &ptr_num << "\tConteudo de ptr_num: " <<  *ptr_num << std::endl;
   std::cout << "Valor de ptrD_num: " << ptrD_num << "\tEndereço de ptrD_num: " << &ptrD_num << "\tConteudo de ptrD_num: " <<  **ptrD_num << std::endl;

   //alocação dinamica de variaveis
   int *num2 = new int;
   *num2 = 10; 
   std::cout << "Endereço de num2: " << &num2 << "\tConteudo de num2: " << *num2 << std::endl;
   delete num2;
   std::cout << "Endereço de num2: " << &num2 << "\tConteudo de num2: " << *num2 << std::endl;

    return 0;
}