// 函数: sub_6c3050
// 地址: 0x6c3050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx

if (arg3 == 0 || arg5 == 0)
    ebx = 0xffffffff
else
    ebx = arg5(arg3, 0, 0, 1)

int32_t* var_8 = nullptr
int32_t var_4 = 0
_memset(arg2, 0, 0x2d0)
*arg2 = arg3
arg2[0x2c] = arg4

if (arg2 != 0xffffffe8)
    (*arg2)[7] = 0xffffffff
    *(arg2 + 0x18) = zx.o(0)
    *(arg2 + 0x28) = 0
    arg2[3][0] = 0

if (ebx != 0xffffffff)
    (*arg2)[1] = 1

int32_t var_20 = 0x20
int32_t var_24 = 1
(*arg2)[0xd] = 1
uint32_t eax_3 = _calloc()
int32_t var_28_1 = 0x10
uint32_t var_2c_2 = (*arg2)[0xd]
(*arg2)[0x12] = eax_3
(*arg2)[0x13] = _calloc()
sub_6b7990(&(*arg2)[0x1e], 0xffffffff)
int128_t* result = sub_6c2000(&var_8, (*arg2)[0x12], arg2, (*arg2)[0x13], &var_8, &var_4, nullptr)
int32_t* ebx_1 = var_8

if (result s>= 0)
    int32_t esi_1 = var_4
    int32_t var_20_1 = 4
    int32_t var_24_1 = esi_1 + 2
    uint32_t* eax_7 = _calloc()
    uint32_t ecx_3 = (*arg2)[0x72]
    arg2[4][0] = eax_7
    (*arg2)[0x17] = ecx_3
    *eax_7 = ecx_3
    *(arg2[4][0] + 4) = esi_1
    sub_700660(arg2[4][0] + 8, ebx_1, esi_1 << 2)
    int32_t var_20_2 = 8
    int32_t var_24_2 = 1
    int32_t var_28_3 = 8
    int32_t var_2c_4 = 1
    (*arg2)[0xe] = _calloc()
    (*arg2)[0xf] = _calloc()
    uint32_t eax_14 = (*arg2)[0xe]
    *eax_14 = 0
    *(eax_14 + 4) = 0
    int32_t* ecx_4 = (*arg2)[0xf]
    *ecx_4 = (*arg2)[2]
    ecx_4[1] = (*arg2)[3]
    (*arg2)[0x16] = 1
else
    *arg2 = 0
    sub_6c31d0(arg2)

if (ebx_1 != 0)
    _free(ebx_1)

return result
