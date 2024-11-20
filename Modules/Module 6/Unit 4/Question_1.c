// Question 1

int main(){
	FILE* ptr;
	// missing pieces go here
	ptr = fopen("./Hello.txt","w");
	if(ptr == NULL){
		exit(1);
	}
	fclose(ptr);
	// end
	printf("File Created!\n\n");
	return 0;
}