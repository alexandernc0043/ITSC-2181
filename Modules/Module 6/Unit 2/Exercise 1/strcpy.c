int strcpy (char x[], char y[])
{ 
	int i = 0;
	while ((x[i]=y[i])!='\0') { i++;}
	return i;
}