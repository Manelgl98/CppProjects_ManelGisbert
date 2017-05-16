class myList {

public:
	struct node
	{
		
		node *first;
		node *last;
		int value;
	

		
		
		
	};
	void front();
	void back();
	void push_front();
	void push_back();
	void pop_front();
	void pop_back();
	void size();
	void isEmpty();

	//myList(&copia);
	myList();
	~myList();
	
};