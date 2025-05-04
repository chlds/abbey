# abbey

## Making a library for WSL

### Based on UTF-8

### Tips

#### Converting CRLF into LF
e.g., $ sed -b -i 's/\r//g' FILE
e.g., $ find . -type f -name '*.c' -exec sed -b -i 's/\r//g' {} +;
e.g., $ find . -name '*.c' -exec sed -b -i 's/\r//g' {} +;
