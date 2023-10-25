#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#if defined(__linux__)
#define std 0
#define N 133
#define ERR_LIST                                          \
    {"Success",                                           \
     "Operation not permitted",                           \
     "No such file or directory",                         \
     "No such process",                                   \
     "Interrupted system call",                           \
     "Input/output error",                                \
     "No such device or address",                         \
     "Argument list too long",                            \
     "Exec format error",                                 \
     "Bad file descriptor",                               \
     "No child processes",                                \
     "Resource temporarily unavailable",                  \
     "Cannot allocate memory",                            \
     "Permission denied",                                 \
     "Bad address",                                       \
     "Block device required",                             \
     "Device or resource busy",                           \
     "File exists",                                       \
     "Invalid cross-device link",                         \
     "No such device",                                    \
     "Not a directory",                                   \
     "Is a directory",                                    \
     "Invalid argument",                                  \
     "Too many open files in system",                     \
     "Too many open files",                               \
     "Inappropriate ioctl for device",                    \
     "Text file busy",                                    \
     "File too large",                                    \
     "No space left on device",                           \
     "Illegal seek",                                      \
     "Read-only file system",                             \
     "Too many links",                                    \
     "Broken pipe",                                       \
     "Numerical argument out of domain",                  \
     "Numerical result out of range",                     \
     "Resource deadlock avoided",                         \
     "File name too long",                                \
     "No locks available",                                \
     "Function not implemented",                          \
     "Directory not empty",                               \
     "Too many levels of symbolic links",                 \
     "Unknown error 41",                                  \
     "No message of desired type",                        \
     "Identifier removed",                                \
     "Channel number out of range",                       \
     "Level 2 not synchronized",                          \
     "Level 3 halted",                                    \
     "Level 3 reset",                                     \
     "Link number out of range",                          \
     "Protocol driver not attached",                      \
     "No CSI structure available",                        \
     "Level 2 halted",                                    \
     "Invalid exchange",                                  \
     "Invalid request descriptor",                        \
     "Exchange full",                                     \
     "No anode",                                          \
     "Invalid request code",                              \
     "Invalid slot",                                      \
     "Unknown error 58",                                  \
     "Bad font file format",                              \
     "Device not a stream",                               \
     "No data available",                                 \
     "Timer expired",                                     \
     "Out of streams resources",                          \
     "Machine is not on the network",                     \
     "Package not installed",                             \
     "Object is remote",                                  \
     "Link has been severed",                             \
     "Advertise error",                                   \
     "Srmount error",                                     \
     "Communication error on send",                       \
     "Protocol error",                                    \
     "Multihop attempted",                                \
     "RFS specific error",                                \
     "Bad message",                                       \
     "Value too large for defined data type",             \
     "Name not unique on network",                        \
     "File descriptor in bad state",                      \
     "Remote address changed",                            \
     "Can not access a needed shared library",            \
     "Accessing a corrupted shared library",              \
     ".lib section in a.out corrupted",                   \
     "Attempting to link in too many shared libraries",   \
     "Cannot exec a shared library directly",             \
     "Invalid or incomplete multibyte or wide character", \
     "Interrupted system call should be restarted",       \
     "Streams pipe error",                                \
     "Too many users",                                    \
     "Socket operation on non-socket",                    \
     "Destination address required",                      \
     "Message too long",                                  \
     "Protocol wrong type for socket",                    \
     "Protocol not available",                            \
     "Protocol not supported",                            \
     "Socket type not supported",                         \
     "Operation not supported",                           \
     "Protocol family not supported",                     \
     "Address family not supported by protocol",          \
     "Address already in use",                            \
     "Cannot assign requested address",                   \
     "Network is down",                                   \
     "Network is unreachable",                            \
     "Network dropped connection on reset",               \
     "Software caused connection abort",                  \
     "Connection reset by peer",                          \
     "No buffer space available",                         \
     "Transport endpoint is already connected",           \
     "Transport endpoint is not connected",               \
     "Cannot send after transport endpoint shutdown",     \
     "Too many references: cannot splice",                \
     "Connection timed out",                              \
     "Connection refused",                                \
     "Host is down",                                      \
     "No route to host",                                  \
     "Operation already in progress",                     \
     "Operation now in progress",                         \
     "Stale file handle",                                 \
     "Structure needs cleaning",                          \
     "Not a XENIX named type file",                       \
     "No XENIX semaphores available",                     \
     "Is a named type file",                              \
     "Remote I/O error",                                  \
     "Disk quota exceeded",                               \
     "No medium found",                                   \
     "Wrong medium type",                                 \
     "Operation canceled",                                \
     "Required key not available",                        \
     "Key has expired",                                   \
     "Key has been revoked",                              \
     "Key was rejected by service",                       \
     "Owner died",                                        \
     "State not recoverable",                             \
     "Operation not possible due to RF-kill",             \
     "Memory page has hardware error"};

#endif

#if defined(__APPLE__)
#define std 1
#define N 107
#define ERR_LIST                                        \
    {"Undefined error: 0",                              \
     "Operation not permitted",                         \
     "No such file or directory",                       \
     "No such process",                                 \
     "Interrupted system call",                         \
     "Input/output error",                              \
     "Device not configured",                           \
     "Argument list too long",                          \
     "Exec format error",                               \
     "Bad file descriptor",                             \
     "No child processes",                              \
     "Resource deadlock avoided",                       \
     "Cannot allocate memory",                          \
     "Permission denied",                               \
     "Bad address",                                     \
     "Block device required",                           \
     "Resource busy",                                   \
     "File exists",                                     \
     "Cross-device link",                               \
     "Operation not supported by device",               \
     "Not a directory",                                 \
     "Is a directory",                                  \
     "Invalid argument",                                \
     "Too many open files in system",                   \
     "Too many open files",                             \
     "Inappropriate ioctl for device",                  \
     "Text file busy",                                  \
     "File too large",                                  \
     "No space left on device",                         \
     "Illegal seek",                                    \
     "Read-only file system",                           \
     "Too many links",                                  \
     "Broken pipe",                                     \
     "Numerical argument out of domain",                \
     "Result too large",                                \
     "Resource temporarily unavailable",                \
     "Operation now in progress",                       \
     "Operation already in progress",                   \
     "Socket operation on non-socket",                  \
     "Destination address required",                    \
     "Message too long",                                \
     "Protocol wrong type for socket",                  \
     "Protocol not available",                          \
     "Protocol not supported",                          \
     "Socket type not supported",                       \
     "Operation not supported",                         \
     "Protocol family not supported",                   \
     "Address family not supported by protocol family", \
     "Address already in use",                          \
     "Can't assign requested address",                  \
     "Network is down",                                 \
     "Network is unreachable",                          \
     "Network dropped connection on reset",             \
     "Software caused connection abort",                \
     "Connection reset by peer",                        \
     "No buffer space available",                       \
     "Socket is already connected",                     \
     "Socket is not connected",                         \
     "Can\'t send after socket shutdown",               \
     "Too many references: can\'t splice",              \
     "Operation timed out",                             \
     "Connection refused",                              \
     "Too many levels of symbolic links",               \
     "File name too long",                              \
     "Host is down",                                    \
     "No route to host",                                \
     "Directory not empty",                             \
     "Too many processes",                              \
     "Too many users",                                  \
     "Disc quota exceeded",                             \
     "Stale NFS file handle",                           \
     "Too many levels of remote in path",               \
     "RPC struct is bad",                               \
     "RPC version wrong",                               \
     "RPC prog. not avail",                             \
     "Program version wrong",                           \
     "Bad procedure for program",                       \
     "No locks available",                              \
     "Function not implemented",                        \
     "Inappropriate file type or format",               \
     "Authentication error",                            \
     "Need authenticator",                              \
     "Device power is off",                             \
     "Device error",                                    \
     "Value too large to be stored in data type",       \
     "Bad executable (or shared library)",              \
     "Bad CPU type in executable",                      \
     "Shared library version mismatch",                 \
     "Malformed Mach-o file",                           \
     "Operation canceled",                              \
     "Identifier removed",                              \
     "No message of desired type",                      \
     "Illegal byte sequence",                           \
     "Attribute not found",                             \
     "Bad message",                                     \
     "EMULTIHOP (Reserved)",                            \
     "No message available on STREAM",                  \
     "ENOLINK (Reserved)",                              \
     "No STREAM resources",                             \
     "Not a STREAM",                                    \
     "Protocol error",                                  \
     "STREAM ioctl timeout",                            \
     "Operation not supported on socket",               \
     "Policy not found",                                \
     "State not recoverable",                           \
     "Previous owner died",                             \
     "Interface output queue is full"};

#endif

#ifndef s21_NULL
#define s21_NULL (void*)0
#endif

typedef unsigned long s21_size_t;

/************************************************
 * COMPUTATIONS -> s21_calc.c
 ***********************************************/

/**
 * @brief Calculates the length of a string.
 * @param str Input string.
 * @return Length of the string.
 */
s21_size_t s21_strlen(const char* str);

/**
 * @brief Calculates the length of the initial segment of str1 that consists of
 * characters not in str2.
 * @param str1 Input string to be scanned.
 * @param str2 String containing the characters to match.
 * @return The length of the segment.
 */
s21_size_t s21_strcspn(const char* str1, const char* str2);

/**
 * @brief Calculates the length of the initial segment of str1 which consists
 * entirely of characters from str2.
 * @param str1 Input string to be scanned.
 * @param str2 String containing the characters to match.
 * @return The length of the segment.
 */
s21_size_t s21_strspn(const char* str1, const char* str2);

/************************************************
 * COPIES -> s21_copy.c
 ***********************************************/

/**
 * @brief Copies n characters from the source memory area to the destination.
 * @param dest Pointer to the destination array.
 * @param src Pointer to the source array.
 * @param n Number of bytes to be copied.
 * @return Pointer to the destination, which is dest.
 */
void* s21_memcpy(void* dest, const void* src, s21_size_t n);

/**
 * @brief Copies n characters from the source memory area to the destination
 * memory area, handling possible overlap.
 * @param dest Pointer to the destination array.
 * @param src Pointer to the source array.
 * @param n Number of bytes to be copied.
 * @return Pointer to the destination, which is dest.
 */
void* s21_memmove(void* dest, const void* src, s21_size_t n);

/**
 * @brief Sets the first n bytes of the block of memory pointed by str to the
 * specified value.
 * @param str Pointer to the block of memory.
 * @param c Value to be set.
 * @param n Number of bytes to be set to the value.
 * @return Pointer to the memory area str.
 */
void* s21_memset(void* str, int c, s21_size_t n);

/**
 * @brief Copies the string pointed by src to the character array dest.
 * @param dest Destination string.
 * @param src Source string.
 * @return Pointer to the destination string dest.
 */
char* s21_strcpy(char* dest, const char* src);

/**
 * @brief Copies up to n characters from the string pointed by src to the
 * character array dest.
 * @param dest Destination string.
 * @param src Source string.
 * @param n Maximum number of characters to be copied.
 * @return Pointer to the destination string dest.
 */
char* s21_strncpy(char* dest, const char* src, s21_size_t n);

/************************************************
 * SEARCHES -> s21_search.c
 ***********************************************/

/**
 * @brief Scans the initial n bytes of the memory area pointed to by str for
 * the first instance of c.
 * @param str Pointer to the block of memory.
 * @param c Value to be searched.
 * @param n Number of bytes to be scanned.
 * @return Pointer to the matching byte or NULL if no such byte is found.
 */
void* s21_memchr(const void* str, int c, s21_size_t n);

/**
 * @brief Searches for the last occurrence of the character c in the string
 * pointed by str.
 * @param str Pointer to the C string.
 * @param c Character to be located.
 * @return Pointer to the found character or NULL if no such character is found.
 */
char* s21_strrchr(const char* str, int c);

/**
 * @brief Searches for the first occurrence of the character c in the string
 * pointed by str.
 * @param str Pointer to the C string.
 * @param c Character to be located.
 * @return Pointer to the found character or NULL if no such character is found.
 */
char* s21_strchr(const char* str, int c);

/**
 * @brief Finds the first character in the string str1 that matches any
 * character specified in str2.
 * @param str1 Input string to be scanned.
 * @param str2 String containing the characters to match.
 * @return Pointer to the first matching character or NULL if no match is found.
 */
char* s21_strpbrk(const char* str1, const char* str2);

/**
 * @brief Finds the first occurrence of the entire sequence of characters
 * specified in needle in the string haystack.
 * @param haystack C string to be scanned.
 * @param needle C string containing the sequence of characters to match.
 * @return Pointer to the first occurrence or NULL if not found.
 */
char* s21_strstr(const char* haystack, const char* needle);

/************************************************
 * COMPARISONS -> s21_comparision.c
 ***********************************************/

/**
 * @brief Compares the first n bytes of the memory areas str1 and str2.
 * @param str1 Pointer to the first block of memory.
 * @param str2 Pointer to the second block of memory.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if str1 is
 * found, respectively, to be less than, to match, or be greater than str2.
 */
int s21_memcmp(const void* str1, const void* str2, s21_size_t n);

/**
 * @brief Compares two strings str1 and str2.
 * @param str1 String to be compared.
 * @param str2 String to be compared.
 * @return An integer less than, equal to, or greater than zero if str1 is
 * found, respectively, to be less than, to match, or be greater than str2.
 */
int s21_strcmp(const char* str1, const char* str2);

/**
 * @brief Compares up to n characters of two strings str1 and str2.
 * @param str1 String to be compared.
 * @param str2 String to be compared.
 * @param n Maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if str1 is
 * found, respectively, to be less than, to match, or be greater than str2.
 */
int s21_strncmp(const char* str1, const char* str2, s21_size_t n);

/************************************************
 * UTILITIES -> s21_helping.c
 ***********************************************/

/**
 * @brief Breaks string str into a series of tokens using the delimiter delim.
 * @param str String to be split.
 * @param delim C string containing the delimiters.
 * @return Pointer to the first token found in the string, or NULL if no token
 * is found.
 */
char* s21_strtok(char* str, const char* delim);

/**
 * @brief Returns a pointer to the textual representation of the current
 * errno value.
 * @param errnum Error number.
 * @return Pointer to the error message string.
 */
char* s21_strerror(int errnum);

/**
 * @brief Concatenates the string pointed by src to the end of the string
 * pointed by dest.
 * @param dest Destination string.
 * @param src Source string to be appended.
 * @return Pointer to the resulting string dest.
 */
char* s21_strcat(char* dest, const char* src);

/**
 * @brief Concatenates up to n characters from the string pointed by src to the
 * end of the string pointed by dest.
 * @param dest Destination string.
 * @param src Source string to be appended.
 * @param n Maximum number of characters to append.
 * @return Pointer to the resulting string dest.
 */
char* s21_strncat(char* dest, const char* src, s21_size_t n);

/**
 * @brief Checks if a character is a delimiter.
 * @param c Character to check.
 * @param delim String containing delimiters.
 * @return 1 if c is a delimiter, 0 otherwise.
 */
int is_delim(char c, const char* delim);

/************************************************
 * SPECIAL FUNCTIONS -> s21_spec.c
 ***********************************************/

/**
 * @brief Converts all uppercase characters in the string to lowercase.
 * @param str Input string.
 * @return Pointer to the converted string.
 */
void* s21_to_upper(const char* str);

/**
 * @brief Converts all lowercase characters in the string to uppercase.
 * @param str Input string.
 * @return Pointer to the converted string.
 */
void* s21_to_lower(const char* str);

/**
 * @brief Removes leading and trailing occurrences of characters specified in
 * trim_chars from the input string.
 * @param src Input string.
 * @param trim_chars String containing characters to be trimmed.
 * @return Pointer to the trimmed string.
 */
void* s21_trim(const char* src, const char* trim_chars);

/**
 * @brief Inserts a string into another string at a specified index.
 * @param src Source string.
 * @param str String to be inserted.
 * @param start_index Index at which str is to be inserted.
 * @return Pointer to the modified string.
 */
void* s21_insert(const char* src, const char* str, s21_size_t start_index);

/************************************************
 * SIO -> s21_sio.c
 ***********************************************/

/**
 * @brief Writes formatted output to a string.
 * @param str Destination string.
 * @param format Format string.
 * @return Number of characters written (excluding null byte).
 */
int s21_sprintf(char* str, const char* format, ...);

/**
 * @brief Reads formatted input from a string.
 * @param str Source string.
 * @param format Format string.
 * @return Number of input items successfully matched and assigned.
 */
int s21_sscanf(const char* str, const char* format, ...);

#endif  // SRC_S21_STRING_H_
