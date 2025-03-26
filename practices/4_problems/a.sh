#!/bin/bash

for (( i=$1; i<=$2; i++ )); do
  filename="pinMode($i, OUTPUT);"
  echo "$filename"  
  # echo "Успешно создан файл: $filename" 
done



