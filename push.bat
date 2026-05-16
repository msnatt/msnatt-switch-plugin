@echo off
title Auto Push GitHub

set /p msg=Commit Message : 

cd /d ""

git add .
git commit -m "%msg%"
git push origin main

echo.
echo Push Complete!
pause