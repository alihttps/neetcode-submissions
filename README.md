# 🚀 NeetCode Journey — @ali

This repository tracks my progress through the NeetCode roadmap. It serves as a personal archive for optimized solutions, specifically focused on **C++** and **System Programming** logic.

---

## 🧠 Mastered Patterns & Mechanics

### 1. Two-Pointer Squeeze
Used for sorted arrays to turn chaotic searches into a structured "pinch" movement.
* **Mechanism:** $O(n)$ pass using `L` and `R` pointers moving toward each other.
* **Key Use Case:** 3Sum, Container With Most Water.

### 2. Sliding Window
Dynamic boundary management for contiguous subarrays/substrings.
* **Mechanism:** The Scout (`R`) expands the window; the Anchor (`L`) cleans up/shrinks the window only when the logic is broken (e.g., duplicates found).
* **Key Use Case:** Longest Substring Without Repeating Characters.

### 3. Length-Prefixed Encoding
Robust string serialization used in protocol design.
* **Mechanism:** Using `Length + Separator + Data` to avoid delimiter collisions.
* **Key Use Case:** String Encode and Decode.

---

## 📂 Repository Structure
Solutions are categorized by algorithmic patterns. Each folder contains the evolution of a specific problem.

```text
<Pattern-Folder>/
  └── <Problem-Title>/
      ├── submission-0.cpp  # Initial logic / "Hack" approach
      └── submission-n.cpp  # Optimized / Final "Squeeze" or "Window"
