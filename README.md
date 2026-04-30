# rijam-func

A bignum function that makes ABSURDLY huge numbers

## What is this?

This repository contains a family of C programs that compute the `rijam(n)` function. Starting from an Ackermann function, it grows into something that produces numbers so large they have no use lol

Idk if this is the biggest

## Files

- `main256.c`, `main512.c`, `main1024.c`, `main2048.c`, `main4096.c`, `main8192.c`, `main16384.c`, `main32768.c`, `main65536.c`

Each file is a progressively more absurd version of the same idea. The number in the filename indicates the amount of bytes (LF newlines, not CRLF) in the file

## Compilation

Any C compiler should work. Example with gcc:

```bash
gcc -Os -s main256.c -o rijam256
gcc -Os -s main512.c -o rijam512
gcc -Os -s main1024.c -o rijam1024
gcc -Os -s main2048.c -o rijam2048
gcc -Os -s main4096.c -o rijam4096
gcc -Os -s main8192.c -o rijam8192
gcc -Os -s main16384.c -o rijam16384
gcc -Os -s main32768.c -o rijam32768
gcc -Os -s main65536.c -o rijam65536
```

You need atleast C99

## Usage

```bash
./rijam256 [n]
```

If no `n` is provided, it defaults to 1.

```bash
./rijam256 2
```

It may or may not print a number (I suspect the latter), but the number may be very large (duh)

## What does it do?

`rijam(n)` basically does:

1. It is start with the Ackermann function `A(n, n)`
2. Apply various recursive hyperoperations many times
3. Do some loops that count up to large constants
4. Return a number (hopefully)

The details are all in the source code.

## Will it overflow?

`unsigned long long` is 64 bits. The numbers computed quickly exceed this range, but the code does not check for overflow; The result will wrap around. This is intentional for MINIMUM SOURCE SIZE!

## Can I run it?

You can try. I have never run any of these for any n greater than 0, because n = 1 is already too big to write and/or compute

## License

MIT License.

Copyright (c) 2026 Hotdogdevourer

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

See the LICENSE file in the root directory for details.
