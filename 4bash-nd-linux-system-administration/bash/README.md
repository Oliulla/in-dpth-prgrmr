# 🐚 Bash Scripting — Beginner to Intermediate

## ✅ **Why Learn Bash?**

- Automate repetitive tasks (backups, deployments, log cleanup)
- Build CLI tools and utilities
- Manage Linux systems more efficiently
- Use in CI/CD pipelines (e.g., GitHub Actions, Jenkins)

## 📦 PART 1: **Basics of Bash Scripting**

### 🔹 What is a Shell?

- A **shell** is a program that interprets commands.
- **Bash** = _Bourne Again SHell_, the most common shell on Linux systems.

---

### 🔹 Your First Script

Create a file called `hello.sh`:

```bash
#!/bin/bash
echo "Hello, $USER!"
```

Make it executable:

```bash
chmod +x hello.sh
./hello.sh
```

---

## 📚 Concepts to Master (Foundational)

### 1. ✅ **Shebang**

```bash
#!/bin/bash
```

Tells the system to use **Bash** to run the script.

---

### 2. ✅ **Variables**

```bash
name="Alice"
echo "Hello, $name"
```

- No spaces around `=`
- Use `$` to reference

---

### 3. ✅ **User Input**

```bash
echo "Enter your name:"
read user_name
echo "Hello, $user_name!"
```

---

### 4. ✅ **If-Else Conditions**

```bash
if [[ $name == "root" ]]; then
  echo "You are root!"
else
  echo "You are not root!"
fi
```

Common tests:

| Expression | Meaning                |
| ---------- | ---------------------- |
| `-z`       | Empty string           |
| `-n`       | Non-empty string       |
| `-e file`  | File exists            |
| `-f file`  | File is a regular file |
| `-d dir`   | Is a directory         |

---

### 5. ✅ **Loops**

#### 🔁 For Loop

```bash
for i in {1..5}; do
  echo "Loop #$i"
done
```

#### 🔁 While Loop

```bash
counter=1
while [ $counter -le 3 ]; do
  echo "Counter: $counter"
  ((counter++))
done
```

---

### 6. ✅ **Functions**

```bash
say_hello() {
  echo "Hello from function"
}

say_hello
```

You can also pass arguments:

```bash
greet() {
  echo "Hi, $1!"
}
greet "Bob"
```

---

### 7. ✅ **Script Arguments**

```bash
#!/bin/bash
echo "Script name: $0"
echo "First arg: $1"
echo "All args: $@"
```

Special variables:

| Variable      | Description                      |
| ------------- | -------------------------------- |
| `$0`          | Script name                      |
| `$1`, `$2`... | Positional arguments             |
| `$@`          | All arguments (preserves quotes) |
| `$#`          | Number of arguments              |

---

### 8. ✅ **Exit Status**

```bash
echo "This will succeed"
exit 0
```

```bash
echo "This is a failure"
exit 1
```

You can check exit code of last command using `$?`:

```bash
mkdir newdir
if [[ $? -eq 0 ]]; then
  echo "Directory created"
else
  echo "Failed"
fi
```

---

### ✅ Bonus: Script Example (Backup)

```bash
#!/bin/bash
SRC="/home/yourname/documents"
DEST="/home/yourname/backup_$(date +%F_%T)"
mkdir -p "$DEST"
cp -r "$SRC" "$DEST"
echo "Backup done to $DEST"
```

---

## 🚀 Practice Challenges

1. ✅ Script to check if a file exists
2. ✅ Script to check if a user is logged in
3. ✅ Script that loops over files in a folder and prints their sizes
4. ✅ Script that renames `.txt` files to `.bak`

---

## 🧠 Resources

- 📘 _"The Linux Command Line"_ by William Shotts (includes Bash)
- 🌐 [Bash Cheatsheet](https://devhints.io/bash)
- 🧪 Practice: [OverTheWire Bandit](https://overthewire.org/wargames/bandit/)

---

Let me know when you're ready for a **small project-based challenge**, or if you want to go deeper into **intermediate Bash scripting** — like arrays, `case` statements, subshells, and traps.
