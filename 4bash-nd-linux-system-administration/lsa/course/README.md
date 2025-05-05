### 🧱 1. **What is Linux?**

- It’s an open-source, Unix-like OS kernel.
- Distros = Linux + tools. Think Ubuntu, CentOS, Debian, Arch.

### 💿 2. **Installing Linux**

- Bootable USB → ISO file → Installer.
- Choose partitions: `/`, `swap`, `/home`.
- Learn the basics of dual boot vs virtual machine setups (VirtualBox, VMware).

---

### 💻 3. **Linux Filesystem Hierarchy**

- `/` = root of everything.
- `/home` = user data.
- `/etc` = configuration.
- `/var` = logs, mail, spools.
- `/usr` = user programs and binaries.

---

### 🧑‍💼 4. **User & Group Management**

```bash
adduser john
passwd john
usermod -aG sudo john
groups john
```

- `chmod`, `chown`, `chgrp` control who sees or modifies what.
- Sticky bits and setuid/setgid are like extra permissions superpowers.

---

### ⚙️ 5. **Package Management**

- **Debian/Ubuntu**:

  ```bash
  sudo apt update && sudo apt install nginx
  ```

- **Red Hat/CentOS**:

  ```bash
  sudo yum install httpd
  ```

- Learn `dpkg`, `rpm`, and `snap`.

---

### 🖥️ 6. **Process & Service Management**

- Check processes: `ps aux`, `top`, `htop`.
- Kill ’em: `kill`, `killall`, `pkill`.
- Start/stop services:

  ```bash
  systemctl start ssh
  systemctl enable nginx
  ```

---

### 🌐 7. **Networking**

- Check IP: `ip a` or `ifconfig`
- Ping, DNS, routes:

  ```bash
  ping 8.8.8.8
  dig google.com
  traceroute facebook.com
  ```

- Static IPs via `netplan` or `nmcli`

---

### 🧠 8. **Shell Scripting**

- `.sh` scripts automate your boring tasks.

```bash
#!/bin/bash
echo "Backup starting..."
rsync -a /home/user /backup
```

- Learn variables, `if`, `for`, `while`, functions.

---

### 🧱 9. **Cron Jobs**

```bash
crontab -e
# m h dom mon dow command
0 3 * * * /home/user/backup.sh
```

- Automate backups, updates, cleanup jobs.

---

### 🔐 10. **Security**

- **SSH**: Disable root login, change port, use key-based auth.
- **Firewall**:

  ```bash
  ufw allow 22
  ufw enable
  ```

- Permissions hygiene. Principle of least privilege.

---

### 📊 11. **Monitoring & Logs**

- View logs: `journalctl`, `/var/log/syslog`, `/var/log/auth.log`
- Tools: `top`, `htop`, `iotop`, `du -sh *`, `df -h`

---

### 💾 12. **Storage & Filesystems**

- Mount drives:

  ```bash
  mount /dev/sdb1 /mnt/data
  ```

- Partitions: `fdisk`, `lsblk`, `blkid`
- LVM = Logical Volume Manager (flexible partitioning)

---

### 💣 13. **Backups**

- `rsync`, `tar`, `scp`, `dd` — your BFFs

```bash
tar czvf backup.tar.gz /etc
rsync -avz /var/www/ user@host:/backup
```

---

### 🧯 14. **Troubleshooting**

- Boot issues? Try `grub rescue` or Live CD.
- Check disk: `fsck`, `smartctl`
- Permission denied? Check `ls -l`, `groups`, `sudo`.

---
