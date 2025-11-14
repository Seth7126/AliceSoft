// 函数: sub_49a880
// 地址: 0x49a880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
sub_468ec0(edi, *(arg1 + 4))
sub_468ec0(edi, *(arg1 + 8))
arg2.b = *(arg1 + 0xc) != 0
sub_414b60(edi + 4, &arg2)
sub_468ec0(edi, *(arg1 + 0x10))
sub_468ec0(edi, *(arg1 + 0x14))
sub_468ec0(edi, *(arg1 + 0x18))
sub_468ec0(edi, *(arg1 + 0x20))
sub_468ec0(edi, *(arg1 + 0x24))
sub_468ec0(edi, *(arg1 + 0x30))
sub_468ec0(edi, *(arg1 + 0x2c))
sub_468ec0(edi, *(arg1 + 0x28))
arg2 = *(arg1 + 0x38)
sub_468ec0(edi, arg2)
arg2 = *(arg1 + 0x3c)
sub_468ec0(edi, arg2)
sub_468ec0(edi, *(arg1 + 0x48))
sub_468ec0(edi, *(arg1 + 0x44))
sub_468ec0(edi, *(arg1 + 0x40))
int32_t edx = *(arg1 + 0x64)
void* ecx_16 = arg1 + 0x50
int32_t ebp = *(ecx_16 + 0x10)
void* eax

if (edx u< 0x10)
    eax = ecx_16
else
    eax = *ecx_16

if (edx u>= 0x10)
    ecx_16 = *ecx_16

void* var_14_16 = arg2
sub_468ff0(edi + 4, *(edi + 8), ecx_16, eax + ebp)
arg2.b = 0
sub_414b60(edi + 4, &arg2)
int32_t edx_1 = *(arg1 + 0x10c)
void* ecx_19 = arg1 + 0xf8
int32_t ebp_1 = *(ecx_19 + 0x10)
void* eax_2

if (edx_1 u< 0x10)
    eax_2 = ecx_19
else
    eax_2 = *ecx_19

if (edx_1 u>= 0x10)
    ecx_19 = *ecx_19

void* var_14_18 = arg2
sub_468ff0(edi + 4, *(edi + 8), ecx_19, eax_2 + ebp_1)
arg2.b = 0
sub_414b60(edi + 4, &arg2)
int32_t edx_2 = *(arg1 + 0x1b4)
void* ecx_22 = arg1 + 0x1a0
int32_t ebp_2 = *(ecx_22 + 0x10)
void* eax_4

if (edx_2 u< 0x10)
    eax_4 = ecx_22
else
    eax_4 = *ecx_22

if (edx_2 u>= 0x10)
    ecx_22 = *ecx_22

void* var_14_20 = arg2
sub_468ff0(edi + 4, *(edi + 8), ecx_22, eax_4 + ebp_2)
arg2.b = 0
sub_414b60(edi + 4, &arg2)
sub_468ec0(edi, *(arg1 + 0x1b8))
arg2.b = *(arg1 + 0x1bc) != 0
sub_414b60(edi + 4, &arg2)
sub_468ec0(edi, *(arg1 + 0x1c0))
sub_468ec0(edi, *(arg1 + 0x1c4))
int32_t result
result.b = 1
return result
