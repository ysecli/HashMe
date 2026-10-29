#include <iostream>
#include <Windows.h>
#include <string>
#include "decl.h"

//Encrypt secret
constexpr unsigned std::string encrypted(std::string_view secret) {
    unsigned std::string encrypted[secret.length()];
    for (int i = 0; i < secret.length(); i++) {
        encrypted[i] = secret[i] ^ 0x47 * 9 + 132;
    }
    return encrypted;
}



int main(int argc, char* argv[]) {
    std::cout << "Enter a random word: " << std::endl;
    std::cin >> input << std::endl;

    //Length check to auto fail.
    if (input.length() != secret.length()) {
        return false;
    }
}


/*template <size_t N>
constexpr std::array<char, N> encryptArray(const char(&secret)[N], unsigned char key) {
    std::array<char, N> encrypted{};
    for (size_t i = 0; i < N; i++) {
        encrypted[i] = secret[i] ^ key;
    }
    return encrypted;
}*/