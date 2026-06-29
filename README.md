````markdown
# Git Workflow

## step-1
Folder select

```bash
cd [folder name]
```

## step-2
Repo clone

```bash
git clone [repo link]
cd [clone folder name]
```

## step-3
File check

```bash
git status
```

## step-4
push change (main)

```bash
git add .
git commit -m "text message"
git push
```

## step-5
create branch and push

```bash
git checkout -b [branch name]
git add .
git commit -m "test message"
git push -u origin [branch name]
```

## step-6
if merge using git bash

```bash
git switch main
git pull origin main
git merge [branch name]
git push origin main
```

## step-7
delete branch

```bash
git branch -d [branch name]
git push origin --delete [branch name]
```

---

## if project local but Repo empty

```bash
cd [project folder]

git init
git remote add origin [repository link]
git add .
git commit -m "Initial commit"
git branch -M main
git push -u origin main
```

---

## 1. Create folder

```bash
mkdir [Folder Name]
cd [folder name]
```

## 2. Create file

```bash
touch [file name]
git init
```
````
