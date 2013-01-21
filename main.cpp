int main()
{
	vector<int> test(5, 25);
	for (vector<int>::iterator it = test.begin(); it != test.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << "Hello World";
	return 0;
}