// 函数: sub_5de500
// 地址: 0x5de500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_24
int32_t eax_1 = __security_cookie ^ &var_24
void* eax_2

if (arg2 s>= 0)
    eax_2 = *(arg1 + 4)

if (arg2 s< 0 || arg2 s>= *(eax_2 + 0x30))
    sub_64b530(0x6eabfc)
else if (*(*(eax_2 + 0x2c) + (arg2 << 2)) == 0xc)
    sub_401f60(&var_24, arg3)
    int32_t ebx
    ebx.b = sub_5dd0f0(arg1, arg2, &var_24)
    int32_t var_10
    
    if (var_10 u>= 0x10)
        j__free(var_24)
    
    sub_69a5bc(eax_1 ^ &var_24)
    return ebx.b

enum MESSAGEBOX_RESULT result
result.b = 0
sub_69a5bc(eax_1 ^ &var_24)
return result
