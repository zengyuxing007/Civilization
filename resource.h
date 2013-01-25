//The resources in a owned by a player
#ifndef RESOURCE_H_
#define RESOURCE_H_

class resource
{
	private:
		int quanity;
	
	public:
		resource();
		resource(int initial);
		int get();
		void add(int x);
		void spend(int x);
};

#endif