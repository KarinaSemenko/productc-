#include <cstdlib>
#include <iostream>
#include <string>
#include "product.h" 

using namespace std;


Product::Product()
{
prodName = "phone";
producer = "";
expDate = "";
price = "";  
amount = "";
model = "";          
	
}
void Product::setProdName(string pN)
{
   prodName = pN;
}
void Product::setProducer(string prod)
{
  producer = prod;
}
void Product::setModel(string mod)
{
  model = mod;
}
void Product::setPrice(float pr)
{
  price = pr;
}
void Product::setExpDate(int eD)
{
  expDate = eD;
}
void Product::setAmount(int am)
{
  amount = am;
}
string  Product::getProdName( )
{
  return prodName;
}
string Product::getProducer( )
{
  return producer;
}
string Product::getModel( )
{
  return model;
}
float Product::getPrice( )
{
  return price;
}
int Product::getExpDate( )
{
  return expDate;
}
float Product::getAmount( )
{
  return amount;
}
