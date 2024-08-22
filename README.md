# learning
My Learning

To Build All

make all
```
@rajanikantchirmade ➜ /workspaces/learning/helloworld (main) $ make all
gcc -c hello.c
gcc -o hello hello.o
gcc -c loop.c
gcc -o loop loop.o
@rajanikantchirmade ➜
```

To Build hello

make hello
```
@rajanikantchirmade ➜ /workspaces/learning/helloworld (main) $ make hello
gcc -c hello.c
gcc -o hello hello.o
@rajanikantchirmade ➜
```

To Build loop

make loop
```
@rajanikantchirmade ➜ /workspaces/learning/helloworld (main) $ make loop
gcc -c loop.c
gcc -o loop loop.o
@rajanikantchirmade ➜
```

To Clean 

make clean
```
@rajanikantchirmade ➜ /workspaces/learning/helloworld (main) $ make clean
rm -f hello.o loop.o hello loop
@rajanikantchirmade ➜
```