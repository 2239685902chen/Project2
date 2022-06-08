#include <stdio.h>
#include <assert.h>
struct s
{
	char q;
	int w;
	double e;
};
void Fuzi(struct s* c)
{
	c->q = 'b';
	c->w = 8;
	c->e = 3.14;
}
void my_printf(const struct s* c)
{
	assert(c);
	printf("%c %d %lf\n", c->q, c->w, c->e);
}
int main()
{
	struct s c;
	Fuzi(&c);
	my_printf(&c);
	return 0;
}