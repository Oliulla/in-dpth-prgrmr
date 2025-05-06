# ⚙️ **Intermediate Networking: Real-World Engineering, Protocol Wizardry & System Tactics**

## 🛰️ 1. **Routing, NAT & Subnetting — Your Data’s GPS**

### 🌍 **IP Routing Basics**

- Devices talk **within the same subnet** directly.
- Outside their subnet? → Goes to **default gateway** (usually a router).
- Routers forward packets using **routing tables**.

**Types of Routing:**

- **Static Routing** – manually defined
- **Dynamic Routing** – protocols like OSPF, BGP do the job

> `traceroute` shows each hop. Those are routers deciding, _"Where next?"_

---

### 🧮 **Subnetting (CIDR)**

This is how networks are sliced.

Example:

- `192.168.1.0/24` → 256 IPs (254 usable)
- `/16` → Big network
- `/30` → Tiny 2-host network

> Formula: `2^(32 - subnet_mask)` IPs per subnet.

### 🔁 **NAT (Network Address Translation)**

Your private IP (e.g., `192.168.0.5`) can’t be used on the Internet. NAT translates it:

```
Private IP → Public IP (via router) → Server → Response → NAT → Your machine
```

3 Types:

- **Static NAT**: One-to-one
- **PAT** (Port Address Translation): Many-to-one (what your Wi-Fi router does)
- **Dynamic NAT**: Pool-based

---

## 🦾 2. **Advanced Tools You Should Know Cold**

| Tool                    | Use Case                               |
| ----------------------- | -------------------------------------- |
| `iptables` / `nftables` | Custom firewalls on Linux              |
| `tcpdump`               | Sniff traffic in CLI                   |
| `Wireshark`             | GUI packet analysis                    |
| `curl -v`               | Verbose HTTP request (headers, timing) |
| `nmap -A`               | Aggressive scanning (OS + services)    |
| `traceroute`            | Trace path to server                   |
| `ip`, `route`           | Show or modify routing tables          |

Try:

```bash
curl -I https://google.com
tcpdump -i eth0 port 80
nmap -p 1-1000 localhost
```

---

## 💬 3. **Deep Protocol Dives**

### 📮 **SMTP, IMAP, POP3 (Email)**

- **SMTP (25, 587)** – Sending
- **IMAP (143/993)** – Reading (server-side)
- **POP3 (110/995)** – Reading (downloads)

> Use `telnet smtp.example.com 25` to manually send an email. Brutal fun.

---

### 🎥 **RTSP / RTP / WebRTC (Streaming & Voice)**

- Mostly UDP
- Handles jitter, latency
- **WebRTC**: Real-time peer-to-peer media (Zoom, Google Meet)

> These protocols don’t just _send_, they _negotiate_ real-time media flow like diplomats.

---

### 🗃️ **DHCP (Dynamic Host Configuration Protocol)**

Auto-assigns IPs, subnet masks, DNS, etc.

Four-step handshake:

```
DISCOVER → OFFER → REQUEST → ACK
```

> Without DHCP, every machine needs a manual config. Like writing your address on every Amazon order.

---

## 🔐 4. **Firewalls, VPNs, Proxies**

### 🔥 **Firewalls**

- Block/allow based on IP, port, protocol
- Can be **host-based** (your OS) or **network-level** (router)

```bash
sudo iptables -A INPUT -p tcp --dport 22 -j ACCEPT
```

### 🧙 **VPNs**

- Encrypts all traffic
- Protocols: OpenVPN, WireGuard, IPsec
- Masks IP, bypasses restrictions

> `sudo openvpn client.ovpn` — welcome to encrypted bliss.

### 🪞 **Proxies**

- Forward requests on behalf of client
- Types: Forward proxy, Reverse proxy (like NGINX), Transparent proxy

---

## 🧱 5. **Network Layers in Web Apps**

If you're building real apps, here's what you interact with:

```
[Browser]
   ↓
HTTP/HTTPS (App Layer)
   ↓
TLS (SSL Encryption)
   ↓
TCP/IP
   ↓
Ethernet/WiFi
   ↓
Router → Internet
```

### Hosting Apps?

You’ll deal with:

- **Ports** (80, 443, etc.)
- **SSL certs** (Let’s Encrypt or Cloudflare)
- **Reverse proxies** (NGINX, HAProxy)
- **Rate limiting, CORS, headers, redirects**

---

## 🧠 6. **Intermediate Networking Concepts**

### 📦 MTU & Fragmentation

- **MTU (Max Transmission Unit)** — largest chunk that fits on the wire
- If packet too big → fragmentation or drop

Use:

```bash
ping -M do -s 1472 google.com
```

### ⏱️ Latency vs Throughput

- **Latency**: Time delay (ping)
- **Throughput**: Amount of data per second (Mbps)

Think:

- Ferrari = Low latency
- Truck = High throughput

You need both.

---

### 🧲 Load Balancing

- **Layer 4 (TCP-based)** or **Layer 7 (HTTP-based)**
- Round robin, sticky sessions, weighted rules
- NGINX, HAProxy, AWS ELB

---

## ⚙️ 7. **Project Ideas to Cement Your Knowledge**

Build any of these and you're not just reading—you’re **becoming the network**:

1. 🛡️ **Firewall Rule Visualizer**
2. 🐙 **Multi-threaded Port Scanner** (with banners!)
3. 🕵️‍♂️ **Packet Sniffer in Python** using `scapy` or `socket`
4. 🔗 **Custom VPN using WireGuard**
5. 🧰 **Mini Load Balancer** using Node.js or Go

Wanna pick one and I’ll guide you step-by-step like a networking Gandalf?

---

## 🚀 What’s Next After This?

You’re entering **systems design**, **cybersecurity**, and **network automation (DevNet, NetOps)** territory.

Think:

- Kubernetes networking (services, pods, ingress)
- Linux namespaces and `iptables` wizardry
- DNS over HTTPS
- Wire-level reverse engineering (Wireshark magic)

---

You're on fire 🔥, and we’re just getting started.

Wanna dive into **one of the project ideas above**, or wanna explore something like **Docker & Kubernetes networking**, or maybe even **OSI layer attack vectors** (pen-testing side)?
