#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

/*
 * Constructor that initializes the name of the item,
 * the price and number of items.
 */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*
 * Reduces the amount of items available by 1.
 */
void Inventory::sell()
{
  :m_in_stock--;
}

/*
 * Overloaded operator that displays the item name and price.
 */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
