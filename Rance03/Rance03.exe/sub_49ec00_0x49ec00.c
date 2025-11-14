// 函数: sub_49ec00
// 地址: 0x49ec00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg2
sub_468ec0(esi, *(arg1 + 0x50))
sub_468ec0(esi, *(arg1 + 0x54))
sub_468ec0(esi, *(arg1 + 0x58))
sub_468ec0(esi, *(arg1 + 0x5c))
int32_t edx = *(arg1 + 0x74)
void* ecx_4 = arg1 + 0x60
int32_t ebp = *(ecx_4 + 0x10)
void* eax

if (edx u< 0x10)
    eax = ecx_4
else
    eax = *ecx_4

if (edx u>= 0x10)
    ecx_4 = *ecx_4

void* var_14_4 = arg2
sub_468ff0(esi + 4, *(esi + 8), ecx_4, eax + ebp)
arg2.b = 0
sub_414b60(esi + 4, &arg2)
int32_t eax_2 = *(arg1 + 0x8c)
void* ecx_7 = arg1 + 0x78
int32_t ebp_1 = *(ecx_7 + 0x10)
void* edx_1

if (eax_2 u< 0x10)
    edx_1 = ecx_7
else
    edx_1 = *ecx_7

if (eax_2 u>= 0x10)
    ecx_7 = *ecx_7

void* var_14_6 = arg2
sub_468ff0(esi + 4, *(esi + 8), ecx_7, edx_1 + ebp_1)
arg2.b = 0
sub_414b60(esi + 4, &arg2)
sub_468ec0(esi, *(arg1 + 0x94))
sub_468ec0(esi, *(arg1 + 0x98))
sub_468ec0(esi, *(arg1 + 0xa4))
sub_468ec0(esi, *(arg1 + 0xa0))
sub_468ec0(esi, *(arg1 + 0x9c))
arg2 = *(arg1 + 0xac)
sub_468ec0(esi, arg2)
arg2 = *(arg1 + 0xb0)
sub_468ec0(esi, arg2)
sub_468ec0(esi, *(arg1 + 0xbc))
sub_468ec0(esi, *(arg1 + 0xb8))
sub_468ec0(esi, *(arg1 + 0xb4))
sub_468ec0(esi, *(arg1 + 0xc4))
int32_t result
result.b = 1
return result
