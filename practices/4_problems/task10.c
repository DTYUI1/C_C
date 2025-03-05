// На компилятор сил уже не хватило (printf("более 9 часов код писал и вникал :("
// Хватило времени на паре \(^_^)/

#include <stddef.h>
#include <stdio.h>
#include <string.h>.
#include <stdlib.h>

char *memory = NULL; 
int memory_size;
int memory_used;


void allocate_memory(int input_size) {
    memory = malloc(input_size * sizeof(char));
    // Обычно я не добавляю проверку на успешное выделение памяти
    // Однако входе изучения ошибок в коде и советов от нейросетей
    // Я решил добавить эту проверчку, хотя бы один раз ;) 

    if (memory == NULL) {  
        printf("Ошибка выделения памяти!\n");
        exit(EXIT_FAILURE); 
    }
    memory_used = 0;
    memory_size = input_size;
    memory[0] = '\0';
} 

void free_memory(){
    free(memory);
    memory_used = 0;
    memory_size = 0;
}

void write_memory(char* str) {
    if (memory == NULL) {
        printf("You don't allocate memmory! Error.\n");
        exit(-1);
    }

    size_t str_len = strlen(str); 
    
    if (str_len + 1 > memory_size - memory_used) {
        printf("Not enough memory\n");
    }

    strcpy(memory + memory_used, str);
    memory_used += str_len;
}

void print_memory() {
    if (memory != NULL){
        printf("%s\n", memory);
    } else {
        printf("Memory is not allocated :(!\n");
    }
    
}


int main() {
    char buff[1000];
    char command[50];
    char input_data[950];
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

        if (strlen(buff) == index_space) {
            if (index_space >= sizeof(command)) {
                printf("Command is too long (•ˋ _ ˊ•)!\n");
                continue;
            } else {
                strcpy(command, buff);
                printf("Your command %s?\n", command);
                input_data[0] = '\0';
            }
        } else {
            if (index_space >= sizeof(command)) {
                printf("Command is too long (•ˋ _ ˊ•)!\n");
                continue;
            } else {
                strncpy(command, buff, index_space); // Копирует вместе с нулём, т.к. включительно до индекса с пробелом
                command[index_space] = '\0'; 
                
                size_t input_data_start = index_space + 1;

                if (input_data_start < len) {
                    if (len - input_data_start > sizeof(input_data)) {
                        printf("Input data is too long  (•ˋ _ ˊ•)!");
                        continue;
                    } else {
                        strcpy(input_data, buff + input_data_start); // К адресу buff происходит сдвиг до начала ввода данных. Магия!
                    }
                } else {
                    input_data[0] = '\0';
                }
            }
        }
       
        if (strcasecmp(command, "alloc") == 0) {
            int size = atoi(input_data); // Строку в инт atof - во флот
            if (size > 0) {
                allocate_memory(size);
            } else {
                printf("Invalid size for allocation.\n");
            }
        } else if (strcasecmp(command, "write") == 0) {
            write_memory(input_data);
        } else if (strcasecmp(command, "print") == 0) {
            print_memory();
        } else if (strcasecmp(command, "free") == 0) {
            free_memory();
        } else if (strcasecmp(command, "exit") == 0) {
            if (memory != NULL) {
                free_memory();
            }
            break;
        } else {
            printf("Unknown command: %s\n", command);
        }
        
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