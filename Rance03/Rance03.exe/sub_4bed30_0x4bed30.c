// 函数: sub_4bed30
// 地址: 0x4bed30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg2
int32_t eax = arg1[9]
void* edx = &arg1[4]
int32_t ebp = *(edx + 0x10)
void* ecx

if (eax u< 0x10)
    ecx = edx
else
    ecx = *edx

if (eax u>= 0x10)
    edx = *edx

void* var_14 = arg2
sub_468ff0(esi + 4, *(esi + 8), edx, ecx + ebp)
arg2.b = 0
sub_414b60(esi + 4, &arg2)
int32_t edx_1 = arg1[0xf]
void* ecx_3 = &arg1[0xa]
int32_t ebp_1 = *(ecx_3 + 0x10)
void* eax_2

if (edx_1 u< 0x10)
    eax_2 = ecx_3
else
    eax_2 = *ecx_3

if (edx_1 u>= 0x10)
    ecx_3 = *ecx_3

void* var_14_2 = arg2
sub_468ff0(esi + 4, *(esi + 8), ecx_3, eax_2 + ebp_1)
arg2.b = 0
sub_414b60(esi + 4, &arg2)
arg2 = *arg1
sub_468ec0(esi, arg2)
arg2 = arg1[1]
sub_468ec0(esi, arg2)
sub_468ec0(esi, arg1[2])
return sub_468ec0(esi, arg1[3])
