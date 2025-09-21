🏦 Simple Banking System (C Program)

📖 Description

This is a simple menu-driven banking simulation program in C.
It allows users to interact with a virtual bank account where they can:

💰 Check their current balance

📥 Deposit money

💳 Withdraw money

🚪 Exit the system


The program uses loops, switch-case, and input validation to simulate an ATM-like interface.


---

⚙️ Features

✅ Menu-based interface for easy navigation

✅ Input validation (prevents invalid menu options)

✅ Deposit functionality with balance update

✅ Withdrawal with insufficient balance check

✅ Keeps track of total balance throughout the session



---

🧑‍💻 How It Works

1. Program starts with a welcome message.


2. User is shown a menu with 4 options:

1 → Show bank balance

2 → Deposit money

3 → Withdraw money

4 → Exit program



3. After every valid operation, the menu is shown again until the user exits.


4. If the user tries to withdraw more money than available, an insufficient balance message is shown.


5. Program ends when the user selects Exit (4).




---

🖥️ Sample Run

welcome to our bank!
How can i help you?

1) bankbalance
2) deposit
3) withdraw
4) exit
ENTER YOUR OPT(1,2,3,4): 2
enter how much amount you want to deposit : 500
congratulations your ₹ 500.00 rupees are successfully deposited
your bank balance is ₹ 500.00

1) bankbalance
2) deposit
3) withdraw
4) exit
ENTER YOUR OPT(1,2,3,4): 3
enter how much amount you want to withdraw : 200
congratulations your ₹200.00 rupees are successfully debited
take your money
your bank balance is ₹ 300.00


---

🛠️ Technologies Used

C Programming Language

Standard Libraries (stdio.h)



---

🚀 How to Run

1. Clone the repository:

git clone https://github.com/your-username/banking-system-c.git


2. Compile the program:

gcc bank.c -o bank


3. Run the executable:

./bank




---

📌 Future Improvements

Add PIN verification before accessing account

Maintain a transaction history (mini statement)

Allow multiple accounts

