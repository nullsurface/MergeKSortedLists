#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    ListNode *list1, *list2, *list3, *index1, *index2, *index3, *merged_list;
    list1 = malloc(sizeof(ListNode));
    list2 = malloc(sizeof(ListNode));
    list3 = malloc(sizeof(ListNode));
    index1 = list1;
    index2 = list2;
    index3 = list3;
    int arr1[7] = {1, 2, 4, 5, 9, 50, 80};
    int arr2[5] = {3, 20, 22, 23, 25};
    int arr3[10] = {0, 5, 11, 15, 20, 21, 26, 33, 400, 500};

    for (int i = 0; i < 7; i++) {
        index1->val = arr1[i];
        index1->next = malloc(sizeof(ListNode));

	if (i < 6) {
	    index1 = index1->next;
	}
    }

    for (int i = 0; i < 5; i++) {
        index2->val = arr2[i];
        index2->next = malloc(sizeof(ListNode));

	if (i < 4) {
	    index2 = index2->next;
	}
    }

    for (int i = 0; i < 10; i++) {
        index3->val = arr3[i];
        index3->next = malloc(sizeof(ListNode));

	if (i < 9) {
	    index3 = index3->next;
	}
    }

    free(index1->next);
    free(index2->next);
    free(index3->next);
    index1->next = NULL;
    index2->next = NULL;
    index3->next = NULL;


    ListNode** lists = malloc(sizeof(ListNode*) * 3);
    lists[0] = list1;
    lists[1] = list2;
    lists[2] = list3;

    print(lists[0]);
    print(lists[1]);
    print(lists[2]);

    merged_list = mergeKLists(lists, 3);
    
    print(merged_list);

    return 0;
}
