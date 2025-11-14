// 函数: sub_627390
// 地址: 0x627390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_384 = esi
int32_t edi
int32_t var_388 = edi
char const* const var_37c = "1.6.8"
char var_378[0x40]
_memset(&var_378, 0, 0x328)
int32_t var_e8 = 0x7fffffff
int32_t var_e4 = 0x7fffffff
int32_t var_e0 = 0
int32_t var_dc = 0
int32_t var_108 = 0
int32_t var_104 = 0
int32_t var_100 = 0
int32_t var_324 = 0
void (* var_32c)(char* arg1) __noreturn = sub_635d20
int32_t var_328 = 0
void var_50
__setjmp3(&__saved_ebp, esi, edi, &var_50, 0)
void* var_334_1 = &var_50
int32_t var_330_1 = 0
int32_t (* var_338_1)(int32_t* arg1, int32_t arg2) = sub_69bfc0

if (sub_627200(&var_378, var_37c) != 0)
    uint32_t var_38c_1 = 0x328
    int32_t result
    
    if (var_104 == 0)
        result = _malloc(var_38c_1)
    else
        result = var_104(&var_378, var_38c_1)
    
    if (result != 0)
        int32_t (* var_2d4)(void* arg1, int32_t arg2, int32_t arg3) = sub_627130
        void* (* var_2d0)(void* arg1, int32_t arg2) = sub_627160
        int32_t result_1 = result
        int32_t var_334_2 = 0
        int32_t var_330_2 = 0
        int32_t var_338_2 = 0
        __builtin_memcpy(result, &var_378, 0x328)
        sub_69a5bc(eax_1 ^ &__saved_ebp)
        return result
    
    sub_62a550(&var_378, "Out of memory")

sub_69a5bc(eax_1 ^ &__saved_ebp)
return 0
