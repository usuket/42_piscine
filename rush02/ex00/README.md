# RUSH02

### git workflow example
```
git log --graph --oneline --all
git branch ysakakib/add_read_me
git checkout ysakakib/add_read_me
git add ex00/README.md
git commit -m 'add read me'
git push
git checkout master
git pull
git merge ysakakib/add_read_me
git commit -m 'merge'
git push
git log
git status
```

### make
```
make fclean
make
```

### test
```
./test.sh
```
