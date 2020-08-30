#include <iostream>


#define SIZE 5


int main()  {
    
    long  value1=200000;
    long  value2;
    

    //  1. Declare a variável long_ptr como um ponteiro para um objeto do tipo long.
    long*  long_ptr;

    //  2. Atribua o endereço da variável value1 à variável ponteiro long_ptr.
    long_ptr  =  &value1;

    //  3. Imprima o valor do objeto apontado por long_ptr.
    std::cout << *long_ptr << ' ';

    //  4. Atribua o valor do objeto apontado por long_ptr à variável value2.
    value2 = *long_ptr;

    //  5. Imprima o valor de value2.
    std::cout << value2 << ' ';

    //  6. Imprima o endereço de value1
    std::cout << &value1 << ' ';

    //  7. Imprima o endereço armazenado em long_ptr. O valor impresso é o mesmo que o endereço de value1?
    std::cout << long_ptr << ' ';

    //Imprima a comparação entre o endereço de value1 com o endereço armazenado em long_ptr
    std::cout << (&value1 == long_ptr) << ' ';

    //  8. Declare um array do tipo unsigned int chamado values com cinco elementos e inicialize os elementos para os inteiros pares de 2 a 10. 
    unsigned int values[SIZE]{2, 4, 6, 8, 10};

    //  9. Declare um ponteiro v_ptr que aponta para um objeto do tipo unsigned int.
    unsigned int*  v_ptr;

    // 10. Utilize uma instrução for para imprimir os elementos do array values usando notação de array com [].
    for( long i=0; i<SIZE; ++i)  std::cout << values[i] << ' ';

    // 11. Escreva duas instruções separadas que atribuem o endereço inicial do array values à variável ponteiro v_ptr.
    v_ptr = values;
    v_ptr = &(values[0]);

    // 12. Utilize uma instrução for para imprimir os elementos do array values utilizando a notação de ponteiro/deslocamento.
    for( long i=0; i<SIZE; ++i)  std::cout << *(v_ptr + i) << ' ';

    // 13. Utilize uma instrução for para imprimir os elementos do array values utilizando a notação de ponteiro/deslocamento com o nome de array como o ponteiro.
    for( long i=0; i<SIZE; ++i)  std::cout << *(values + i) << ' ';

    // 14. Utilize uma instrução for para imprimir os elementos do array values utilizando [] no ponteiro para o array.
    for( long i=0; i<SIZE; ++i)  std::cout << v_ptr[i] << ' ';

    // 15. Referencie o quinto elemento de values utilizando a notação [] de array, a notação de ponteiro/deslocamento com o nome de array como o ponteiro, a notação de subscrito de ponteiro e a notação de ponteiro/deslocamento.   
    std::cout << values[4] << ' ';
    std::cout << *(values + 4) << ' ';
    std::cout << v_ptr[4] << ' ';
    std::cout << *(v_ptr + 4) << ' ';

    // 16. Mostre que endereço é referenciado por v_ptr + 3, e que valor é armazenado nessa localização.
    std::cout << (v_ptr + 3) << ' ';
    std::cout << *(v_ptr + 3) << ' ';

    // 17. Supondo que v_ptr aponte para values[4], que endereço é referenciado por v_ptr -= 4? Que valor é armazenado nessa localização?
    v_ptr = &(values[4]);
    std::cout << (v_ptr - 4) << ' ';
    std::cout << *(v_ptr - 4) << ' ';

   
    return 0;
}