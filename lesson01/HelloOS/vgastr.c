//Sean Bei @ 05.13.2021
void _strwrite(char* string)
{
	char* p_strdst = (char*)(0xb8000); //point to start address of display
	while(*string)
	{
		*p_strdst = *string++;
		p_strdst += 2;
	}
	return;
}

void printf(char* fmt, ...)
{
	_strwrite(fmt);
	return;
}
