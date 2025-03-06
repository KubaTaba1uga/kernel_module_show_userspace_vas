# show_userspace_vas

A minimal app to explore Linux process VAS. It prints "Hello World!" and then calls `pause()`, allowing you to inspect the memory layout.

## Build

1. Install required tools and kernel headers:
   ```bash
   sudo apt-get install build-essential
   ```
2. Compile the program:
   ```bash
   gcc hello_world.c -o hello_world
   ```

## Run

Start the program:
```bash
./hello_world
```

## Inspecting Memory Layout

- Use the following commands to view the memory regions:
  ```bash
  sudo cat /proc/<pid>/maps
  ```
  
- We are seeing lowest address at the top.
- Lowest addresses are populated by binary code and data.
- Heap is located just after the binary’s data and grows upward (means grows incrementing addresses).
- The gap between the heap and the stack is used for mapping shared libraries (e.g., libc, dynamic linker) via mmap.
- Stack is found at high addresses and grows downward (means grows decrementing addresses).

## License

MIT

