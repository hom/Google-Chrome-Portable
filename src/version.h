#define RELEASE_VER_MAIN 2
#define RELEASE_VER_SUB 0
#define RELEASE_VER_FIX 0

#define TOSTRING2(arg) #arg
#define TOSTRING(arg) TOSTRING2(arg)

#define RELEASE_VER_STR TOSTRING(RELEASE_VER_MAIN) "." TOSTRING(RELEASE_VER_SUB) "." TOSTRING(RELEASE_VER_FIX)
