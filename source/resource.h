//The resources in a owned by a player
#ifndef RESOURCE_H_
#define RESOURCE_H_

class resource
{
	private:
		int amount;
	
	public:
		resource();
		resource(int initial);
		int get();
		void set(int amount);
		void add(int inc);
		void spend(int dec);
};

#endif