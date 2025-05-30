# 👨‍💻 C Process Creation Examples using `fork()` 🚀

Welcome to a collection of C programs that demonstrate **process creation**, **parent-child relationships**, and **process IDs** using the `fork()` system call. 
🧠 These examples are great for learning how operating systems handle multitasking and process management.

---

## 📂 Contents

1. 👨‍👦 Basic Parent & Child Process
2. 🌳 Multi-process Tree (A ➡️ B & C)
3. 🌀 Duplicate Execution with `fork()`
4. 🆔 Display PID & Fork ID

---

## 1️⃣ 👨‍👦 Basic Parent & Child Process

A simple example showing how a parent and child process are created.

🧠 **Concepts**: `fork()`, conditional branching, process identification.

---

## 2️⃣ 🌳 Multi-Process Tree (A ➡️ B & C)

Simulates a tree structure where Process A creates B, then A creates C. Shows PIDs and PPIDs.

🌱 **Concepts**: Parent-child hierarchy, `getpid()`, `getppid()`, `wait()`.

---

## 3️⃣ 🌀 Duplicate Execution with `fork()`

No conditionals—both child and parent run the same code.

🔁 **Concepts**: Code duplication, process cloning.

---

## 4️⃣ 🆔 Process ID & Fork Number

Displays the process ID and the value returned by `fork()`.

🆔 **Concepts**: Process ID tracking, analyzing fork behavior.

---

## 🎯 Learning Outcomes

* ✅ Understand process creation in Unix-based OS
* ✅ Identify parent vs child using `fork()`
* ✅ Use `getpid()` and `getppid()` to trace process lineage
* ✅ Practice writing concurrent logic

---

## 💡 Pro Tip

Use the following command to view the process tree while programs are running:

```bash
pstree -p
```

🧭 Helps visualize parent-child relations in real-time.
