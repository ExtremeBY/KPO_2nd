#include "Macros.h"
typedef string type;
typedef string name;
typedef unsigned int inventory_number;
typedef unsigned int quantity;
typedef unsigned int price;
typedef string manufacturer;
typedef unsigned int time_for_realization;
struct product
{
	type type_;
	name name_;
	inventory_number inventory_number_;
	quantity quantity_;
	price price_;
	manufacturer manufacturer_;
	time_for_realization time_for_realization_;
};
bool operator > (product prod1, product prod2)
{
	ret((prod1.type_ > prod2.type_) || (prod1.type_ == prod2.type_ && prod1.name_ > prod2.name_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ > prod2.inventory_number_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ == prod2.inventory_number_ && prod1.quantity_ > prod2.quantity_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ == prod2.inventory_number_ && prod1.quantity_ == prod2.quantity_ && prod1.price_ > prod2.price_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ == prod2.inventory_number_ && prod1.quantity_ == prod2.quantity_ && prod1.price_ == prod2.price_ && prod1.manufacturer_ > prod2.manufacturer_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ == prod2.inventory_number_ && prod1.quantity_ == prod2.quantity_ && prod1.price_ == prod2.price_ && prod1.manufacturer_ == prod2.manufacturer_ && prod1.time_for_realization_ > prod2.time_for_realization_));
}
bool operator < (product prod1, product prod2)
{
	ret((prod1.type_ < prod2.type_) || (prod1.type_ == prod2.type_ && prod1.name_ < prod2.name_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ < prod2.inventory_number_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ == prod2.inventory_number_ && prod1.quantity_ < prod2.quantity_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ == prod2.inventory_number_ && prod1.quantity_ == prod2.quantity_ && prod1.price_ < prod2.price_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ == prod2.inventory_number_ && prod1.quantity_ == prod2.quantity_ && prod1.price_ == prod2.price_ && prod1.manufacturer_ < prod2.manufacturer_) || (prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ == prod2.inventory_number_ && prod1.quantity_ == prod2.quantity_ && prod1.price_ == prod2.price_ && prod1.manufacturer_ == prod2.manufacturer_ && prod1.time_for_realization_ < prod2.time_for_realization_));
}
bool operator == (product prod1, product prod2)
{
	ret((prod1.type_ == prod2.type_ && prod1.name_ == prod2.name_ && prod1.inventory_number_ == prod2.inventory_number_ && prod1.quantity_ == prod2.quantity_ && prod1.price_ == prod2.price_ && prod1.manufacturer_ == prod2.manufacturer_ && prod1.time_for_realization_ == prod2.time_for_realization_));
}
int main()
{
	product prod1 = {"phone", "rog phone 5", 12345, 150, 5000, "ASUS", 300};
	product prod2 = {"phone", "rog phone 2", 12340, 190, 2000, "ASUS", 100};
	product prod3 = {"phone", "rog phone 2", 12340, 190, 2000, "ASUS", 100};
	if (prod1 > prod2) {
		vi "prod1 > prod2"; nl
	}
	else if (prod1 < prod2) {
		vi "prod1 < prod2"; nl
	}
	else if (prod1 == prod2) {
		vi "prod1 = prod2"; nl
	}
	if (prod2 > prod3) {
		vi "prod2 > prod3"; nl
	}
	else if (prod2 < prod3) {
		vi "prod2 < prod3"; nl
	}
	else if (prod2 == prod3) {
		vi "prod2 = prod3"; nl
	}
	if (prod1 > prod3) {
		vi "prod1 > prod3"; nl
	}
	else if (prod1 < prod3) {
		vi "prod1 < prod3"; nl
	}
	else if (prod1 == prod3) {
		vi "prod1 = prod3"; nl
	}
}