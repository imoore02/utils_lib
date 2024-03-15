int		ft_lerpi(int first, int second, double p)
{
	if (first == second)
		return (first);
	if (p == 0.0f)
		return (first);
	if (p == 1.0f)
		return (second);
	return ((int)((double)first + (second - first) * p));
}