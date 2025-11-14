// 函数: __isdigit_l
// 地址: 0x6a9f1c
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_14
sub_69beb0(&var_14, arg2)
void* ecx_1 = var_14
int32_t result

if (*(ecx_1 + 0x74) s<= 1)
    result = zx.d(*(*(ecx_1 + 0x90) + (arg1 << 1))) & 4
else
    result = __isctype_l(arg1, 4, &var_14)

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
