# 👨‍💻 Process Creation & Summation in C using `fork()` 🚀

Welcome to another set of cool C programs that demonstrate how processes are created and executed independently using `fork()`. 
🧠 Some of these programs also explore how different processes perform summation tasks in parallel.

---

## 📂 What's Inside

1. ➗ Dual Summation by Forked Processes
2. 🧬 Multiple Forks = Multiple Processes
3. 🔁 Single Fork, Dual Print
4. 👨‍👦 Basic Parent vs Child
5. ➕ Parallel Summation in Parent & Child

---

## 1️⃣ ➗ Dual Summation by Forked Processes

📘 **Concepts**: Variable isolation in processes, `fork()`, range summation.

---

## 2️⃣ 🧬 Multiple Forks = Multiple Processes

Two forks ➡️ up to **4 processes**! Each prints a line.

⚠️ Output may appear multiple times due to process tree branching:

* 1st `fork()` → 2 processes
* 2nd `fork()` → doubles each → 4 total

---

## 3️⃣ 🔁 Single Fork, Dual Print

Basic use of `fork()` without conditional branching.

🧪 **Result**: "Hello World!" printed twice—once by parent, once by child.

---

## 4️⃣ 👨‍👦 Basic Parent vs Child Print

Simple branching using `if(f == 0)`.

🧠 **Concepts**: Process identification using return value of `fork()`.

---

## 5️⃣ ➕ Parallel Summation in Parent & Child

Each process handles a different set of values.

⚡ **Concepts**: Parallel computing, summation tasks split between parent & child.

---

## 🎯 Learning Goals

* ✅ Master `fork()` usage
* ✅ Understand process duplication and isolation
* ✅ Practice simple concurrent computation
* ✅ Recognize non-deterministic output due to process scheduling

---
