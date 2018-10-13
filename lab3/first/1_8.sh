#!/bin/bash
NAME=$(whoami)
echo "Процессов пользователя:"
whoami
ps -u $NAME | wc -l
echo "Процессов пользователя root:"
ps -u root | wc -l
