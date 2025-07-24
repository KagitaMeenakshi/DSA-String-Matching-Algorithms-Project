# 📦 String Compression using Pattern Matching

This project explores and implements efficient **string matching algorithms** to perform **lossless data compression**. It is a part of my Data Structures & Algorithms (DSA) Lab work aimed at optimizing storage and search operations using classic algorithmic techniques.

---

## 🚀 Features

- 📚 Implements classic **string matching algorithms**:
  - Knuth-Morris-Pratt (KMP)
  - Rabin-Karp
  - Naive Pattern Matching
- 🧠 Applies them to **text compression and redundancy removal**
- ⚡ Focuses on time- and space-efficient techniques
- 🧪 Sample I/O and test cases included

---

## 🔧 Algorithms Used

| Algorithm     | Time Complexity | Space Complexity | Use Case                     |
|---------------|-----------------|------------------|------------------------------|
| **KMP**       | O(n + m)        | O(m)              | Pattern detection in linear time |
| **Rabin-Karp**| O(n + m) average| O(1)              | Hash-based matching          |
| **Naive**     | O(n * m)        | O(1)              | Simple illustrative approach |

---

## 📁 File Structure

```
📦 string-compression/
 ┣ 📜 kmp.cpp
 ┣ 📜 rabin_karp.cpp
 ┣ 📜 naive.cpp
 ┣ 📜 sample_input.txt
 ┣ 📜 README.md
```

---

## 🧪 Sample Input

```
Text:      ABABDABACDABABCABAB
Pattern:   ABABCABAB
```

Output using KMP:
```
Pattern found at index 10
```

---

## 🛠️ How to Run

```bash
g++ kmp.cpp -o kmp
./kmp
```

(Repeat for other files accordingly.)

---

## 📚 Concepts Covered

- Prefix functions (Pi arrays)
- Rolling Hashing
- Brute-force search
- Pattern overlap handling
- String preprocessing

---

## 🧑‍💻 Author

- **Meenakshi Kagita**
- [GitHub Profile](https://github.com/KagitaMeenakshi)

---

## 🏷️ Tags

`dsa` `string-matching` `compression` `c++` `kmp` `rabin-karp` `algorithms`
