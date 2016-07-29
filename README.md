md5-wasm-sample
---------------

WebAssembly sample for MD5 hash algorithm

## Requirements

- Emscripten
  - [Emscripten SDK](https://kripken.github.io/emscripten-site/docs/tools_reference/emsdk.html)
  - `./emsdk install sdk-incoming-64bit`
- [Binaryen](https://github.com/WebAssembly/binaryen)

## Usage

```
$ make
$ python -m SimpleHTTPServer 8000
```

Open URL <http://localhost:8000/bin/md5.html> in your browser.

## License
Public Domain
