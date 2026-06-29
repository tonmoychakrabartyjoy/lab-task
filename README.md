# lab-task

step-1
Folder select
	cd [folder name]

step-2
Repo clone
	git clone [repo link]
	cd [clone folder name]

step-3
File check
	git status

step-4
push change (main)
	git add .
	git commit -m "text message"
	git push

step-5
create branch and push
	git checkout -b [branch name]
	git add .
	git commit -m "test message"
	git push -u origin [branch name]

step-6
if merge using git bash
	git switch main
	git pull origin main
	git merge [branch name]
	git push origin main

step-7
delete branch
	git branch -d [branch name]
	git push origin --delete [branch name]



*************************************************
if project local but Repo empty
	cd [project folder]

	git init
	git remote add origin [repository link]
	git add .
	git commit -m "Initial commit"
	git branch -M main
	git push -u origin main


***************************************************

1. Create folder
	mkdir [Folder Name]
	cd [folder name]

2. Create file
	touch [file name]
	git init