@echo off
title Auto Push GitHub

set /p msg=Commit Message : 

cd /d "C:\Users\Admin001\Desktop\Blockly-learning\marklib"

git add .
git commit -m "%msg%"
git push origin master

echo.
echo Push Complete!
pause