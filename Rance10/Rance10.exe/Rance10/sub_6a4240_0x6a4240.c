// 函数: sub_6a4240
// 地址: 0x6a4240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_2f4
int32_t eax_1 = __security_cookie ^ &var_2f4
int32_t esi
int32_t var_378 = esi
int32_t edi
int32_t var_37c = edi
char const* const var_374 = "1.6.8"
uint32_t var_370[0x4][0x4]
_memset(&var_370, 0, 0x328)
int32_t var_e0 = 0x7fffffff
int32_t var_dc = 0x7fffffff
int32_t var_d8 = 0
int32_t var_d4 = 0
int32_t var_100 = 0
int32_t var_fc = 0
int32_t var_f8 = 0
int32_t var_31c = 0
void (* var_324)(char* arg1) __noreturn = sub_45c030
int32_t var_320 = 0
void var_48
__setjmp3(&var_2f4, esi, edi, &var_48, 0)
void* var_32c_1 = &var_48
int32_t var_328_1 = 0
void (* var_330_1)(void* env, int32_t value) __noreturn = _longjmp

if (sub_6a40b0(&var_370, var_374) != 0)
    int32_t result
    
    if (var_fc == 0)
        result = sub_705e22()
    else
        result = var_fc(&var_370, 0x328)
    
    if (result != 0)
        int32_t (* var_2cc)(void* arg1, int32_t arg2, int32_t arg3) = sub_6a3f90
        void* (* var_2c8)(void* arg1, int32_t arg2) = sub_6a4000
        int32_t result_1 = result
        int32_t var_32c_2 = 0
        int32_t var_328_2 = 0
        int32_t var_330_2 = 0
        __builtin_memcpy(result, &var_370, 0x328)
        @__security_check_cookie@4(eax_1 ^ &var_2f4)
        return result
    
    sub_6a7530(&var_370, "Out of memory")

@__security_check_cookie@4(eax_1 ^ &var_2f4)
return 0
