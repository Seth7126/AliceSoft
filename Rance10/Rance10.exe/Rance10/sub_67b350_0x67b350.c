// 函数: sub_67b350
// 地址: 0x67b350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_194
int32_t eax_1 = __security_cookie ^ &var_194
int32_t ecx_1 = arg5 s>> 2
int32_t edx_1 = arg4 s>> 3
int32_t eax_3 = *(*(arg3 + 0x1c0) + 0x18)
int32_t ebx_1 = arg2 s>> 2
int32_t ebx_2 = ebx_1 << 5
var_194 = ecx_1
char var_104[0x100]
int32_t eax_5 = sub_67aff0(&var_104, ebx_2 + 4, arg3, (edx_1 << 5) + 2, (ecx_1 << 5) + 4, &var_104)
char var_184[0x80]
sub_67b1d0(eax_5, ebx_2 + 4, arg3, (edx_1 << 5) + 2, (ecx_1 << 5) + 4, eax_5, &var_104, &var_184)
char (* result)[0x80] = &var_184
int32_t i_1 = 4
int32_t edx_7 = (var_194 + (edx_1 << 6)) << 3
var_194 = edx_7
int32_t* ebx_3 = eax_3 + (ebx_1 << 4)
int32_t i

do
    int32_t esi_5 = edx_7
    int32_t j_1 = 8
    int32_t j
    
    do
        int16_t* edx_9 = *ebx_3 + esi_5
        esi_5 += 0x40
        *edx_9 = zx.w(*result) + 1
        edx_9[1] = zx.w((*result)[1]) + 1
        edx_9[2] = zx.w((*result)[2]) + 1
        uint16_t ecx_9 = zx.w((*result)[3])
        result = &(*result)[4]
        edx_9[3] = ecx_9 + 1
        j = j_1
        j_1 -= 1
    while (j != 1)
    edx_7 = var_194
    ebx_3 = &ebx_3[1]
    i = i_1
    i_1 -= 1
while (i != 1)
@__security_check_cookie@4(eax_1 ^ &var_194)
return result
