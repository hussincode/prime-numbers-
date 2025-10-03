# 🚀 Problem Solving with C++

![C++](https://img.shields.io/badge/language-C++-blue.svg)
![Status](https://img.shields.io/badge/status-learning-success)
![License](https://img.shields.io/badge/license-MIT-green.svg)

Welcome to my **Problem Solving Repository** ✨  
This repo contains solutions to different algorithmic problems, written in **C++**, with step-by-step explanations and notes.  

---

## 📘 About
- 🖥️ Language: **C++17/20**  
- 🎯 Focus: **Problem Solving & Competitive Programming**  
- 📖 Includes:
  - Problem statement (short summary)  
  - Explanation / Notes  
  - C++ solution  

---

## 📂 Project Structure
# 🚀 Problem Solving with C++

![C++](https://img.shields.io/badge/language-C++-blue.svg)
![Status](https://img.shields.io/badge/status-learning-success)
![License](https://img.shields.io/badge/license-MIT-green.svg)

Welcome to my **Problem Solving Repository** ✨  
This repo contains solutions to different algorithmic problems, written in **C++**, with step-by-step explanations and notes.  

---

## 📘 About
- 🖥️ Language: **C++17/20**  
- 🎯 Focus: **Problem Solving & Competitive Programming**  
- 📖 Includes:
  - Problem statement (short summary)  
  - Explanation / Notes  
  - C++ solution  

---

## 📂 Project Structure
├── notes/ # My personal notes
├── problems/ # Problem statements + solutions
│ ├── prime_number.cpp
│ ├── team_problem.cpp
│ └── ...
├── README.md # This file


---

## 🛠 How to Run
```bash
# Clone the repo
git clone https://github.com/your-username/problem-solving-cpp.git
cd problem-solving-cpp

# Compile any file
g++ problems/prime_number.cpp -o prime
./prime

📖 Topics Covered

🔢 Prime Numbers

🧩 Factorization

📊 Arrays & Loops

🗂️ Maps & Frequency Counting

🔍 Binary Search

↔️ Two Pointers

🧮 Dynamic Programming (coming soon)

📝 Example Problem: Prime Number
📌 Problem

Check if a number n is prime.

💡 Idea

If n <= 1 → Not Prime

If n == 2 → Prime

If n is even and > 2 → Not Prime

Check divisors from 3 to √n (step +2).

If no divisor found → Prime ✅

🔧 C++ Code
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

🎯 Goals

📈 Improve problem-solving skills

🏆 Prepare for competitive programming (Codeforces, LeetCode, AtCoder, etc.)

🗂️ Keep all problems organized with explanations for revision

🤝 Contributing

This repo is mainly for my personal learning 💡
But feel free to fork, add problems, or suggest improvements 🚀

📧 Contact

👨‍💻 Author: Hussin Hesham
📩 Email: heshamhussin172@gmail.com

🔗 LinkedIn: Hussin Hesham

✨ Happy Coding & Problem Solving! ✨


---

This will look **colorful and professional** on GitHub with badges, emojis, and clean formatting.  

👉 Do you want me to also add a **Table of Contents with links** (so readers can quickly jump to sections like "About", "Topics", "Example")?

