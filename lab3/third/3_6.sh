#!/bin/bash
whoami
cd ~/
pwd
echo $((`whoami|wc -c`+`pwd|wc -c`))
