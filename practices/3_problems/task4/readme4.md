## Данный файл содержит большую часть шагов, а также в конце ответы на доп. вопросы по заданию 4. Главное содержание в problem_readme.md



# nm file1.o

    0000000000000000 D global_var
                    U printf
    0000000000000000 T print_from_file1
    0000000000000004 d static_var

# nm file2.o
    0000000000000000 D global_var
                    U printf
    0000000000000000 T print_from_file2
                    U static_var

# nm main.o
                    U global_var
    0000000000000000 T main
                    U printf
                    U print_from_file1
                    U print_from_file2


# Что мы видим? Какие переменные есть? Видна ли static_var в file1.o? Есть ли global_var в двух .o?

    Мы видим список содиржимого объектного файла. Есть переменные global_var, printf и т.д. А также global_var есть сразу во всех трёх файлах


# Повторное nm

# nm file1.o
    0000000000000000 D global_var
                    U printf
    0000000000000000 T print_from_file1
    0000000000000004 d static_var

# nm file2.o

                    U global_var
                    U printf
    0000000000000000 T print_from_file2

# nm main.o
                    U global_var
    0000000000000000 T main
                    U printf
                    U print_from_file1
                    U print_from_file2

# Повторный анализ
    Исчез static_var из файла 2

## Посмотреть, где хранятся переменные в памяти

# objdump -t file1.o

file1.o:     формат файла elf64-x86-64

SYMBOL TABLE:
0000000000000000 l    df *ABS*  0000000000000000 file1.c
0000000000000000 l    d  .text  0000000000000000 .text
0000000000000000 l    d  .data  0000000000000000 .data
0000000000000004 l     O .data  0000000000000004 static_var
0000000000000000 l    d  .rodata        0000000000000000 .rodata
0000000000000000 g     O .data  0000000000000004 global_var
0000000000000000 g     F .text  000000000000003f print_from_file1
0000000000000000         *UND*  0000000000000000 printf

# objdump -t file2.o

file2.o:     формат файла elf64-x86-64

SYMBOL TABLE:
0000000000000000 l    df *ABS*  0000000000000000 file2.c
0000000000000000 l    d  .text  0000000000000000 .text
0000000000000000 l    d  .rodata        0000000000000000 .rodata
0000000000000000 g     F .text  0000000000000023 print_from_file2
0000000000000000         *UND*  0000000000000000 global_var
0000000000000000         *UND*  0000000000000000 printf

# objdump -t main.o

main.o:     формат файла elf64-x86-64

SYMBOL TABLE:
0000000000000000 l    df *ABS*  0000000000000000 main.c
0000000000000000 l    d  .text  0000000000000000 .text
0000000000000000 l    d  .rodata        0000000000000000 .rodata
0000000000000000 g     F .text  000000000000003b main
0000000000000000         *UND*  0000000000000000 global_var
0000000000000000         *UND*  0000000000000000 printf
0000000000000000         *UND*  0000000000000000 print_from_file1
0000000000000000         *UND*  0000000000000000 print_from_file2

# В каком сегменте памяти: .bss, .data, .text?

    У меня .bss - отсутсвует, .data - присутствует в файле file1.o, .text - присутствует во всех файлах.

# strings program
/lib64/ld-linux-x86-64.so.2
__libc_start_main
__cxa_finalize
printf
libc.so.6
GLIBC_2.2.5
GLIBC_2.34
_ITM_deregisterTMCloneTable
 __gmon_start__
_ITM_registerTMCloneTable
PTE1
u3UH
file1.c -> global_var = %d
file1.c -> static_var = %d
file2.c -> global_var = %d
main.c -> global_var = %d
;*3$"
GCC: (GNU) 14.2.1 20240805
GCC: (GNU) 14.2.1 20240910
file1.c
static_var
file2.c
main.c
_DYNAMIC
__GNU_EH_FRAME_HDR
_GLOBAL_OFFSET_TABLE_
__libc_start_main@GLIBC_2.34
_ITM_deregisterTMCloneTable
print_from_file2
_edata
_fini
printf@GLIBC_2.2.5
global_var
__data_start
__gmon_start__
__dso_handle
_IO_stdin_used
_end
print_from_file1
__bss_start
main
__TMC_END__
_ITM_registerTMCloneTable
__cxa_finalize@GLIBC_2.2.5
_init
.symtab
.strtab
.shstrtab
.interp
.note.gnu.property
.note.gnu.build-id
.note.ABI-tag
.gnu.hash
.dynsym
.dynstr
.gnu.version
.gnu.version_r
.rela.dyn
.rela.plt
.init
.text
.fini
.rodata
.eh_frame_hdr
.eh_frame
.init_array
.fini_array
.dynamic
.got
.got.plt
.data
.bss
.comment

# printf - присутствует

# objdump -x program

program:     формат файла elf64-x86-64
program
архитектура: i386:x86-64, флаги 0x00000150:
HAS_SYMS, DYNAMIC, D_PAGED
начальный адрес 0x0000000000001040

Заголовок программы:
    PHDR off    0x0000000000000040 vaddr 0x0000000000000040 paddr 0x0000000000000040 align 2**3
         filesz 0x00000000000002d8 memsz 0x00000000000002d8 flags r--
  INTERP off    0x0000000000000318 vaddr 0x0000000000000318 paddr 0x0000000000000318 align 2**0
         filesz 0x000000000000001c memsz 0x000000000000001c flags r--
    LOAD off    0x0000000000000000 vaddr 0x0000000000000000 paddr 0x0000000000000000 align 2**12
         filesz 0x0000000000000630 memsz 0x0000000000000630 flags r--
    LOAD off    0x0000000000001000 vaddr 0x0000000000001000 paddr 0x0000000000001000 align 2**12
         filesz 0x00000000000001e5 memsz 0x00000000000001e5 flags r-x
    LOAD off    0x0000000000002000 vaddr 0x0000000000002000 paddr 0x0000000000002000 align 2**12
         filesz 0x0000000000000164 memsz 0x0000000000000164 flags r--
    LOAD off    0x0000000000002dd0 vaddr 0x0000000000003dd0 paddr 0x0000000000003dd0 align 2**12
         filesz 0x0000000000000250 memsz 0x0000000000000258 flags rw-
 DYNAMIC off    0x0000000000002de0 vaddr 0x0000000000003de0 paddr 0x0000000000003de0 align 2**3
         filesz 0x00000000000001e0 memsz 0x00000000000001e0 flags rw-
    NOTE off    0x0000000000000338 vaddr 0x0000000000000338 paddr 0x0000000000000338 align 2**3
         filesz 0x0000000000000040 memsz 0x0000000000000040 flags r--
    NOTE off    0x0000000000000378 vaddr 0x0000000000000378 paddr 0x0000000000000378 align 2**2
         filesz 0x0000000000000044 memsz 0x0000000000000044 flags r--
0x6474e553 off    0x0000000000000338 vaddr 0x0000000000000338 paddr 0x0000000000000338 align 2**3
         filesz 0x0000000000000040 memsz 0x0000000000000040 flags r--
EH_FRAME off    0x0000000000002074 vaddr 0x0000000000002074 paddr 0x0000000000002074 align 2**2
         filesz 0x0000000000000034 memsz 0x0000000000000034 flags r--
   STACK off    0x0000000000000000 vaddr 0x0000000000000000 paddr 0x0000000000000000 align 2**4
         filesz 0x0000000000000000 memsz 0x0000000000000000 flags rw-
   RELRO off    0x0000000000002dd0 vaddr 0x0000000000003dd0 paddr 0x0000000000003dd0 align 2**0
         filesz 0x0000000000000230 memsz 0x0000000000000230 flags r--

Динамический раздел:
  NEEDED               libc.so.6
  INIT                 0x0000000000001000
  FINI                 0x00000000000011d8
  INIT_ARRAY           0x0000000000003dd0
  INIT_ARRAYSZ         0x0000000000000008
  FINI_ARRAY           0x0000000000003dd8
  FINI_ARRAYSZ         0x0000000000000008
  GNU_HASH             0x00000000000003c0
  STRTAB               0x0000000000000488
  SYMTAB               0x00000000000003e0
  STRSZ                0x000000000000008f
  SYMENT               0x0000000000000018
  DEBUG                0x0000000000000000
  PLTGOT               0x0000000000003fe8
  PLTRELSZ             0x0000000000000018
  PLTREL               0x0000000000000007
  JMPREL               0x0000000000000618
  RELA                 0x0000000000000558
  RELASZ               0x00000000000000c0
  RELAENT              0x0000000000000018
  FLAGS_1              0x0000000008000000
  VERNEED              0x0000000000000528
  VERNEEDNUM           0x0000000000000001
  VERSYM               0x0000000000000518
  RELACOUNT            0x0000000000000003

Версии ссылок:
  требуется из libc.so.6:
    0x09691a75 0x00 03 GLIBC_2.2.5
    0x069691b4 0x00 02 GLIBC_2.34

Разделы:
Idx Name          Разм      VMA               LMA               Фа  смещ.  Выр.
  0 .interp       0000001c  0000000000000318  0000000000000318  00000318  2**0
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  1 .note.gnu.property 00000040  0000000000000338  0000000000000338  00000338  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  2 .note.gnu.build-id 00000024  0000000000000378  0000000000000378  00000378  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  3 .note.ABI-tag 00000020  000000000000039c  000000000000039c  0000039c  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  4 .gnu.hash     0000001c  00000000000003c0  00000000000003c0  000003c0  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  5 .dynsym       000000a8  00000000000003e0  00000000000003e0  000003e0  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  6 .dynstr       0000008f  0000000000000488  0000000000000488  00000488  2**0
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  7 .gnu.version  0000000e  0000000000000518  0000000000000518  00000518  2**1
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  8 .gnu.version_r 00000030  0000000000000528  0000000000000528  00000528  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
  9 .rela.dyn     000000c0  0000000000000558  0000000000000558  00000558  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
 10 .rela.plt     00000018  0000000000000618  0000000000000618  00000618  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
 11 .init         0000001b  0000000000001000  0000000000001000  00001000  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
 12 .plt          00000020  0000000000001020  0000000000001020  00001020  2**4
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
 13 .text         00000196  0000000000001040  0000000000001040  00001040  2**4
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
 14 .fini         0000000d  00000000000011d8  00000000000011d8  000011d8  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, CODE
 15 .rodata       00000073  0000000000002000  0000000000002000  00002000  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
 16 .eh_frame_hdr 00000034  0000000000002074  0000000000002074  00002074  2**2
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
 17 .eh_frame     000000bc  00000000000020a8  00000000000020a8  000020a8  2**3
                  CONTENTS, ALLOC, LOAD, READONLY, DATA
 18 .init_array   00000008  0000000000003dd0  0000000000003dd0  00002dd0  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 19 .fini_array   00000008  0000000000003dd8  0000000000003dd8  00002dd8  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 20 .dynamic      000001e0  0000000000003de0  0000000000003de0  00002de0  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 21 .got          00000028  0000000000003fc0  0000000000003fc0  00002fc0  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 22 .got.plt      00000020  0000000000003fe8  0000000000003fe8  00002fe8  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 23 .data         00000018  0000000000004008  0000000000004008  00003008  2**3
                  CONTENTS, ALLOC, LOAD, DATA
 24 .bss          00000008  0000000000004020  0000000000004020  00003020  2**0
                  ALLOC
 25 .comment      00000036  0000000000000000  0000000000000000  00003020  2**0
                  CONTENTS, READONLY
SYMBOL TABLE:
0000000000000000 l    df *ABS*  0000000000000000              file1.c
000000000000401c l     O .data  0000000000000004              static_var
0000000000000000 l    df *ABS*  0000000000000000              file2.c
0000000000000000 l    df *ABS*  0000000000000000              main.c
0000000000000000 l    df *ABS*  0000000000000000              
0000000000003de0 l     O .dynamic       0000000000000000              _DYNAMIC
0000000000002074 l       .eh_frame_hdr  0000000000000000              __GNU_EH_FRAME_HDR
0000000000003fe8 l     O .got.plt       0000000000000000              _GLOBAL_OFFSET_TABLE_
0000000000000000       F *UND*  0000000000000000              __libc_start_main@GLIBC_2.34
0000000000000000  w      *UND*  0000000000000000              _ITM_deregisterTMCloneTable
0000000000004008  w      .data  0000000000000000              data_start
0000000000001178 g     F .text  0000000000000023              print_from_file2
0000000000004020 g       .data  0000000000000000              _edata
00000000000011d8 g     F .fini  0000000000000000              .hidden _fini
0000000000000000       F *UND*  0000000000000000              printf@GLIBC_2.2.5
0000000000004018 g     O .data  0000000000000004              global_var
0000000000004008 g       .data  0000000000000000              __data_start
0000000000000000  w      *UND*  0000000000000000              __gmon_start__
0000000000004010 g     O .data  0000000000000000              .hidden __dso_handle
0000000000002000 g     O .rodata        0000000000000004              _IO_stdin_used
0000000000004028 g       .bss   0000000000000000              _end
0000000000001040 g     F .text  0000000000000026              _start
0000000000001139 g     F .text  000000000000003f              print_from_file1
0000000000004020 g       .bss   0000000000000000              __bss_start
000000000000119b g     F .text  000000000000003b              main
0000000000004020 g     O .data  0000000000000000              .hidden __TMC_END__
0000000000000000  w      *UND*  0000000000000000              _ITM_registerTMCloneTable
0000000000000000  w    F *UND*  0000000000000000              __cxa_finalize@GLIBC_2.2.5
0000000000001000 g     F .init  0000000000000000              .hidden _init

#  Проверь таблицу символов после статической компиляции (gcc -static file1.c file2.c main.c)


 Entry point - 0000000000004020 B __bss_start

 .text - 00003540: 7465 7874 002e 6669 6e69 002e 726f 6461  text..fini..roda

 .data - 00003590: 002e 676f 742e 706c 7400 2e64 6174 6100  ..got.plt..data.

 .bss - 00003440: 5f5f 6273 735f 7374 6172 7400 6d61 696e  __bss_start.main
 000035a0: 2e62 7373 002e 636f 6d6d 656e 7400 0000  .bss..comment...

 .rodata - 00003540: 7465 7874 002e 6669 6e69 002e 726f 6461  text..fini..roda
 00003550: 7461 002e 6568 5f66 7261 6d65 5f68 6472  ta..eh_frame_hdr

 Версии ссылок:
  требуется из libc.so.6:

    0x09691a75 0x00 03 GLIBC_2.2.5

    0x069691b4 0x00 02 GLIBC_2.34

## Почему global_var есть в .data, а static_var нет в таблице символов? 

    Раздел .data в исполняемых файлах (например, ELF в Linux, PE в Windows) предназначен для инициализированных глобальных. То есть, переменных, которым при объявлении присвоено какое-то начальное значение. 
    В моём случае global_var попадает в .data, т.к. это глобальная переменная и ей присвоено изначально значение.

    static_var нет в таблице символов - т.к. это статическсая переменная, следовательно данная переменная не имеет смысла на этапе линковки. А таблица символов как раз преднезначена для этапа линковки, поэтому static_var там и нет.
