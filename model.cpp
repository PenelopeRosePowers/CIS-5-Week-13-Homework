#include <iostream>
#include <string>

// Practice 13 · Part 2 — Your Name
// CIS 5 Week 13 · The struct your final needs

// TODO: rename this struct and its fields to fit your track.
struct Account {
  std::string name;
  double balance;
};

void printAccount(const Account& a) {
  // TODO: print every field on one line, then "\n"
  std::cout << a.name << " " << a.balance << "\n";
}

int main() {
  Account a1{"Ada", 50.25};
  Account a2{"Ben", 120.5};

  printAccount(a1);
  printAccount(a2);
  // TODO: make two records with braces, then print both with your helper
  return 0;
}
