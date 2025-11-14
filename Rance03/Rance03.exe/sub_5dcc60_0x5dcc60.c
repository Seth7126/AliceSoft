// 函数: sub_5dcc60
// 地址: 0x5dcc60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_24
int32_t eax_1 = __security_cookie ^ &var_24
void* ecx

if (arg2 s>= 0)
    ecx = *(arg1 + 4)

if (arg2 s< 0 || arg2 s>= *(ecx + 0xc) u>> 2)
    sub_64b530(0x6eaa50)
else if (*(ecx + 0x38) == 0 && *(ecx + 0x3c) == 0x10)
    sub_401f60(&var_24, arg3)
    int32_t ebx
    ebx.b = sub_5dd0f0(arg1, arg2, &var_24)
    int32_t var_10
    
    if (var_10 u>= 0x10)
        j__free(var_24)
    
    sub_69a5bc(eax_1 ^ &var_24)
    return ebx.b

uint32_t result
result.b = 0
sub_69a5bc(eax_1 ^ &var_24)
return result
