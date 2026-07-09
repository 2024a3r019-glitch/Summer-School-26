<div align="center">

# **📡 Q40 – MQTT Quality of Service (QoS) Levels**

*IoT Summer School 2026*

</div>

---

## **🎯 Objective**

Understand the three **MQTT Quality of Service (QoS)** levels, their reliability guarantees, and determine the most suitable QoS level for an **IoT Water Level Monitoring System**.

---

## **📖 What is QoS in MQTT?**

**Quality of Service (QoS)** in MQTT defines the level of guarantee for message delivery between the **publisher** and the **subscriber**. It enables developers to balance **reliability**, **network bandwidth**, **latency**, and **power consumption** according to the application's requirements.

MQTT provides **three QoS levels**, each offering a different level of delivery assurance.

---

## **📊 MQTT QoS Levels**

| QoS Level | Delivery Guarantee | Description | Advantages | Disadvantages |
|-----------|--------------------|-------------|------------|---------------|
| **QoS 0** | At most once | The message is sent only once without acknowledgment. If it is lost, it is not retransmitted. | Fastest communication, lowest bandwidth and power consumption. | Messages may be lost. |
| **QoS 1** | At least once | The sender waits for an acknowledgment (ACK). If no ACK is received, the message is retransmitted. | Reliable delivery with low communication overhead. | Duplicate messages may occur. |
| **QoS 2** | Exactly once | Uses a four-step handshake to guarantee that each message is delivered exactly once. | Highest reliability with no duplicate messages. | Highest bandwidth usage, latency, and processing overhead. |

---

## **⚖️ QoS Comparison**

| Feature | QoS 0 | QoS 1 | QoS 2 |
|---------|-------|-------|-------|
| **Reliability** | Low | High | Very High |
| **Duplicate Messages** | No | Possible | No |
| **Acknowledgment Required** | No | Yes | Yes (Multiple Steps) |
| **Network Overhead** | Very Low | Medium | High |
| **Latency** | Lowest | Medium | Highest |
| **Best For** | Sensor Data, Telemetry | Alerts, Monitoring Systems | Financial Transactions, Critical Control Systems |

---

## **✅ Recommended QoS for an IoT Water Level Monitoring System**

**Recommended QoS:** **QoS 1 (At Least Once)**

For an **IoT Water Level Monitoring System**, **QoS 1** is the most suitable option because it provides reliable message delivery while maintaining good network efficiency.

### **Reasons**

- 🌊 Water level readings are critical for detecting floods and low-water conditions.
- 📡 Losing important sensor readings could delay alerts and affect safety.
- 🔄 QoS 1 automatically retransmits messages if acknowledgments are not received.
- 🕒 Duplicate messages can be filtered using timestamps or message IDs.
- ⚡ QoS 1 provides an excellent balance between reliability and communication overhead.

**Why not QoS 0?**

- Messages may be lost during network interruptions.

**Why not QoS 2?**

- Higher bandwidth usage.
- Increased latency.
- Greater processing overhead.
- Unnecessary for most monitoring applications.

---

## **🌍 Practical Example**

A **river monitoring station** measures the water level every **10 seconds**.

- **QoS 0:** A reading may be lost if the network connection fails.
- **QoS 1:** The reading is retransmitted until the cloud acknowledges it.
- **QoS 2:** The reading is guaranteed to arrive exactly once but requires additional communication, increasing latency and power consumption.

---

## **🎯 Conclusion**

MQTT offers **three Quality of Service (QoS) levels** to meet different IoT communication requirements.

- **QoS 0** is suitable for non-critical telemetry where occasional data loss is acceptable.
- **QoS 1** provides reliable delivery with minimal overhead, making it ideal for most IoT monitoring systems.
- **QoS 2** offers the highest reliability but introduces additional bandwidth usage and latency.

For an **IoT Water Level Monitoring System**, **QoS 1 (At Least Once)** is the preferred choice because it ensures reliable data delivery while maintaining efficient network usage, lower latency, and reasonable power consumption.

---

## **👨‍💻 Author**

**Name:** **VASU JAMWAL**

**Course:** IoT Summer School 2026

**Question:** **Q40 – MQTT Quality of Service (QoS) Levels**
