Q15. Rewrite the function below so that so it uses pointers instead of reference variables, and then demonstrate the function in a complete program.

int doSomething(int &x, int &y)
{
	int temp = x;
	x = y * 5;
	y = temp * 3;
	return x + y;
}
