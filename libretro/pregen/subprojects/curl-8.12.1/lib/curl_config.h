/* lib/curl_config.h.  Generated from meson/curl_config.h.meson by meson.  */

/* to enable curl debug memory tracking */
#undef CURLDEBUG

/* Location of default ca bundle */
#define CURL_CA_BUNDLE "/etc/ssl/certs/ca-certificates.crt"

/* define "1" to use built in CA store of SSL library */
#undef CURL_CA_FALLBACK

/* Location of default ca path */
#define CURL_CA_PATH "/etc/ssl/certs"

/* Default SSL backend */
#undef CURL_DEFAULT_SSL_BACKEND

/* disable alt-svc */
#define CURL_DISABLE_ALTSVC 1

/* to disable AWS sig support */
#undef CURL_DISABLE_AWS

/* to disable basic authentication */
#undef CURL_DISABLE_BASIC_AUTH

/* to disable bearer authentication */
#undef CURL_DISABLE_BEARER_AUTH

/* disable local binding support */
#undef CURL_DISABLE_BINDLOCAL

/* to disable cookies support */
#undef CURL_DISABLE_COOKIES

/* to disable DICT */
#define CURL_DISABLE_DICT 1

/* to disable digest authentication */
#undef CURL_DISABLE_DIGEST_AUTH

/* disable DoH */
#undef CURL_DISABLE_DOH

/* to disable FILE */
#define CURL_DISABLE_FILE 1

/* disable form API */
#undef CURL_DISABLE_FORM_API

/* to disable FTP */
#undef CURL_DISABLE_FTP

/* to disable curl_easy_options */
#undef CURL_DISABLE_GETOPTIONS

/* to disable Gopher */
#define CURL_DISABLE_GOPHER 1

/* disable headers-api */
#undef CURL_DISABLE_HEADERS_API

/* disable alt-svc */
#define CURL_DISABLE_HSTS 1

/* to disable HTTP */
#undef CURL_DISABLE_HTTP

/* disable HTTP authentication */
#undef CURL_DISABLE_HTTP_AUTH

/* to disable IMAP */
#define CURL_DISABLE_IMAP 1

/* to disable kerberos authentication */
#undef CURL_DISABLE_KERBEROS_AUTH

/* to disable LDAP */
#define CURL_DISABLE_LDAP 1

/* to disable LDAPS */
#define CURL_DISABLE_LDAPS 1

/* to disable --libcurl C code generation option */
#undef CURL_DISABLE_LIBCURL_OPTION

/* disable mime API */
#undef CURL_DISABLE_MIME

/* to disable MQTT */
#define CURL_DISABLE_MQTT 1

/* to disable negotiate authentication */
#undef CURL_DISABLE_NEGOTIATE_AUTH

/* disable netrc parsing */
#undef CURL_DISABLE_NETRC

/* to disable NTLM support */
#define CURL_DISABLE_NTLM 1

/* if the OpenSSL configuration won't be loaded automatically */
#define CURL_DISABLE_OPENSSL_AUTO_LOAD_CONFIG 1

/* disable date parsing */
#undef CURL_DISABLE_PARSEDATE

/* to disable POP3 */
#define CURL_DISABLE_POP3 1

/* disable progress-meter */
#undef CURL_DISABLE_PROGRESS_METER

/* to disable proxies */
#undef CURL_DISABLE_PROXY

/* to disable RTSP */
#define CURL_DISABLE_RTSP 1

/* to disable IPFS */
#define CURL_DISABLE_IPFS 1

/* disable SHA-512/256 hash algorithm */
#undef CURL_DISABLE_SHA512_256

/* disable DNS shuffling */
#undef CURL_DISABLE_SHUFFLE_DNS

/* to disable SMB/CIFS */
#define CURL_DISABLE_SMB 1

/* to disable SMTP */
#define CURL_DISABLE_SMTP 1

/* to disable socketpair support */
#undef CURL_DISABLE_SOCKETPAIR

/* to disable TELNET */
#define CURL_DISABLE_TELNET 1

/* to disable TFTP */
#define CURL_DISABLE_TFTP 1

/* to disable verbose strings */
#undef CURL_DISABLE_VERBOSE_STRINGS

/* to disable WebSockets */
/* #undef CURL_DISABLE_WEBSOCKETS */

/* Definition to make a library symbol externally visible. */
#define CURL_EXTERN_SYMBOL __attribute__ ((__visibility__ ("default")))

/* built with multiple SSL backends */
#undef CURL_WITH_MULTI_SSL

/* enable debug build options */
#define DEBUGBUILD

/* Define to the type of arg 2 for gethostname. */
#define GETHOSTNAME_TYPE_ARG2 int

/* Define to 1 if you have `ADDRESS_FAMILY' type. */
#define HAVE_ADDRESS_FAMILY 1

/* Define to 1 if you have the alarm function. */
#undef HAVE_ALARM

/* Define to 1 if you have the `arc4random' function. */
#undef HAVE_ARC4RANDOM

/* Define to 1 if you have the <arpa/inet.h> header file. */
#undef HAVE_ARPA_INET_H

/* Define to 1 if you have _Atomic support. */
#define HAVE_ATOMIC 1

/* Define to 1 if you have the basename function. */
#define HAVE_BASENAME 1

/* Define to 1 if bool is an available type. */
#define HAVE_BOOL_T 1

/* if BROTLI is in use */
#undef HAVE_BROTLI

/* Define to 1 if you have the __builtin_available function. */
#undef HAVE_BUILTIN_AVAILABLE

/* Define to 1 if you have the clock_gettime function and monotonic timer. */
#undef HAVE_CLOCK_GETTIME_MONOTONIC

/* Define to 1 if you have the clock_gettime function and raw monotonic timer.
   */
#undef HAVE_CLOCK_GETTIME_MONOTONIC_RAW

/* Define to 1 if you have the closesocket function. */
#define HAVE_CLOSESOCKET 1

/* Define to 1 if you have the CloseSocket camel case function. */
/* #undef HAVE_CLOSESOCKET_CAMEL */

/* Define to 1 if you have the <crypto.h> header file. */
/* #undef HAVE_CRYPTO_H */

/* Define to 1 if you have the fseeko declaration. */
#define HAVE_DECL_FSEEKO 1

/* "Set if getpwuid_r() declaration is missing" */
/* #undef HAVE_DECL_GETPWUID_R_MISSING */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the 'eventfd' function. */
#undef HAVE_EVENTFD

/* Define to 1 if you have the fcntl function. */
#undef HAVE_FCNTL

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have a working fcntl O_NONBLOCK function. */
#undef HAVE_FCNTL_O_NONBLOCK

/* Define to 1 if you have the `fnmatch' function. */
#undef HAVE_FNMATCH

/* Define to 1 if you have the freeaddrinfo function. */
#define HAVE_FREEADDRINFO 1

/* Define to 1 if you have the `fseeko' function. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the fsetxattr function. */
#undef HAVE_FSETXATTR

/* fsetxattr() takes 5 args */
#undef HAVE_FSETXATTR_5

/* fsetxattr() takes 6 args */
#undef HAVE_FSETXATTR_6

/* Define to 1 if you have the ftruncate function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have a working getaddrinfo function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if the getaddrinfo function is threadsafe. */
#define HAVE_GETADDRINFO_THREADSAFE 1

/* Define to 1 if you have the `geteuid' function. */
#undef HAVE_GETEUID

/* Define to 1 if you have the gethostbyname_r function. */
#undef HAVE_GETHOSTBYNAME_R

/* gethostbyname_r() takes 3 args */
#undef HAVE_GETHOSTBYNAME_R_3

/* gethostbyname_r() takes 5 args */
#undef HAVE_GETHOSTBYNAME_R_5

/* gethostbyname_r() takes 6 args */
#undef HAVE_GETHOSTBYNAME_R_6

/* Define to 1 if you have the gethostname function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have a working getifaddrs function. */
#undef HAVE_GETIFADDRS

/* Define to 1 if you have the `getpass_r' function. */
#undef HAVE_GETPASS_R

/* Define to 1 if you have the getpeername function. */
#undef HAVE_GETPEERNAME

/* Define to 1 if you have the `getppid' function. */
#undef HAVE_GETPPID

/* Define to 1 if you have the `getpwuid' function. */
#undef HAVE_GETPWUID

/* Define to 1 if you have the `getpwuid_r' function. */
#undef HAVE_GETPWUID_R

/* Define to 1 if you have the `getrlimit' function. */
#undef HAVE_GETRLIMIT

/* Define to 1 if you have the getsockname function. */
#define HAVE_GETSOCKNAME 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have a working glibc-style strerror_r function. */
#undef HAVE_GLIBC_STRERROR_R

/* Define to 1 if you have a working gmtime_r function. */
#undef HAVE_GMTIME_R

/* if you have the function gnutls_srp_verifier */
/* #undef HAVE_GNUTLS_SRP */

/* if you have GSS-API libraries */
#undef HAVE_GSSAPI

/* Define to 1 if you have the <gssapi/gssapi_generic.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_GENERIC_H */

/* Define to 1 if you have the <gssapi/gssapi.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_H */

/* if you have GNU GSS */
#undef HAVE_GSSGNU

/* Define to 1 if you have the <idn2.h> header file. */
#undef HAVE_IDN2_H

/* Define to 1 if you have the <ifaddrs.h> header file. */
#undef HAVE_IFADDRS_H

/* Define to 1 if you have the `if_nametoindex' function. */
#undef HAVE_IF_NAMETOINDEX

/* Define to 1 if you have a IPv6 capable working inet_ntop function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have a IPv6 capable working inet_pton function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the ioctlsocket function. */
#define HAVE_IOCTLSOCKET 1

/* Define to 1 if you have the IoctlSocket camel case function. */
#undef HAVE_IOCTLSOCKET_CAMEL

/* Define to 1 if you have a working IoctlSocket camel case FIONBIO function.
   */
#undef HAVE_IOCTLSOCKET_CAMEL_FIONBIO

/* Define to 1 if you have a working ioctlsocket FIONBIO function. */
#define HAVE_IOCTLSOCKET_FIONBIO 1

/* Define to 1 if you have a working ioctl FIONBIO function. */
#undef HAVE_IOCTL_FIONBIO

/* Define to 1 if you have a working ioctl SIOCGIFADDR function. */
#undef HAVE_IOCTL_SIOCGIFADDR

/* Define to 1 if you have the <io.h> header file. */
#define HAVE_IO_H 1

/* Use LDAPS implementation */
#undef HAVE_LDAP_SSL

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the `idn2' library (-lidn2). */
#undef HAVE_LIBIDN2

/* if zlib is available */
#undef HAVE_LIBZ

/* Define to 1 if you have the <linux/tcp.h> header file. */
#undef HAVE_LINUX_TCP_H

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if the compiler supports the 'long long' data type. */
#define HAVE_LONGLONG 1

/* Define to 1 if you have the `mach_absolute_time' function. */
/* #undef HAVE_MACH_ABSOLUTE_TIME */

/* Define to 1 if you have the memrchr function or macro. */
/* #undef HAVE_MEMRCHR */

/* Define to 1 if you have the MSG_NOSIGNAL flag. */
#undef HAVE_MSG_NOSIGNAL

/* Define to 1 if you have the <netdb.h> header file. */
#undef HAVE_NETDB_H

/* Define to 1 if you have the <netinet/in6.h> header file. */
#undef HAVE_NETINET_IN6_H

/* Define to 1 if you have the <netinet/in.h> header file. */
#undef HAVE_NETINET_IN_H

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#undef HAVE_NETINET_TCP_H

/* Define to 1 if you have the <netinet/udp.h> header file. */
#undef HAVE_NETINET_UDP_H

/* Define to 1 if you have the <net/if.h> header file. */
#undef HAVE_NET_IF_H

/* if you have an old MIT Kerberos version, lacking GSS_C_NT_HOSTBASED_SERVICE
   */
/* #undef HAVE_OLD_GSSMIT */

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* if you have the functions SSL_CTX_set_srp_username and
   SSL_CTX_set_srp_password */
#undef HAVE_OPENSSL_SRP

/* Define to 1 if you have the <pem.h> header file. */
#undef HAVE_PEM_H

/* Define to 1 if you have the `pipe' function. */
#undef HAVE_PIPE

/* If you have a fine poll */
#undef HAVE_POLL_FINE

/* Define to 1 if you have the <poll.h> header file. */
#undef HAVE_POLL_H

/* Define to 1 if you have a working POSIX-style strerror_r function. */
#undef HAVE_POSIX_STRERROR_R

/* Define to 1 if you have the <proto/bsdsocket.h> header file. */
#undef HAVE_PROTO_BSDSOCKET_H

/* if you have <pthread.h> */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <pwd.h> header file. */
#undef HAVE_PWD_H

/* Define to 1 if you have the `quiche_conn_set_qlog_fd' function. */
/* #undef HAVE_QUICHE_CONN_SET_QLOG_FD */

/* Define to 1 if you have the <quiche.h> header file. */
/* #undef HAVE_QUICHE_H */

/* Define to 1 if you have the recv function. */
#define HAVE_RECV 1

/* Define to 1 if you have the <rsa.h> header file. */
/* #undef HAVE_RSA_H */

/* Define to 1 if you have the sa_family_t type. */
#undef HAVE_SA_FAMILY_T

/* Define to 1 if you have the `sched_yield' function. */
#define HAVE_SCHED_YIELD 1

/* Define to 1 if you have the select function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the send function. */
#define HAVE_SEND 1

/* Define to 1 if you have the `sendmsg' function. */
#undef HAVE_SENDMSG

/* Define to 1 if you have the <setjmp.h> header file. */
#define HAVE_SETJMP_H 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setmode' function. */
#define HAVE_SETMODE 1

/* Define to 1 if you have the `setrlimit' function. */
#undef HAVE_SETRLIMIT

/* Define to 1 if you have a working setsockopt SO_NONBLOCK function. */
#undef HAVE_SETSOCKOPT_SO_NONBLOCK

/* Define to 1 if you have the sigaction function. */
#undef HAVE_SIGACTION

/* Define to 1 if you have the siginterrupt function. */
#undef HAVE_SIGINTERRUPT

/* Define to 1 if you have the signal function. */
#undef HAVE_SIGNAL

/* Define to 1 if you have the sigsetjmp function or macro. */
#undef HAVE_SIGSETJMP

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if struct sockaddr_in6 has the sin6_scope_id member */
#define HAVE_SOCKADDR_IN6_SIN6_SCOPE_ID 1

/* Define to 1 if you have the socket function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the socketpair function. */
#undef HAVE_SOCKETPAIR

/* Define to 1 if you have the `SSL_set0_wbio' function. */
#undef HAVE_SSL_SET0_WBIO

/* Define to 1 if you have the <stdatomic.h> header file. */
#define HAVE_STDATOMIC_H 1

/* Define to 1 if you have the <stdbool.h> header file. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the strcasecmp function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the strcmpi function. */
#define HAVE_STRCMPI 1

/* Define to 1 if you have the strdup function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the strerror_r function. */
#undef HAVE_STRERROR_R

/* Define to 1 if you have the stricmp function. */
#define HAVE_STRICMP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <stropts.h> header file. */
#undef HAVE_STROPTS_H

/* Define to 1 if you have the strtok_r function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if you have the strtoll function. */
#define HAVE_STRTOLL 1

/* if struct sockaddr_storage is defined */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if you have the timeval struct. */
#define HAVE_STRUCT_TIMEVAL 1

/* Define to 1 if suseconds_t is an available type. */
#undef HAVE_SUSECONDS_T

/* Define to 1 if you have the <sys/eventfd.h> header file. */
#undef HAVE_SYS_EVENTFD_H

/* Define to 1 if you have the <sys/filio.h> header file. */
#undef HAVE_SYS_FILIO_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#undef HAVE_SYS_POLL_H

/* Define to 1 if you have the <sys/resource.h> header file. */
#undef HAVE_SYS_RESOURCE_H

/* Define to 1 if you have the <sys/select.h> header file. */
#undef HAVE_SYS_SELECT_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/sockio.h> header file. */
#undef HAVE_SYS_SOCKIO_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#undef HAVE_SYS_UN_H

/* Define to 1 if you have the <sys/utime.h> header file. */
#define HAVE_SYS_UTIME_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#undef HAVE_SYS_WAIT_H

/* Define to 1 if you have the <termios.h> header file. */
#undef HAVE_TERMIOS_H

/* Define to 1 if you have the <termio.h> header file. */
#undef HAVE_TERMIO_H

/* Define this if time_t is unsigned */
#undef HAVE_TIME_T_UNSIGNED

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the `utimes' function. */
#undef HAVE_UTIMES

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the <uv.h> header file. */
#undef HAVE_UV_H

/* if you have wolfSSL_DES_ecb_encrypt */
/* #undef HAVE_WOLFSSL_DES_ECB_ENCRYPT */

/* if you have wolfSSL_BIO_set_shutdown */
/* #undef HAVE_WOLFSSL_FULL_BIO */

/* Define to 1 if you have the `wolfSSL_get_peer_certificate' function. */
/* #undef HAVE_WOLFSSL_GET_PEER_CERTIFICATE */

/* Define to 1 if you have the `wolfSSL_UseALPN' function. */
/* #undef HAVE_WOLFSSL_USEALPN */

/* Define this symbol if your OS supports changing the contents of argv */
#undef HAVE_WRITABLE_ARGV

/* if libzstd is in use */
#undef HAVE_ZSTD

/* Define to 1 if you have the `_fseeki64' function. */
#define HAVE__FSEEKI64 1

/* Define to 1 if _REENTRANT preprocessor symbol must be defined. */
#undef NEED_REENTRANT

/* Define to 1 if _THREAD_SAFE preprocessor symbol must be defined. */
/* #undef NEED_THREAD_SAFE */

/* cpu-machine-OS */
#define CURL_OS "x86_64-w64-mingw32"

/* a suitable file to read random data from */
/* #undef RANDOM_FILE */

/* Size of curl_off_t in number of bytes */
#define SIZEOF_CURL_OFF_T 8

/* Size of curl_socket_t in number of bytes */
#define SIZEOF_CURL_SOCKET_T 8

/* Size of int in number of bytes */
#define SIZEOF_INT 4

/* Size of long in number of bytes */
#define SIZEOF_LONG 4

/* Size of off_t in number of bytes */
#define SIZEOF_OFF_T 8

/* Size of size_t in number of bytes */
#define SIZEOF_SIZE_T 8

/* Size of time_t in number of bytes */
#define SIZEOF_TIME_T 8

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* if AmiSSL is in use */
/* #undef USE_AMISSL */

/* if AppleIDN */
/* #undef USE_APPLE_IDN */

/* Define to enable c-ares support */
/* #undef USE_ARES */

/* if BearSSL is enabled */
/* #undef USE_BEARSSL */

/* if ECH support is available */
/* #undef USE_ECH */

/* if GnuTLS is enabled */
/* #undef USE_GNUTLS */

/* GSASL support enabled */
#undef USE_GSASL

/* Define if you want to enable IPv6 support */
#undef USE_IPV6

/* PSL support enabled */
#undef USE_LIBPSL

/* if librtmp is in use */
#undef USE_LIBRTMP

/* if libSSH is in use */
/* #undef USE_LIBSSH */

/* if libSSH2 is in use */
/* #undef USE_LIBSSH2 */

/* if libuv is in use */
#undef USE_LIBUV

/* if mbedTLS is enabled */
/* #undef USE_MBEDTLS */

/* if msh3 is in use */
/* #undef USE_MSH3 */

/* if nghttp2 is in use */
#undef USE_NGHTTP2

/* if nghttp3 is in use */
/* #undef USE_NGHTTP3 */

/* if ngtcp2 is in use */
/* #undef USE_NGTCP2 */

/* Use OpenLDAP-specific code */
/* #undef USE_OPENLDAP */

/* if OpenSSL is in use */
#undef USE_OPENSSL

/* if openssl QUIC is in use */
/* #undef USE_OPENSSL_QUIC */

/* if quiche is in use */
/* #undef USE_QUICHE */

/* if rustls is enabled */
/* #undef USE_RUSTLS */

/* to enable Windows native SSL/TLS support */
#define USE_SCHANNEL 1

/* enable Secure Transport */
#undef USE_SECTRANSP

/* if you want POSIX threaded DNS lookup */
/* #undef USE_THREADS_POSIX */

/* if you want Win32 threaded DNS lookup */
/* #undef USE_THREADS_WIN32 */

/* Use TLS-SRP authentication */
#undef USE_TLS_SRP

/* Use Unix domain sockets */
#undef USE_UNIX_SOCKETS

/* Define to 1 if you are building a Windows target with crypto API support.
   */
/* #undef USE_WIN32_CRYPTO */

/* Define to 1 if you have the `normaliz' (WinIDN) library (-lnormaliz). */
/* #undef USE_WIN32_IDN */

/* Define to 1 if you are building a Windows target with large file support.
   */
#define USE_WIN32_LARGE_FILES 1

/* Use Windows LDAP implementation */
/* #undef USE_WIN32_LDAP */

/* Define to 1 if you are building a Windows target without large file
   support. */
/* #undef USE_WIN32_SMALL_FILES */

/* to enable SSPI support */
#define USE_WINDOWS_SSPI 1

/* if wolfSSH is in use */
/* #undef USE_WOLFSSH */

/* if wolfSSL is enabled */
/* #undef USE_WOLFSSL */

/* Define to 1 if OS is AIX. */
#ifndef _ALL_SOURCE
/* #undef _ALL_SOURCE */
#endif

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Type to use in place of in_addr_t when system does not provide it. */
/* #undef in_addr_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* the signed version of size_t */
/* #undef ssize_t */

/* vim: set ft=c: */
