# 1. global_var

    00000300: 5f76 6172 2e30 0075 6e69 6e69 7469 616c  _var.0.uninitial

    00000310: 697a 6564 5f67 6c6f 6261 6c5f 7661 7200  ized_global_var.


# 2. uninitialized_global_var
   
    1090:       48 8d 3d a9 2f 00 00    lea    0x2fa9(%rip),%rdi        # 4040 <uninitialized_global_var>
    1097:       48 8d 05 a2 2f 00 00    lea    0x2fa2(%rip),%rax        # 4040 <uninitialized_global_var>
    10c0:       48 8d 3d 79 2f 00 00    lea    0x2f79(%rip),%rdi        # 4040 <uninitialized_global_var>
    10c7:       48 8d 35 72 2f 00 00    lea    0x2f72(%rip),%rsi        # 4040 <uninitialized_global_var>

# 3. static_var

    00003380: 0073 7461 7469 635f 7661 7200 7374 6174  .static_var.stat

# 4. global_point

    00003500: 3500 5f69 6e69 7400 676c 6f62 616c 5f70  5._init.global_p
    00003510: 6f69 6e74 0000 2e73 796d 7461 6200 2e73  oint...symtab..s

# 5. local_var

    Данная секция у меня отсутствует, т.к. данная локальная переменная у меня была автоматически удалена оптимизатором, т.к. она не использовалась

# 6. static_local_var

    00003380: 0073 7461 7469 635f 7661 7200 7374 6174  .static_var.stat
    00003390: 6963 5f6c 6f63 616c 5f76 6172 2e30 005f  ic_local_var.0._

# 7. dynmaic_var

    У меня отсутсвует, т.к. это динамическая переменная и память выделяется, вероятно, динамически при запуске кода

# 8. stack_point

    У меня отсутвет, т.к. это структура, вероятно из-за что её компилятор посчитал неиспользуемой и он опмтимизировал код удалив её