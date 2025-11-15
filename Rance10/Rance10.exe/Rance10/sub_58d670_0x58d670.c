// 函数: sub_58d670
// 地址: 0x58d670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1

if (arg2 == 3)
    *(arg3 + 0x54) = 1

int32_t* eax_1 = *(arg1 + 0x68) + 4
void* eax_3

if (*(*(arg1 + 4) + 0x21) != 0)
    eax_3 = *(arg1 + 0x6c)

int32_t* eax_4

if (*(*(arg1 + 4) + 0x21) == 0 || eax_3 == 0)
    eax_4 = &data_7e7138
else
    eax_4 = eax_3 + 4

void* ecx = *eax_4
int32_t eax_5 = eax_4[1]
sub_58e040(arg1, arg3, arg2)
int128_t xmm0_1

if (arg2 == 0 || (arg2 s> 3 && arg2 s<= 5))
    *(arg3 + 0x58) = *(arg1 + 0x3c)
    xmm0_1 = *(arg1 + 0x4c)
else
    *(arg3 + 0x58) = data_7e7128
    xmm0_1 = data_7fd4f4

*(arg3 + 0x78) = 0x3f800000
*(arg3 + 0x68) = xmm0_1
*(arg3 + 0xe0) = *(arg1 + 0x60)
void* eax_7
eax_7.b = *(*(arg1 + 4) + 0x23)
*(arg3 + 0x7c) = eax_7.b
sub_58e280(arg1, arg3, arg2, arg4)
(*(*arg4 + 0xc8))(1)
int32_t ecx_4

if (*(*(arg1 + 4) + 0x44) == 0 || arg2 == 4 || arg2 == 5)
    ecx_4.b = 0
else
    ecx_4.b = 1

(*(*arg4 + 0xcc))(ecx_4)
void* eax_11 = *(arg1 + 0xc)
*(arg3 + 4) = *(eax_11 + 4)
*(arg3 + 0x14) = *(eax_11 + 0x14)
*(arg3 + 0x24) = *(eax_11 + 0x24)
*(arg3 + 0x34) = *(eax_11 + 0x34)

if (*(arg1 + 0x28) != 0)
    int32_t* ecx_6 = *(*(arg1 + 0xc) + 0x44)
    
    if (ecx_6 != 0 && (**ecx_6)() s> 0)
        int32_t eax_14
        eax_14.b = *(arg1 + 0x28)
        *(arg3 + 0x4c) = eax_14.b
        *(arg3 + 0x44) = *(*(arg1 + 0xc) + 0x44)

*(arg3 + 0xa3) = sub_58c200(*(arg1 + 0x68))
*(arg3 + 0xa4) = *(*(arg1 + 4) + 0x48)
*(arg3 + 0xa8) = *(*(arg1 + 4) + 0x4c)
void* eax_22
eax_22.b = *(*(arg1 + 4) + 0x76)
*(arg3 + 0xac) = eax_22.b
int32_t xmm0_7 = *(arg1 + 0x74)
*(arg3 + 0xb0) = *(arg1 + 0x70)
*(arg3 + 0xb4) = xmm0_7
*(arg3 + 0xb8) = *eax_1
*(arg3 + 0xbc) = eax_1[1]
*(arg3 + 0xc0) = ecx
*(arg3 + 0xc4) = eax_5
*(arg3 + 0xc8) = *(*(arg1 + 4) + 0x58)
*(arg3 + 0xd8) = *(*(arg1 + 4) + 0x68)
void* eax_31

if (arg2 - 2 u> 1)
    eax_31.b = *(*(arg1 + 4) + 0x74)
else
    eax_31.b = 0

*(arg3 + 0x4d) = eax_31.b
char* eax_32

if (**(arg1 + 0xc) == 0 || (*(arg1 + 4))[0x3c] == 0)
    eax_32.b = 0
else
    eax_32.b = 1

*(arg3 + 0x4e) = eax_32.b
*(arg3 + 0x50) = *(*(arg1 + 4) + 0x40)
void* result

if (*(*(arg1 + 0xc) + 2) != 0 && *(*(arg1 + 4) + 0x44) != 0)
    result.b = 1
    *(arg3 + 0xdd) = 1
    return result

result.b = 0
*(arg3 + 0xdd) = 0
return result
