# 📬 Message Queue IPC in C 🖥️💌

Welcome to this cool demo of **Interprocess Communication (IPC)** using **message queues**! 🚀

---

## 🔑 What’s Happening?

* 🧑‍💻 **Sender Program**:

  * Creates a message queue
  * Takes your input 📝
  * Sends it to the queue 📤

* 🤖 **Receiver Program**:

  * Connects to the same queue
  * Retrieves your message 📥
  * Shows it on screen 👀
  * Cleans up the queue 🧹

---

## 💡 How It Works (Behind the Scenes)

1. Generate a unique **key** 🔑 with `ftok()`
2. Create or access a **message queue** with `msgget()` 🏗️
3. **Send messages** using `msgsnd()` ✉️
4. **Receive messages** with `msgrcv()` 📬
5. **Delete** the queue with `msgctl()` 🚮

---

## 📦 Message Format

```c
struct mesg_buffer {
    long mesg_type;     // Message type (must be > 0)
    char mesg_text[100]; // Message text
};
```

* We use `mesg_type = 1` to identify our messages 🎯
* Text max length = 100 characters 🧾

---

## 🏃‍♂️ How to Run?

1. Compile both:

```bash
gcc sender.c -o sender
gcc receiver.c -o receiver
```

2. Run the sender and type your message ✍️:

```bash
./sender
```

3. Run the receiver to read the message 🎉:

```bash
./receiver
```

---

## 🎬 Sample Output

Sender side:

```
Write Data : Hello from sender! 👋
Data send is : Hello fro
```

Receiver side:

```
Data received is : Hello fro
```

---

## 🎯 Why Message Queues?

* 💬 Safe communication between processes
* 🛡️ Messages stay until read — no lost data!
* 🔄 Asynchronous messaging — send and receive independently
* 🖥️ Widely used in operating systems & complex apps
