#include "product.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Product productone;
    string productName;
    string productModel;
    string productProducer;
    float price;
    int amount;
    int expirationDate;
    
    
    cout << "Please enter product name. " << endl;
    cin >> productName;
    
    cout << "Please enter model. " << endl;
    cin >> productModel;
    
    cout << "Please enter producer. " << endl;
    cin >> productProducer;
    
    cout << "Please enter price. " << endl;
    cin >> price;
    
    cout << "Please enter amount. " << endl;
    cin >> amount;
    
    cout << "Please enter expiration date. " << endl;
    cin >> expirationDate;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
