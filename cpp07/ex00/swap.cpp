template<typename S>
void swap(S & a, S & b)
{
	S temp = a;
	a = b;
	b = temp;
}