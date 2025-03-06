# show_userspace_vas

A simple program that will help us to better understand process VAS in Linux. The app prints hello world and invokes pause system call. From `man pause`: pause() causes the calling process (or thread) to sleep until a signal is delivered. While the program waits for any signal we will examine process vas further using various tools.

## Building

1. Ensure you have the necessary build tools and kernel headers installed:
   ```bash
   sudo apt-get install build-essential
   ```
2. Build the program by running:
   ```bash
   gcc hello_world.c -o hello_world
   ```

## Usage

- **Run the app** (optionally specifying the maximum number of threads to print):
  ```bash
  ./hello_world
  ```
  
- **Investigate VAS with cat** This will show you memory layout of the process, notice order of reagions with heap being on top and growing down and stack being relatively low and growing up:
  ```bash
  sudo cat /proc/<pid>/maps
  ```
  
- **View more mem info with pmap** to see the thread information:
  ```bash
  sudo pmap <pid>
  sudo pmap -X <pid>
  ```

## License

MIT
