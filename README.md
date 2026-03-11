# Hello World — Windows GUI EXE via GitHub Actions

## What this does
- Compiles `src/main.cpp` using **MSVC (`cl.exe`)** targeting the **Windows GUI subsystem**.
- Shows a `MessageBox` popup with "Hello, World!" when run.
- Uploads the resulting `hello.exe` as a downloadable artifact.

## How to use
1. Push this repo to GitHub.
2. Go to **Actions** tab → select the latest run.
3. Download `hello-world-exe` from the **Artifacts** section.
4. Run `hello.exe` — a popup window will appear!

## Build locally (Windows, in VS Developer Command Prompt)
```bat
cl.exe /EHsc /Fe:hello.exe src\main.cpp /link /SUBSYSTEM:WINDOWS user32.lib
hello.exe
```
