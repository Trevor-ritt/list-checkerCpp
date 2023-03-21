#include <iostream>

int main()
{
	std::string yesno;
	std::string bought_item;
	std::string list[][3] = {"2 egg cartons", "3 milk jugs", "A 3 pack of coca cola"};
	std::cin >> bought_item;
	if (bought_item == "list") {
		std::cout << "Proceding to checkout";
	}
	else {
		std::cout << "unexpected item detected, do you want to add " << bought_item << " to the list?   Yes or No ";
		std::cin >> yesno;
		if (yesno == "Yes") {
			std::cout << "Ok item: " << bought_item << " Added to list and cart.";

		}
		if (yesno == "No") {
			std::cout << "Ok Removing " << bought_item << " From the cart.";
		}

		std::cout << " Proceding to checkout";
	}

}