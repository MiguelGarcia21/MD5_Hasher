# 🔐 MD5 Hasher

A lightweight C++ implementation of the **MD5 hashing algorithm**. This project was built to demonstrate how MD5 works internally, without relying on external cryptographic libraries for the core hash logic.

## 📦 Features

- Pure C++ MD5 implementation
- Uses Boost for hexadecimal output formatting
- Simple and readable structure
- Hash strings via CLI
- No OpenSSL or external crypto backends

### 🛠️ Requirements

- C++ compiler with C++11 support or higher (e.g., g++, MSVC, Clang)
- [Boost C++ Libraries](https://www.boost.org/) (only `boost::algorithm::hex`)
- CMake is optional for building

> 🔧 On Debian/Ubuntu-based systems, install Boost via:
> ```bash
> sudo apt-get install libboost-all-dev
> ```

> 🔧 On Windows, you can download it manually from boost.org.

---

### 🔧 Build with g++

```
g++ -std=c++11 main.cpp md5.cpp -o md5hasher
```

Run
```
./md5hasher
```
You will be prompted to input a string. The MD5 hash of the string will be printed.

Disclaimer
----------
This project is intended only for educational and training purposes.
It is not secure and should not be used in production environments or for cryptographic security.

Time and Space Complexity
-------------------------
Operation       | Complexity
----------------|-----------
Hashing input   | O(n)
Space usage     | O(1)

- n is the length of the input in bytes.
- MD5 processes data in 512-bit (64-byte) blocks, so it scales linearly with input size.
- Space is constant due to the fixed size of internal state and output.


