// 函数: sub_648640
// 地址: 0x648640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx

if (arg3 == 0 || arg5 == 0)
    ebx = 0xffffffff
else
    ebx = arg5(arg3, 0, 0, 1)

int32_t* var_8 = nullptr
int32_t var_4 = 0
int32_t ecx
int32_t edx
ecx, edx = _memset(arg2, 0, 0x2d0)
*arg2 = arg3
*(arg2 + 0x2c0) = arg4

if (arg2 != 0xffffffe8)
    *(arg2 + 0x1c) = 0xffffffff
    *(arg2 + 0x18) = zx.o(0)
    *(arg2 + 0x28) = 0
    *(arg2 + 0x30) = 0

if (ebx != 0xffffffff)
    *(arg2 + 4) = 1

*(arg2 + 0x34) = 1
int32_t eax_3
int32_t ecx_1
int32_t edx_1
eax_3, ecx_1, edx_1 = sub_69cb1c(&arg2[0x18], edx, ecx, 1, 0x20)
*(arg2 + 0x48) = eax_3
*(arg2 + 0x4c) = sub_69cb1c(eax_3, edx_1, ecx_1, 1, 0x10)
sub_63ce70(&arg2[0x78], 0xffffffff)
int32_t result
int32_t ecx_4
int32_t edx_3
result, ecx_4, edx_3 =
    sub_6475e0(&var_8, *(arg2 + 0x48), arg2, *(arg2 + 0x4c), &var_8, &var_4, nullptr)
int32_t* ebp = var_8

if (result s>= 0)
    int32_t esi_1 = var_4
    int32_t* eax_7 = sub_69cb1c(esi_1 + 2, edx_3, ecx_4, esi_1 + 2, 4)
    int32_t ecx_6 = *(arg2 + 0x1c8)
    *(arg2 + 0x40) = eax_7
    *(arg2 + 0x5c) = ecx_6
    *eax_7 = ecx_6
    *(*(arg2 + 0x40) + 4) = esi_1
    int32_t* eax_12
    int32_t ecx_7
    int32_t edx_4
    eax_12, ecx_7, edx_4 = sub_69d850(*(arg2 + 0x40) + 8, ebp, esi_1 << 2)
    int32_t* eax_13
    int32_t ecx_8
    int32_t edx_5
    eax_13, ecx_8, edx_5 = sub_69cb1c(eax_12, edx_4, ecx_7, 1, 8)
    *(arg2 + 0x38) = eax_13
    *(arg2 + 0x3c) = sub_69cb1c(eax_13, edx_5, ecx_8, 1, 8)
    *eax_13 = 0
    eax_13[1] = 0
    int32_t* ecx_9 = *(arg2 + 0x3c)
    *ecx_9 = *(arg2 + 8)
    ecx_9[1] = *(arg2 + 0xc)
    *(arg2 + 0x58) = 1
else
    *arg2 = 0
    sub_6487c0(arg2)

if (ebp != 0)
    _free(ebp)

return result
