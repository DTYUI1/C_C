## Используй команду nm для просмотра символов в объектных файлах до связывания и сравните их с символами в исполняемом файле после связывания.

    gcc -c fuel.c main.c navigation.c - команда для создания объектников

# nm navigation.o
    0000000000000000 T calculate_distance

# nm fuel.o
    0000000000000000 T check_fuel
    U puts

# nm main.o
                    U calculate_distance
                    U check_fuel
                    U getchar
                    U __isoc99_scanf
    0000000000000000 T main
                    U printf
                    U puts
                    U __stack_chk_fail

# nm tast3.out

    0000000000004038 B __bss_start
    00000000000012bc T calculate_distance
    0000000000001179 T check_fuel
                    w __cxa_finalize@GLIBC_2.2.5
    0000000000004028 D __data_start
    0000000000004028 W data_start
    0000000000004030 D __dso_handle
    0000000000003de0 d _DYNAMIC
    0000000000004038 D _edata
    0000000000004040 B _end
    00000000000012d8 T _fini
                    U getchar@GLIBC_2.2.5
    0000000000003fe8 d _GLOBAL_OFFSET_TABLE_
                    w __gmon_start__
    000000000000209c r __GNU_EH_FRAME_HDR
    0000000000001000 T _init
    0000000000002000 R _IO_stdin_used
                    U __isoc99_scanf@GLIBC_2.7
                    w _ITM_deregisterTMCloneTable
                    w _ITM_registerTMCloneTable
                    U __libc_start_main@GLIBC_2.34
    00000000000011b1 T main
                    U printf@GLIBC_2.2.5
                    U puts@GLIBC_2.2.5
                    U __stack_chk_fail@GLIBC_2.4
    0000000000001080 T _start
    0000000000004038 D __TMC_END__

# Анализ
    Как можно заметить в исполняемом файле просто уйма символов. Это и логично ведь после этапа линковки, связались сразу три файла (main.o, fuel.o, navigation.o) - это можно понять что теперть в одном файле содержаться функции (calculate_distance, check_fuel, которые находились в разных файлах), а также дополнительные библиотеки (например, _IO_stdin_used).