#include <stdio.h>

int find_bby(char rooms[], int n);
void swapping_bby(int bby, int room, char rooms[]);
void print_arr (char arr[], int n);

int main(int argc, char *argv[]) {
    char rooms[] = {'b', 'c', '3', '8', '3', 'l', 'b', 'b', 'y'};

    print_arr(rooms, 9);
    find_bby(rooms, 9);
    print_arr(rooms, 9);
    return 0;
}

int find_bby(char rooms[], int n) {
    int bby_head = -1;
    int room_head = -1;

    for (int i = 0; i <= n - 3; i++) {
        if (rooms[i] == 'b') {
            if (rooms[i + 1] == 'b' && rooms[i + 2] == 'y') {
                bby_head = i;
            }
        }

        if (rooms[i] == '3') {
            if (rooms[i + 1] == '8' && rooms[i + 2] == '3') {
                room_head = i;
            }
        }
    }

    if (bby_head == -1 || room_head == -1) {
        return -1;
    } else {
        swapping_bby(bby_head, room_head, rooms); 
        return 1;
    }
}

void swapping_bby(int bby, int room, char rooms[]) {
    for (int i = 0; i < 3; i++) {
        char temp = rooms[i + bby];
        rooms[i + bby] = rooms[i + room];
        rooms[i + room] = temp;
    }
}

void print_arr (char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

