#include <stdio.h>
#include <stdlib.h>

struct element {
	int x;
	int y;
};

void merge_sort(struct element *arr, int len);
void merge_sort_aux(struct element *arr, int l, int r);

int main() {
	struct element *arr = malloc(sizeof(struct element) * 1000000);
	for (int i = 0; i < 1000000; i++) {
		arr[i].x = i % 91;
		arr[i].y = i % 103;
	}
	merge_sort(arr, 1000000);
	free(arr);
	return 0;
}

void merge_sort(struct element *arr, int len) {
	merge_sort_aux(arr, 0, len - 1);
}

void merge_sort_aux(struct element *arr, int l, int r) {
	if (l == r) return;
	int mid = (l + r) / 2;
	merge_sort_aux(arr, l, mid);
	merge_sort_aux(arr, mid + 1, r);
	int l_ptr = l;
	int r_ptr = r;
	struct element *tmp = malloc(sizeof(struct element) * (r-l+1));
	for (int i = 0; i < r-l+1; i++) {
		if (r_ptr == r + 1 ||
				(l_ptr <= mid &&
				 	((arr[l_ptr].y < arr[r_ptr].y) ||
					(arr[l_ptr].y == arr[r_ptr].y && arr[l_ptr].x < arr[r_ptr].y))
				)) {
			tmp[i] = arr[l_ptr];
			tmp[i] = arr[l_ptr];
			l_ptr++;
		} else {
			tmp[i] = arr[r_ptr];
			tmp[i] = arr[r_ptr];
			r_ptr++;
		}
	}
	for (int i = 0; i < r-l+1; i++) {
		arr[i] = tmp[i];
	}
	free(tmp);
}
