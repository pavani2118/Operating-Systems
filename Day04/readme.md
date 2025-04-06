## 📁 Files in This Repo

### 1. `example01.sh` – Name & Numbers Summary
Prompts the user for their name and three numbers. Then, it calculates and displays the **sum** and **average** of the numbers.

#### 🧪 Sample Run:
```bash
$ ./example01.sh

Who are you?
pavani
Enter number 1
8
Enter number 2
9
Enter number 3
10
Hi pavani
Summation        27
Average          9
```

---

### 2. `example02.sh` – Basic Calculator
Accepts two numbers and performs the four basic arithmetic operations:
- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication
- ➗ Division

#### 🧪 Sample Run:
```bash
$ ./example02.sh

Enter a
10
Enter number b
8
Summation        18
Subtraction      2
Multiplication   80
Division         1
```

---

### 3. `date_operations.sh` – Date Information & Calendar
This script utilizes the `date` and `cal` commands to display:
- Current date in various formats
- The calendar for the current month
- Day, month, and year extracted from the system date.

#### 🧪 Sample Run:
```bash
$ ./date_operations.sh

     April 2025
Su Mo Tu We Th Fr Sa
       1  2  3  4  5
 6  7  8  9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30

Today is: 06
Current Month: 04
Year: 25
Date Format: 04/06/25
Full Year: 2025
Full Month: April
Day: Sunday
Short Day: Sun
Month Abbreviation: Apr
```

---

## 🚀 How to Run the Scripts

1. Open your terminal.
2. Clone the repository (or copy the scripts into files).
3. Give execution permission to the scripts:
```bash
chmod +x example01.sh
chmod +x example02.sh
chmod +x date_operations.sh
```
4. Run the scripts:
```bash
./example01.sh
./example02.sh
./date_operations.sh
```

---

## 🧠 What You'll Learn

✅ Bash variable handling  
✅ Input/Output using `read` and `echo`  
✅ Arithmetic with `expr` or `$(())`  
✅ Date and calendar manipulation with `date` and `cal`  
✅ Script permissions and execution in Linux  

---
