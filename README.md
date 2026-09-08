# Cash
C program that calculates the minimum number of coins needed for a given amount of change using a greedy algorithm.
# 💰 Cash

A C program that calculates the **minimum number of coins** needed to make a given amount of change.

## 🧠 How It Works

The program uses a **greedy algorithm** to find the fewest coins.

It uses the following denominations:

- 🪙 25 cents
- 🪙 10 cents
- 🪙 5 cents
- 🪙 1 cent

The program always uses the largest possible coin first, then moves to the next denomination.

### Example

For **63 cents**:

```text
25 + 25 + 10 + 1 + 1 + 1 = 63
That means the minimum number of coins is: 6
✨ Features
Accepts a non-negative amount of change
Rejects negative input
Uses a greedy algorithm
Calculates the minimum number of coins
Handles different amounts of change
🛠️ Built With
C
CS50 Library
Greedy Algorithm
📚 Concepts Practiced
Variables
while loops
do...while loops
Arithmetic operators
Incrementing counters
Conditional logic
Greedy algorithms
🎓 About

This project was completed as part of Week 1 of Harvard's CS50.

Built while learning the fundamentals of C and problem solving. 💻
