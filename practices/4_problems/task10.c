// На компилятор сил уже не хватило (printf("более 9 часов код писал и вникал :("
// Хватило времени на паре \(^_^)/

#include <stdio.h>
#include <string.h>.
#include <stdlib.h>

char *memory = NULL; 

void allocate_memory(int input_size) {
    memory = malloc(input_size * sizeof(char));
    // Обычно я не добавляю проверку на успешное выделение памяти
    // Однако входе изучения ошибок в коде и советов от нейросетей
    // Я решил добавить эту проверчку, хотя бы один раз ;) 
    if (memory == NULL) {  
        printf("Ошибка выделения памяти!\n");
        exit(EXIT_FAILURE); 
    }
} 

void free_memory(){
    free(memory);
}

void write_memory(char* str) {
    strcat(memory, str);
}

void print_memory() {
    printf("%s\n", memory);
}


int main() {
    char buff[1000];
    char command[10];
    char input_data[990];
    int size;

    do {
        printf("Please input your data: ");
        fgets(buff, sizeof(buff), stdin);
        int len = strlen(buff);
        if (len > 0 && buff[len-1] == '\n') {
            buff[len-1] = '\0';
        }

        size_t index_space = strcspn(buff, " ");
        
        if (strlen(buff) == 0) {
            printf("Empty input! #_#\n");
            continue;
        } 

        // strncpy(command)

        
        
        printf("Index space: %lu\n", index_space);


    } while (1);
}



// int size = 10;
// allocate_memory(size);

// for (int i = 0; i < size; i++) {
//     memory[i] = 'A' + i;
// }
// memory[size-1] = '\0';

// printf("Memory: %s", memory);

// return 0;