# 🧩 Multi-Process Computation with fork() in C 🚀

Welcome! This program demonstrates how to use multiple processes in C to perform **different computations concurrently**. 
It uses `fork()` to create child processes for computing the factorial of one number and generating the Fibonacci sequence and primality check of another number, while the parent process manages input.

---

## 📝 Program Overview

- **Parent Process (A):**  
  - Takes three integer inputs: A, B, and C.  
  - Spawns two child processes.

- **Child Process B:**  
  - Calculates the factorial of **A**.  
  - Displays the result.

- **Child Process C:**  
  - Generates and prints the Fibonacci sequence up to **C** terms.  
  - Checks if **C** is a prime number and displays the result.

---

## 🧪 Code Highlights

```c
pid_t pidA = getpid(); // Parent process ID
fork();                // Create process B for factorial
fork();                // Create process C for Fibonacci & prime check
wait(NULL);            // Wait for children to finish
````

* Uses `sleep()` to manage process output order.
* Demonstrates **process IDs (pid)** and **parent process IDs (ppid)**.
* Utilizes **loops** for factorial and Fibonacci computations.
* Implements **prime checking** with an efficient loop.

---

## 🎯 Learning Objectives

* Understand how to create multiple child processes from a parent process.
* Learn synchronization between processes using `wait()` and `sleep()`.
* Apply factorial, Fibonacci, and prime number logic within child processes.
* Observe process hierarchies via PID and PPID.
