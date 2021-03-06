#include <iostream>

/***
 *When used as a function return type, the void keyword 
 *specifies that the function does not return a value. 
 *When used for a function's parameter list, 
 *void specifies that the function takes no parameters. 
 *When used in the declaration of a pointer, 
 *void specifies that the pointer is "universal."
 *If a pointer's type is void*, the pointer can point 
 *to any variable that is not declared with the const or volatile keyword.
 *A void* pointer cannot be dereferenced unless it is cast to another type. A void* pointer can be converted into any other type of data pointer.
 *A void pointer can point to a function, but not to a class member in C++.

 *You cannot declare a variable of type void.
 * void可以表示任何数据类型
 ***/
void *pv;   // okay
int *pint; int i;
int main() {
   pv = &i;
   std::cout << pv << "\n";
   // std::cout << *pv << "\n"; // cannot get void ptr value!!
   // Cast optional in C required in C++
   pint = (int *)pv;
   std::cout << pint << "\n";
}
