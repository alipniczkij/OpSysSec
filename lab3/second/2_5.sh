#!bin/bash
cat $(ls ~/ | grep "\.txt") > /tmp/2_5.txt 
echo "Список файлов:"
ls -l ~/*.txt 
echo "Суммарный размер в байтах:"
du -b /tmp/2_5.txt
echo "Количество строк:"
cat /tmp/2_5.txt | wc -l
