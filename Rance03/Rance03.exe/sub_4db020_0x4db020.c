// 函数: sub_4db020
// 地址: 0x4db020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
sub_468ec0(edi, *(arg1 + 8))
sub_468ec0(edi, *(arg1 + 0xc))
sub_468ec0(edi, *(arg1 + 0x14))
sub_468ec0(edi, *(arg1 + 0x18))
sub_468ec0(edi, *(arg1 + 0x24))
sub_468ec0(edi, *(arg1 + 0x20))
sub_468ec0(edi, *(arg1 + 0x1c))
arg2 = *(arg1 + 0x2c)
sub_468ec0(edi, arg2)
arg2 = *(arg1 + 0x30)
sub_468ec0(edi, arg2)
sub_468ec0(edi, *(arg1 + 0x3c))
sub_468ec0(edi, *(arg1 + 0x38))
sub_468ec0(edi, *(arg1 + 0x34))
arg2.b = *(arg1 + 0x44) != 0
sub_414b60(edi + 4, &arg2)
int32_t edx = *(arg1 + 0x5c)
void* ecx_13 = arg1 + 0x48
int32_t ebp = *(ecx_13 + 0x10)
void* eax

if (edx u< 0x10)
    eax = ecx_13
else
    eax = *ecx_13

if (edx u>= 0x10)
    ecx_13 = *ecx_13

void* var_14_13 = arg2
sub_468ff0(edi + 4, *(edi + 8), ecx_13, eax + ebp)
arg2.b = 0
sub_414b60(edi + 4, &arg2)
sub_468ec0(edi, *(arg1 + 0x60))
sub_468ec0(edi, *(arg1 + 0x64))
sub_468ec0(edi, *(arg1 + 0x68))
sub_468ec0(edi, *(arg1 + 0x6c))
sub_468ec0(edi, *(arg1 + 0x70))
sub_468ec0(edi, *(arg1 + 0x74))
sub_468ec0(edi, *(arg1 + 0x78))
sub_468ec0(edi, *(arg1 + 0x7c))
sub_468ec0(edi, *(arg1 + 0x80))
sub_468ec0(edi, *(arg1 + 0x84))
sub_468ec0(edi, *(arg1 + 0x88))
sub_468ec0(edi, *(arg1 + 0x8c))
sub_468ec0(edi, *(arg1 + 0x90))
int32_t edx_1 = *(arg1 + 0xa8)
int32_t* ecx_29 = arg1 + 0x94
int32_t ebp_1 = ecx_29[4]
int32_t* eax_2

if (edx_1 u< 0x10)
    eax_2 = ecx_29
else
    eax_2 = *ecx_29

if (edx_1 u>= 0x10)
    ecx_29 = *ecx_29

void* var_14_28 = arg2
sub_468ff0(edi + 4, *(edi + 8), ecx_29, eax_2 + ebp_1)
arg2.b = 0
sub_414b60(edi + 4, &arg2)
sub_468ec0(edi, *(arg1 + 0xac))
arg2.b = *(arg1 + 0xb0) != 0
sub_414b60(edi + 4, &arg2)
int32_t result
result.b = 1
return result
