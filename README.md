# CppMath

![C++ CI](https://github.com/Sam-r-ai/CppMath/actions/workflows/main.yml/badge.svg)

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
