#include <stdio.h>

struct entry {
  int value;
  struct entry *next;
  struct entry *prev;
};

void showList (struct entry start) {

  struct entry *ptr = start.next;

  while (ptr) {
    printf("Entry Value: %i\n", (*ptr).value);
    ptr = (*ptr).next;
  }

  printf("\n");
}

void showListBackwards (struct entry end) {
  printf("Entry Value: %i\n", end.value);

  struct entry *ptr = end.prev;

  while ( (*ptr).value ) {
    printf("Entry Value: %i\n", (*ptr).value);
    ptr = (*ptr).prev;
  }

  printf("\n");
}



void addToList(struct entry *prevEntry, struct entry *newEntry) {
  newEntry->next = prevEntry->next;
  newEntry->prev = prevEntry;
  prevEntry->next = newEntry;
  (*newEntry->next).prev = newEntry;
}

void removeFromList (struct entry *entry) {
  struct entry *prev = entry->prev;
  if (entry->next) {
    struct entry *next = entry->next;
    prev->next = next;
    next->prev = prev;

  } else {
    prev->next = 0;
  }

}

void swapValsIfCandidateIsHigher(char *p1, char *p2) {

  if (*p1 < *p2) {
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
  }
}

void sortArray (char *lowest ) {

  char *candidate = (lowest + 1);

  while ( *lowest ) {
    while ( *candidate ) {
      swapValsIfCandidateIsHigher(candidate, lowest);
      candidate++;
    }
    lowest++;
    candidate = lowest + 1;
  }


}


void swapIfMisordered(int *p1, int *p2) {

  if (*p1 > *p2) {
    char temp = *p1;
    *p1 = *p2;
    *p2 = temp;
  }
}


void sort3 (int *first, int *second, int *third) {
  swapIfMisordered(first, second);
  swapIfMisordered(first, third);
  swapIfMisordered(second, third);
}

int sortMatrix (int *ptr, int height, int width ) {
  int newArray[height * width];

  for (int j = 0; j < height; j++) {
    int *innerPtr = *ptr;
    for (int k = 0; j < width; k++) {
      newArray[j + k] = *innerPtr;
    }
  }

  return newArray[]
}

int main (void) {
  int first = 9, second = 16, third = 2;

  sort3(&first, &second, &third);

  printf("Sorted: %i %i %i", first, second, third);

  return 0;
}
