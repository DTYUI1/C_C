#!/bin/bash

for (( i=1; i<=$1; i++ )); do
  filename="task$i"
  touch "$filename.c"  
  echo "Успешно создан файл: $filename" 
done


