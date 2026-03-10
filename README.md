# Hello World — Windows EXE via GitHub Actions

## What this does
- Compiles `src/main.cpp` using **MSVC (`cl.exe`)** on a `windows-latest` GitHub Actions runner.
- Uploads the resulting `hello.exe` as a downloadable artifact.

## How to use
1. Push this repo to GitHub.
2. Go to **Actions** tab → select the latest run.
3. Download `hello-world-exe` from the **Artifacts** section.

## Build locally (Windows)
```bat
cl.exe /EHsc /Fe:hello.exe src\main.cpp
hello.exe
```
