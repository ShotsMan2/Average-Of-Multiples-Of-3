# Average of Multiples of 3

This project implements a mathematical calculation function in C that processes a range of integers to find the average of those divisible by 3.

## ⚙️ Logic

1.  **Input:** Two integers (`num1`, `num2`).
2.  **Range Definition:** Determines the range between the smaller and larger number (exclusive).
3.  **Filtration:** Selects numbers where `x % 3 == 0`.
4.  **Calculation:** $\text{Average} = \frac{\sum \text{Selected Numbers}}{\text{Count}}$

## 🚀 Example Output

Based on Question 2:
**Input:** `4` and `15`

* **Range:** $5, 6, 7, ..., 14$
* **Multiples of 3 found:** $6, 9, 12$
* **Sum:** $6 + 9 + 12 = 27$
* **Count:** $3$
* **Result:** $27 / 3 = 9$

```text
--- Ortalama Hesaplama Programi ---
Sayi 1: 4
Sayi 2: 15
Araliktaki 3'un katlarinin ortalamasi: 9
