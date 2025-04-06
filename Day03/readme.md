## 🪟 Windows Batch Scripts

### 📅 `date_info.bat`
Displays full system date info and calculates:
- ✅ Day of the week
- ✅ Day of the year (approx)
- ✅ Week of the year
- ✅ Week of the month

```cmd
Today is: Sun 04/06/2025
Current year is 2025
Current month is 04
Current date is 06
Today is Sun
Current day of year is 96
Week of Year is 14
Week of Month is 2
```

### 🎂 `age_calculator.bat`
Prompts user to enter birth year and calculates current age.

```cmd
Enter your birth year (YYYY): 2000
You are 25 years old!
```

---

## 🐧 Linux Shell Commands & File Parsing

Working with `newfile.tsv` (tab-separated file):

### 📂 File Preview

```
aa	1	2	3
bb	2	3	4
cc	3	4	5
dd	4	5	6
ee	5	6	7
ff	6	7	8
gg	7	8	9
hh	8	9	10
```

### 🧪 Useful Commands

```bash
cut -d$'\t' -f1 newfile.tsv       # Get 1st column
cut -d$'\t' -f3 newfile.tsv       # Get 3rd column
awk '{print $3}' newfile.tsv      # Same as above
awk '{print NF; exit}' newfile.tsv # Count number of fields
wc -l newfile.tsv                 # Count lines
head -n2 newfile.tsv              # First 2 rows
tail -n2 newfile.tsv              # Last 2 rows
grep '6' newfile.tsv              # Match rows with "6"
head -n7 newfile.tsv | grep '6'   # Filter first 7 rows with "6"
```

---

## 📁 Project Structure

```bash
📦 scripting-toolkit
 ┣ 🐚 scripts/
 ┃ ┣ age_calculator.bat
 ┃ ┣ date_info.bat
 ┃ ┣ newfile.tsv
 ┃ ┗ process_file.sh
 ┣ 📄 README.md
```

---

## 💡 How to Run

### Windows:
Double-click `.bat` files or run via Command Prompt:
```cmd
age_calculator.bat
```

### Linux:
Run shell commands in terminal:
```bash
bash process_file.sh
```
