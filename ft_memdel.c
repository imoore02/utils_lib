#include <stdlib.h>

//Frees memory at void **ap:
//(1) free memory at *ap, (what *ap points to) and set it to NULL;
void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = (NULL);
}