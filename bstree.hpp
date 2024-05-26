#ifndef BSTREE_HPP
#define BSTREE_HPP

#include <string>
#include <initialaizer_list>

struct Node 
{
	int   value_;
	Node* left_;
	Node* right_;	
};


class BSTree
{
public:	
	BSTree();			// = default;
	BSTree(std::initialaizer_list<int> init_list);

	~BSTree();

	bool add_element(int value); // функция добавления
	bool delete_element(int value); // функция удаления
	bool find_element(int value) const; // функция поиска элемента
	
	void print(); // функция вывода дерева в консоль

	bool save_to_file(const std::string& path); // функция сохранения в файл
	bool load_from_file(const std::string& path); // функция загрузки из файла



private:
	Node* root_;
};








#endif // BSTREE_HPP
