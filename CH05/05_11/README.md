# 05_11 - arguments1

This folder contains `05_11-arguments1.c`, a small program that prints its command-line arguments.

Build and run from the repository root:

```bash
gcc -g CH05/05_11/05_11-arguments1.c -o CH05/05_11/arguments
./CH05/05_11/arguments arg1 arg2
```

In VS Code you can use the task "Build and Run: CH05/05_11 arguments" (Ctrl+Shift+B) — you'll be prompted for arguments.

If you get `permission denied` when running, make the binary executable:

```bash
chmod +x CH05/05_11/arguments
```
