int main()
{
	void *ptr;
	unsigned int nb;
	int hex;
	int hex2;
	char *null_str = NULL;
	nb = 534;
	ptr = (void *) 123456401923570;
	hex = 7;
	hex2 = 567874;

	ft_printf("char c is %c%\n", 'H');
	ft_printf("char c is %c%jhbvu & ch is %c\n", 'H', 'p');
	//printf("char c is %c%jhbvu & ch is %c\n", 'H', 'p');
	ft_printf("int d is %d\n", 1000);
	printf("int d is %d\n", 1000);
	ft_printf("int negative d is %d\n", -100970);
	printf("int negative d is %d\n", -100970);
	ft_printf("The string is: %s\n", "cavolo guarda qua");
	printf("The string is: %s\n", "cavolo guarda qua");
	ft_printf("Pointer is %p\n", &ptr);
	printf("Pointer is %p\n", &ptr);
	ft_printf("Printf Unsigned decimal %u\n", nb);
	printf("Printf Unsigned decimal %u\n", nb);
	ft_printf("Printf hex lower %x\n", hex);
	printf("Printf hex lower %x\n", hex);
	ft_printf("Printf hex lower %x\n", hex2);
	printf("Printf hex lower %x\n", hex2);
	ft_printf("Printf hex UP %X\n", hex2);
	printf("Printf hex UP %X\n", hex2);
	printf("%d\n", ft_printf("print %%\n"));
	printf("%d\n",printf("print %%\n"));
	ft_printf("%s\n", null_str);
	printf("%s\n", null_str);
	ft_printf("%u\n", (unsigned int)2147483648);

}
