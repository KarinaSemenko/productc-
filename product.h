#ifndef PRODUCT_H
#define PRODUCT_H
#include<string>
#include<iostream>

using namespace std;

class Product
{	
	private:
		string prodName;
		string producer;
		float price;
		int expDate;
		string model;
		int amount;
		
	public:
		Product();
		void setProdName(string pN);
	   	void setProducer(string prod);
	   	void setModel(string mod);
	   	void setPrice(float pr);
	   	void setExpDate(int eD);
	   	void setAmount(int am);
	   	string  getProdname( );
	   	string getProducer( );
	   	string getModel( );
	   	float getPrice( );
	   	int getExpDte( );
	   	int getAmount( );
};

	void Product::PrintInfo() {
   	std::cout << "Product Name: " << m_ProductName << "\n";
   	std::cout << "Model: " << m_ProductModel << "\n";
   	std::cout << "Producer: " << m_ProductProducer << "\n";
   	std::cout << "Price: " << m_Price << "\n";
   	std::cout << "Amount: " << m_Amount << "\n";
   	std::cout << "ExpDate: " << m_ExpirationDate << "\n";
   
}
#endif
