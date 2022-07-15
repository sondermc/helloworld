# REQUIREMENTS
```bash
podman run -ti -v $(pwd):/usr/local/src:z --userns=keep-id tool-fedora-gcc
```

# CLEAN
```bash
rm -rf ./build
```

# BUILD
```bash
cmake -E make_directory build
cmake -E chdir build cmake ../src
cmake --build build
(cd build ; make package)
```

# RUN
```bash
./build/helloWorld
```
