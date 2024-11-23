MODULE_NAME="cpp-back-end/main"
OUTPUT_JS="src/wasm/main_wasm.js"
OUTPUT_WASM="src/wasm/main_wasm.wasm"

emcc ${MODULE_NAME}.cpp \
    -o ${OUTPUT_JS} \ 
    -s EXPORT_ES6=1 \ 
    -s 'EXPORT_NAME="$MODULE_NAME"' \ 
    -s 'ENVIROMENT="web"'