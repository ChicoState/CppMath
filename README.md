# CppMath


## Building in docker container

If you have not already built the Docker container, use the following:

```
docker build -t cpp-container .
```

Once you have a built Docker container, run it interactively:

```
docker run -v "$(pwd)":/usr/src -it cpp-container sh
```

Then -- inside of the container -- compile the program:

```
g++ main.cpp
```

and if it compiles successfully, run it with `./a.out`

To exit the container, type `exit`

[![Build C++](https://github.com/BraulioL/CppMath/actions/workflows/main.yml/badge.svg)](https://github.com/BraulioL/CppMath/actions/workflows/main.yml)
