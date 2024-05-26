#include <iosrtream>

#include "bstree.hpp"

int main()

{
	BSTree btree_1;
	size_t n;

	std::cout << "enter the num of vertices: ";
	std::cin >> n;

	for (size_t i = 0;i < n; ++i)
	{
		int v;
		std::cin >> v;
		btree_1.add_element(v);
	}	
	std::cout << "print tree:\n";
	btree_1.print();
	std::cout << "enter the search num: ";
	std::cin >> n;

	if (btree_1.find_element(n))
	{
		std::cout << "found\n";
	}
	else
	{
		std::cout << "not found\n";
	}
	std::cout << "enter the deletet num: ";
	std::cin >> n;

	if (btree_1.delete_element(n))
	{
		std::cout << "deleted\n";
	}
	else
	{
		std::cout << "not deleted\n";
	}
	std::cout << "print tree:\n";
	btree_1.print();
	btree_1.save_to_file("btree_1.txt");

	std::cout << "\ncreate new tree\n";
	BSTree	btree_2;
	bstree_2.load_from_file("btree_1.txt");
	std::cout << "print tree:\n";
	btree_1.print();
	
	std::cout << "create new tree using initializer list\n";
	BSTree btree_3{-3, 16, 49, 92, 51, 4, 3, -18};
	std::cout << "print tree:\n";
	btree_3.print();
}
