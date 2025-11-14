// 函数: sub_4ab200
// 地址: 0x4ab200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg2
sub_468ec0(edi, *(arg1 + 0x34))
sub_468ec0(edi, *(arg1 + 0x38))
sub_468ec0(edi, *(arg1 + 0x3c))
sub_468ec0(edi, *(arg1 + 0x40))
sub_468ec0(edi, *(arg1 + 0x44))
sub_468ec0(edi, *(arg1 + 0x48))
sub_468ec0(edi, *(arg1 + 0x4c))
arg2 = *(arg1 + 0x50)
sub_468ec0(edi, arg2)
sub_468ec0(edi, *(arg1 + 0x54))
int32_t edx = *(arg1 + 0x6c)
void* ecx_9 = arg1 + 0x58
int32_t ebp = *(ecx_9 + 0x10)
void* eax

if (edx u< 0x10)
    eax = ecx_9
else
    eax = *ecx_9

if (edx u>= 0x10)
    ecx_9 = *ecx_9

void* var_14_9 = arg2
sub_468ff0(edi + 4, *(edi + 8), ecx_9, eax + ebp)
arg2.b = 0
sub_414b60(edi + 4, &arg2)
int32_t edx_1 = *(arg1 + 0xe4)
void* ecx_12 = arg1 + 0xd0
int32_t ebx_1 = *(ecx_12 + 0x10)
void* eax_2

if (edx_1 u< 0x10)
    eax_2 = ecx_12
else
    eax_2 = *ecx_12

if (edx_1 u>= 0x10)
    ecx_12 = *ecx_12

void* var_14_11 = arg2
sub_468ff0(edi + 4, *(edi + 8), ecx_12, eax_2 + ebx_1)
arg2.b = 0
sub_414b60(edi + 4, &arg2)
int32_t result
result.b = 1
return result
