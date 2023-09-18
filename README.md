# Vigenère Cipher

This repository contains a C++ program that implements the Vigenère Cipher. The Vigenère Cipher is a method of encrypting alphabetic text by using a simple form of polyalphabetic substitution.

## Usage

1. Clone the repository or download the `vigenere_cipher.cpp` file.
2. Compile the code using a C++ compiler.
3. Run the compiled executable.
4. Enter the text and the key for encryption.

## Code Structure

The code consists of a `cipherVig` function for encrypting the text using the Vigenère Cipher and a `main` function for taking user input and invoking the cipher function.

### `cipherVig` Function

This function takes a text and a key as input and encrypts the text using the Vigenère Cipher algorithm. It follows these steps:

- Extend the key if its length is less than the text length.
- Iterate through each character of the text and key, converting them to their corresponding numerical values using the alphabet array.
- Perform the Vigenère Cipher calculation for each character and construct the cipher text.
- Display the ciphertext.

### `main` Function

In the `main` function, the user is prompted to enter the text and the key. The `cipherVig` function is then called to encrypt the text using the provided key.
