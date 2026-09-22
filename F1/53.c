#include<stdio.h>

int add(int n1, int n2) {
   int  result =  n1 + n2;
   return result;
}


int main() {
    // variable scope = Refers to where a variable is recognized and accessible.
    //                  Variables can share the same name if they are in different scopes {}


    // Local scope = between {}
    // Global variable = not bound by any {} avoid it because it is hard to debug


    int result = add(3,4);
    printf("%d",result);

}