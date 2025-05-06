# 🌐 **Computer Networking**

## ✅ **0. The Mental Model First**

Before we dive into layers and protocols, here's the truth:

> Networking is about **moving data** from one machine to another — reliably, securely, and in order (most of the time).

That’s it. The rest is _plumbing_ and _rules_ to make that happen.

---

## 🧱 **1. OSI vs TCP/IP — Layered Cake of Networking**

**OSI Model (Theoretical - 7 Layers):**

> _Please Do Not Throw Sausage Pizza Away_

| Layer | Name         | Purpose               | Example                 |
| ----- | ------------ | --------------------- | ----------------------- |
| 7     | Application  | Interface to the user | HTTP, DNS, FTP          |
| 6     | Presentation | Encoding/Decoding     | SSL/TLS, JPEG, ASCII    |
| 5     | Session      | Session Management    | NetBIOS, RPC            |
| 4     | Transport    | Reliable transport    | TCP, UDP                |
| 3     | Network      | Routing               | IP, ICMP                |
| 2     | Data Link    | Node-to-node delivery | Ethernet, MAC addresses |
| 1     | Physical     | Actual transmission   | Cables, Wi-Fi, Radio    |

**TCP/IP Model (Practical - 4 Layers):**

| Layer                 | OSI Equivalent | Example         |
| --------------------- | -------------- | --------------- |
| Application           | 7,6,5          | HTTP, DNS       |
| Transport             | 4              | TCP, UDP        |
| Internet              | 3              | IP, ICMP        |
| Link (Network Access) | 2,1            | Ethernet, Wi-Fi |

> 💡 Think: **Data moves down the stack on sender's side, and up on the receiver's side.**

---

## 🚚 **2. IP, TCP, UDP — Data Movers**

### 🧩 **IP (Internet Protocol)**

- IP = **Address + Route**
- Every device gets an **IP address** (e.g., 192.168.1.1)
- Routes data between networks
- Works best-effort (may drop packets)

### 🚛 **TCP (Transmission Control Protocol)**

- Reliable, Ordered, Error-Checked
- Handshake (`SYN`, `ACK`, `FIN`)
- Powers: HTTP(S), FTP, SSH, etc.

### 🛵 **UDP (User Datagram Protocol)**

- Fire-and-forget, no guarantees
- Used in DNS, VoIP, video streaming

> **TCP = Certified Mail. UDP = Paper airplane.**

---

## 🌍 **3. DNS & HTTP — The Real Web Stuff**

### 🔎 **DNS (Domain Name System)**

- Translates `google.com` → `142.250.72.14`
- Hierarchical: Root → TLD (.com) → Domain → Record

**Query Flow:**

```
Browser → DNS Resolver → Root Server → TLD → Authoritative → IP
```

Use `nslookup`, `dig`, or `host` to explore DNS hands-on.

---

### 🌐 **HTTP (HyperText Transfer Protocol)**

- Application-layer protocol (Layer 7)
- Stateless: Each request is independent
- Common methods: GET, POST, PUT, DELETE

**Example Request:**

```
GET /index.html HTTP/1.1
Host: example.com
```

HTTP/1.1 vs HTTP/2 vs HTTP/3?

> - HTTP/2 = Multiplexed streams (faster)
> - HTTP/3 = Runs over QUIC (UDP-based, low latency)

---

## 🧠 **4. Ports, Sockets & Addresses**

### 🧵 **Sockets**

A socket = **IP + Port**

- Think: `192.168.1.100:443`

Common Ports:

- 80 → HTTP
- 443 → HTTPS
- 22 → SSH
- 53 → DNS
- 25 → SMTP

> 💻 A web server listens on port 80 or 443. Your browser opens a random port in the 30000–60000 range to connect.

**Try:** `netstat -anp`, `ss -tuln`, or `lsof -i`

---

## 🧪 **5. Tools You Must Master**

| Tool               | Use Case                     |
| ------------------ | ---------------------------- |
| `ping`             | Test reachability via ICMP   |
| `traceroute`       | Trace hops to a destination  |
| `nslookup` / `dig` | DNS lookups                  |
| `netstat` / `ss`   | View network connections     |
| `tcpdump`          | Capture raw packets (CLI)    |
| `wireshark`        | Visual packet analysis (GUI) |
| `curl` / `wget`    | HTTP requests                |
| `nmap`             | Port scanning                |

---

## 🔐 **6. SSL/TLS, HTTPS, VPN, Firewalls**

### 🔐 **SSL/TLS**

- Encrypts traffic (HTTPS)
- Uses asymmetric + symmetric crypto
- In browser, you see 🔒

> Use `openssl s_client -connect example.com:443` to peek into the handshake.

### 🌐 **VPNs**

- Secure tunnel over public network
- Hides IP, encrypts traffic end-to-end

### 🔥 **Firewalls**

- Block/allow traffic based on rules
- `iptables`, `ufw`, or cloud firewalls

---

## 🧰 **7. Sockets Programming (Practical)**

Write raw socket programs to really _get it_:

### 📄 Basic TCP Server in Python:

```python
import socket

s = socket.socket()
s.bind(('0.0.0.0', 9000))
s.listen(1)
conn, addr = s.accept()
print("Connected by", addr)
data = conn.recv(1024)
conn.sendall(data)
```

Try building:

- Echo server/client
- Mini HTTP server
- Simple chat app over TCP

---

## 🎯 What You Should Be Able to Do Now:

✅ Draw the flow of `google.com` loading
✅ Use `ping`, `netstat`, `curl`, `nmap` comfortably
✅ Write a TCP socket server
✅ Understand DNS resolution
✅ Sniff traffic with `tcpdump` or `Wireshark`
✅ Explain TCP vs UDP like a boss

---

## 📚 Next Level (Optional)

- QUIC, HTTP/3
- NAT traversal, STUN/TURN
- Load Balancers, CDNs
- Advanced socket options (SO_REUSEADDR etc.)

---

Wanna build a **project** now to solidify all of this?
Could be a **port scanner**, **network monitor**, **MITM proxy**, or even a **packet sniffer**. Want me to suggest a beginner-friendly project and guide you through it?
