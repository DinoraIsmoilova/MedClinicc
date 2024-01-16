#include <iostream>
#include <cstring>

void reverse(char* str) {
    int len = strlen(str);
    char lastChar = str[len - 1];

  
    for (int i = len - 1; i >= 1; --i) {
        str[i] = str[i - 1];
    }

  
    str[0] = lastChar;
}

int main() {
    char str[100];

    
    std::cout << "vvedite stroku: ";
    std::cin.getline(str, sizeof(str));

    
    reverse(str);

   
    std::cout << "stroka posle perestanovki: " << str << std::endl;

    return 0;
}