# 📊 CSV Operations: Employee Data

This project demonstrates various operations on an employee dataset stored in a CSV file. It showcases how to **filter**, **sort**, and **extract** data using simple Linux commands.

---

## 📂 Files

- **`example03.csv`**: Contains employee details with `ID`, `Name`, `Age`, `Salary`, and `Department`.

---

## 🔧 Key Operations

- **Filter by Department**: Extract employees from `Engineering` department.  
  ```bash
  grep 'Engineering' example03.csv
  ```

- **Extract Age**: Get the `Age` of all employees.  
  ```bash
  awk -F',' '{print $3}' example03.csv
  ```

- **Sort by Salary (Ascending)**: Sort employees by their `Salary`.  
  ```bash
  sort -t',' -k4,4n example03.csv
  ```

- **Sort by Salary (Descending)**: Sort employees by `Salary` in descending order.  
  ```bash
  sort -t',' -k4,4 -r example03.csv
  ```

---

## 🛠 Tools Used

- **`awk`** – For column extraction
- **`cut`** – To slice columns
- **`grep`** – For pattern searching
- **`sort`** – For sorting data

---

## 🚀 How to Use

1. Open `example03.csv`.
2. Run any of the commands to manipulate the data.

---
