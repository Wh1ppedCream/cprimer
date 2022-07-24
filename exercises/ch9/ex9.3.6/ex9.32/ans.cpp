int main() 
{
	iter = vi.insert(iter, *iter++);
	//this is illegal as iter is changed as it is being used multiple times on the same line,
	//so the order of evaluation of iter is unknown.
}
