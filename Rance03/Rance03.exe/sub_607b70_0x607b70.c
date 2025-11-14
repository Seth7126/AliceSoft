// 函数: sub_607b70
// 地址: 0x607b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_20
int32_t eax_1 = __security_cookie ^ &var_20
sub_403000(&var_20, arg2 - 0x18)

if (arg2 - 0x18 != arg3)
    if (*(arg2 - 4) u>= 0x10)
        j__free(*(arg2 - 0x18))
    
    *(arg2 - 4) = 0xf
    *(arg2 - 8) = 0
    *(arg2 - 0x18) = 0
    sub_4030b0(arg2 - 0x18, arg3)

void* eax_5 = (arg2 - arg3 - 0x18) s/ 0x18
int32_t result = sub_607730(eax_5, nullptr, arg3, eax_5, &var_20, arg4)
int32_t var_c

if (var_c u>= 0x10)
    result = j__free(var_20)

sub_69a5bc(eax_1 ^ &var_20)
return result
