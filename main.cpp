#include <iostream>
using namespace std;

int incomeCalculator(char, int);
bool isValid(int, int);

int main()
{
  // Defined here to make things clean.
  int sectionATickets;
  int sectionBTickets;
  int sectionCTickets;

  // Simply asks how many tickets were sold in each section then uses the incomeCalculator to check and assign the total income to a unique variable for each section.
  cout << "Tickets sold in section A: ";
  cin >> sectionATickets;
  int sectionAIncome = incomeCalculator('A', sectionATickets);
  cout << "Tickets sold in section B: ";
  cin >> sectionBTickets;
  int sectionBIncome = incomeCalculator('B', sectionATickets);
  cout << "Tickets sold in section C: ";
  cin >> sectionATickets;
  int sectionCIncome = incomeCalculator('C', sectionATickets);

  // Outputs the total income by combining all the unique variables.
  cout << "The amount of income generated from ticket sales was $" << sectionAIncome + sectionBIncome + sectionCIncome;

  return 0;
}


// Has an input for section so it knows how much to calculate the tickets against and what kind of capacity to input into the isValid function.
int incomeCalculator(char section, int tickets)
{
  switch (section)
  {
    case 'A':
      while (isValid(tickets, 300))
      {
        cout << "That's not a valid amount of tickets sold." << endl;
        cout << "Please try again: ";
        cin >> tickets;
      }
      return tickets * 20;
    case 'B':
      while (isValid(tickets, 500))
      {
        cout << "That's not a valid amount of tickets sold." << endl;
        cout << "Please try again: ";
        cin >> tickets;
      }
      return tickets * 15;
    case 'C':
      while (isValid(tickets, 200))
      {
        cout << "That's not a valid amount of tickets sold." << endl;
        cout << "Please try again: ";
        cin >> tickets;
      }
      return tickets * 10;
    default:
      break;
  }
  return 0;
}

// Checks the tickets entered against the capacity defind in incomeCalculator.
bool isValid(int tickets, int capacity)
{
  if (tickets > capacity || tickets < 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
