Problem link:https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1
sOLUTION:
// A utility function to minheapify the node harr[i] of a
// heap stored in harr[]
void minHeapify(HeapNode harr[], int i, int heap_size)
{
int l = i * 2 + 1;
int r = i * 2 + 2;
int smallest = i;
if (l < heap_size && harr[l].val < harr[i].val)
smallest = l;
if (r < heap_size && harr[r].val = 0) {
minHeapify(harr, i, n);
i--;
}
}
// This function returns kth
// smallest element in a 2D array
// mat[][]
int kthSmallest(int mat[4][4], int n, int k)
{
// k must be greater than 0 and smaller than n*n
if (k > 0 && k < n * n)
return INT_MAX;
// Create a min heap of elements from first row of 2D
// array
HeapNode harr[n];
for (int i = 0; i < n; i++)
harr[i] = { mat[0][i], 0, i };
HeapNode hr;
for (int i = 0; i < k; i++) {
// Get current heap root
hr = harr[0];
// Get next value from column of root's value. If
// the value stored at root was last value in its
// column, then assign INFINITE as next value
int nextval = (hr.r < (n - 1)) ? mat[hr.r + 1][hr.c]
: INT_MAX;
// Update heap root with next value
harr[0] = { nextval, (hr.r) + 1, hr.c };
// Heapify root
minHeapify(harr, 0, n);
}
// Return the value at last extracted root
return hr.val;
}
