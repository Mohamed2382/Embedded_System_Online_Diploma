
//swapping_two_arrays
#define MAX_SIZE 100 // Maximum array size
/* Function declarations */
void inputArray(int arr[], int size);
void printArray(int arr[], int size);
void swapArray(int sourceArr[], int destArr[]);

int main()
{
	int sourceArr[MAX_SIZE];
	int destArr[MAX_SIZE];
	int size1,size2;


	// Input array size
	printf("Enter size of array1: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &size1);

	printf("Enter size of array2: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &size2);

	// Input elements of destination array
	printf("Enter %d elements in source array: ", size1);
	fflush(stdin);fflush(stdout);
	inputArray(sourceArr, size1);

	// Input element of destination array
	printf("Enter %d elements in destination array: ", size2);
	fflush(stdin);fflush(stdout);
	inputArray(destArr, size2);


	/*
	 * Print elements of both arrays before swapping
	 */
	printf("\n\nSource array before swapping: ");
	printArray(sourceArr, size1);

	printf("\nDestination array before swapping: ");
	printArray(destArr, size2);


	/* Swap elements of both arrays. */
	swapArray(sourceArr, destArr);


	/*
	 * Print elements of both arrays after swapping
	 */
	printf("\n\nSource array after swapping: ");
	printArray(sourceArr, size2);

	printf("\nDestination array after swapping: ");
	printArray(destArr, size1);


	return 0;
}

void inputArray(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void printArray(int arr[], int size)
{
	int i;
	// Print elements of array one by one
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void swapArray(int sourceArr[], int destArr[])
{
	int i;
	for(i=0;i<MAX_SIZE;i++)
	{
		//write any swapping technique
		sourceArr[i] ^= destArr[i];
		destArr[i] ^= sourceArr[i];
		sourceArr[i] ^= destArr[i];


	}
}

