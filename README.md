# SAFE-IOT

**Smart Adaptive Framework for Early Food Spoilage Detection**

---

## 📌 Overview

SAFE-IoT is an **open-source, tray-level IoT framework** for **early food spoilage detection** using **adaptive embedded firmware and edge intelligence**.

Unlike traditional freshness monitoring systems that rely on fixed thresholds or room-level sensing, SAFE-IoT focuses on **local micro-climate analysis** at the **individual tray or batch level**, enabling **early warnings hours before visible spoilage**.

This repository provides a **reference firmware architecture** that translates research ideas into **industrial-grade embedded design**, suitable for scaling, experimentation, and further research.

---

## 🎯 Core Idea

Food spoilage begins as **subtle chemical and environmental changes** before it becomes visible or detectable by smell.

SAFE-IoT detects these early signs by:

* Monitoring **gas resistance, humidity, and temperature**
* Learning **local environmental baselines**
* Tracking **trends and correlations**, not just absolute values
* Making decisions using **deterministic firmware logic**, assisted by lightweight edge AI

The system is designed to operate **continuously**, **autonomously**, and **at scale**.

---

## 🧠 What Makes SAFE-IoT Different

* **Adaptive baselining** instead of fixed calibration
* **Trend-based early warning**, not threshold alarms
* **Firmware-first intelligence** with clear separation of concerns
* **Edge AI used as decision support**, not as a black box
* **Tray-level granularity**, enabling fine-grained monitoring

---

## 🔧 Firmware Architecture (V0.1)

The firmware is designed with an **industrial layered architecture**, targeting **ESP32 + BME680** as the reference platform.

```
firmware/esp32/
├── drivers/        # Hardware abstraction (BME680)
├── services/       # Baseline learning, feature extraction, state logic
├── ml/             # Lightweight edge classifier (placeholder)
├── system/         # Configuration, scheduling, storage
├── comms/          # Telemetry interface
├── main.c          # System orchestration
└── platformio.ini
```

This structure ensures:

* Maintainability
* Extensibility
* Open-source friendliness
* Hardware and ML independence

---

## ⚙️ What the Firmware Does (V0.1)

SAFE-IoT firmware currently implements:

* Sensor abstraction for **BME680**
* **Adaptive gas baseline learning**
* Basic **feature extraction**:
  * Gas ratio
  * Gas slope
  * Humidity gradient
* **Edge inference placeholder**
* **State-machine–based decision logic**
* Modular structure ready for scaling

The firmware is designed to run **24×7**, with learning and decision-making happening **on-device**.

---

## 📦 What V0.1 Includes

✔ Industrial-grade firmware folder structure  
✔ ESP32 + BME680 reference implementation  
✔ Adaptive baseline logic  
✔ Trend feature placeholders  
✔ Explainable, lightweight edge classifier stub  
✔ Deterministic spoilage state machine  
✔ Clean separation between sensing, ML, and decisions  

This version serves as a **foundation**, not a final product.

---


## 🧪 Intended Use

SAFE-IoT is suitable for:

* Research experimentation
* Embedded systems learning
* Edge AI prototyping
* Open hardware development
* Early-stage product exploration

It is **not** intended to replace certified food safety systems.

---

## 🤝 Contributions

SAFE-IoT is an **open-source research and engineering project**.

Contributions are welcome in:

* Firmware improvements
* Sensor characterization
* ML models
* Hardware design
* Documentation

See `CONTRIBUTING.md` 

---

## 📄 Background

This project builds upon work presented at **NCET-2025**, and aims to evolve that research into a **reproducible, extensible, and open framework**.

---

## 📜 License

Apache License 2.0 

---

