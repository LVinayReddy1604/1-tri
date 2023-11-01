#2. Encryption of a string with a encryption key 
def encrypt_string(string, encryption_key):
    encrypted_string = ""
    for char in string:
        if char.isalpha():
            is_uppercase = char.isupper()
            ascii_value = ord(char)
            encrypted_ascii = ascii_value + encryption_key
            if is_uppercase:
                encrypted_ascii = (encrypted_ascii - 65) % 26 + 65
            else:
                encrypted_ascii = (encrypted_ascii - 97) % 26 + 97
            encrypted_char = chr(encrypted_ascii)
            encrypted_string += encrypted_char
        else:
            encrypted_string += char

    return encrypted_string


string = input("Enter the domain name to encrypt: ")
encryption_key = int(input("Enter the value of 'n' (encryption key values): "))

encrypted_domain = encrypt_string(string, encryption_key)
print(f"Encrypted domain name: {encrypted_domain}")
