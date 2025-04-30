## 🔰 **PART 1: The Basics — Knowing Your Way Around the Terminal**

### 🖥️ 1. What is Linux?

- **It's an OS kernel**: The heart of your computer.
- Popular distros: Ubuntu, Debian, CentOS, Fedora, Arch.
- Open source, super customizable, and dominant in server land.

### 🧭 2. Basic Commands You’ll Use Every Hour

```bash
pwd             # Show current directory
ls              # List files
cd /path/to/dir # Change directory
cp file dest    # Copy file
mv file dest    # Move/rename
rm file         # Delete (careful!)
mkdir name      # Create directory
touch file      # Create empty file
cat file        # Show file content
```

### 📁 3. File System Structure (aka “why is everything under /?”)

```
/
/bin       → Essential commands
/sbin      → System binaries
/etc       → Config files
/home      → User directories
/root      → Admin's home
/var       → Logs, mail, etc.
/tmp       → Temp files
/usr       → Apps, docs, libs
```

### 🧑‍💻 4. Users and Permissions

```bash
whoami              # Current user
sudo command        # Run as root (if allowed)
chmod 755 file      # Change file permissions
chown user:group f  # Change ownership
```

- Permissions: `rwx` = read, write, execute
- Example: `-rwxr-xr--` = owner can do everything, group can read/execute, others can only read

## 🔧 **PART 2: Intermediate — Real Admin Stuff Starts Here**

### 🧩 1. Package Managers

- Debian/Ubuntu: `apt`, `dpkg`
- Red Hat/CentOS: `yum`, `dnf`, `rpm`

```bash
apt update && apt upgrade     # Update system
apt install nginx             # Install nginx
dpkg -l | grep nginx          # Check installed packages
```

### 🧪 2. Systemd & Services

```bash
systemctl start nginx
systemctl stop nginx
systemctl restart nginx
systemctl status nginx
systemctl enable nginx  # Start on boot
```

### 🔥 3. Logs and Monitoring

```bash
journalctl -xe             # System logs
tail -f /var/log/syslog    # Real-time log view
top or htop                # CPU, memory usage
df -h                      # Disk space
du -sh /folder             # Folder size
free -h                    # RAM usage
```

### 🧑‍🔧 4. Users, Groups, SSH

```bash
adduser john
passwd john
usermod -aG sudo john       # Add to sudo group
su - john                   # Switch user
```

- **SSH**: `/etc/ssh/sshd_config`

```bash
ssh user@host
ssh-keygen                 # Create SSH key
ssh-copy-id user@host     # Copy pubkey to server
```

---

## 🧙 **PART 3: Advanced Wizardry**

### ⚔️ 1. Security & Hardening

- **UFW** (Ubuntu): Simple firewall

```bash
ufw enable
ufw allow 22     # SSH
ufw allow 80     # HTTP
ufw status
```

- Fail2Ban: Protect from brute-force attacks
- Secure SSH: change port, disable root login

### 📅 2. Cron Jobs (Scheduled Tasks)

```bash
crontab -e
# Example: Every day at 2 AM
0 2 * * * /path/to/script.sh
```

### 💾 3. Backups & Automation

- Use `rsync`, `scp`, or `tar`

```bash
rsync -av /home /backup
tar -czvf backup.tar.gz /dir
scp file user@server:/path
```

### 📡 4. Web Servers & Databases

- Install **Nginx**, serve static sites or reverse proxy.
- Install **MySQL/PostgreSQL**, manage databases from CLI.

```bash
sudo apt install nginx
sudo apt install mysql-server
mysql_secure_installation
```

### 🐳 5. Bonus: Docker & Virtualization

```bash
docker ps
docker run -d -p 80:80 nginx
docker-compose up -d
```

### 🛠️ 6. Troubleshooting Mindset

- `dmesg`, `lsof`, `netstat`, `strace`, `ping`, `traceroute`, `telnet` — become your sleuth tools.
- Know how to read logs and follow error trails.
- Don’t panic. Google is your sidekick.

---

## 📘 Resources to Get Even Deeper

- **Book**: "How Linux Works" by Brian Ward
- **YouTube**: NetworkChuck, The Linux Experiment
- **Interactive Practice**: [https://linuxjourney.com](https://linuxjourney.com) or [https://www.overthewire.org/wargames/bandit/](https://www.overthewire.org/wargames/bandit/)
- **Certs (Optional)**: LPIC-1, CompTIA Linux+, RHCSA

---
