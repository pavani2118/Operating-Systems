# 🧑‍👦‍👦 Process Sync with fork() & wait() in C ⏳✨

Welcome to this cool demo where a **parent process** spawns **two child processes** that take their own time to finish — and the parent waits patiently for both to say "I'm done!" 👶🕒🕒👦

---

## 🚦 What Happens?

1. 🧑 **Parent starts**  
   - Shows its Process ID (PID) 👀

2. 👶 **Child 1 created**  
   - Says hello with its PID & Parent PID (PPID) 🙋‍♂️  
   - Takes a short nap for **1 second** 😴⏱️  
   - Then says "Bye!" 👋

3. 👦 **Child 2 created**  
   - Shows off its PID & PPID 💪  
   - Takes a longer nap for **3 seconds** 🛌⏳  
   - Says "See ya!" ✌️

4. 🧑 **Parent waits** for both children 👀⌛  
   - After both kids exit, parent says "All done, shutting down!" 🎉🚪

---

## 🛠️ How It Works

- `fork()` ➡️ Create new processes  
- `sleep()` ➡️ Pause execution (simulate work)  
- `wait()` ➡️ Parent waits for children to finish  
- `getpid()` & `getppid()` ➡️ Track process relationships

---

## 🎯 Why This Matters

- Learn how OS handles multiple processes 🖥️  
- Understand process creation and lifecycle 🌱➡️🌳  
- See real synchronization using `wait()` ⏳  
- Master basics for more complex IPC and multitasking ⚙️

---

## 🖥️ Sample Output

```

Parent process started. PID: 4321
Child process has started. Sleeping for 1 sec
My PID: 4322
My PPID: 4321
Child process has started. Sleeping for 3 sec
My PID: 4323
My PPID: 4321
Child process 01 exiting...
Child process 02 exiting...
Parent process ending.

---

If you want, I can help jazz this up for a presentation or a project report too!
```
