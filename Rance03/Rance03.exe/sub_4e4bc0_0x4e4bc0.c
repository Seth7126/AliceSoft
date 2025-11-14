// 函数: sub_4e4bc0
// 地址: 0x4e4bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* arg_4
void* esi = arg_4
var_4:3.b = *(arg1 + 0x14) != 0
sub_414b60(esi + 4, &var_4:3)
int32_t eax = *(arg1 + 0x40)
void* ecx_1 = arg1 + 0x2c
int32_t ebp = *(ecx_1 + 0x10)
void* edx

if (eax u< 0x10)
    edx = ecx_1
else
    edx = *ecx_1

if (eax u>= 0x10)
    ecx_1 = *ecx_1

void* var_18_1 = arg_4
sub_468ff0(esi + 4, *(esi + 8), ecx_1, edx + ebp)
arg_4.b = 0
sub_414b60(esi + 4, &arg_4)
sub_468ec0(esi, *(arg1 + 0x48))
sub_468ec0(esi, *(arg1 + 0x4c))
sub_468ec0(esi, *(arg1 + 0x50))
sub_468ec0(esi, *(arg1 + 0x54))
sub_468ec0(esi, *(arg1 + 0x58))
void* ecx_9 = *(arg1 + 0x44)

if (ecx_9 == 0)
    sub_468ec0(esi, 0)
    int32_t eax_4
    eax_4.b = 1
    return eax_4

sub_468ec0(esi, sub_4430f0(ecx_9))
int32_t eax_3
eax_3.b = 1
return eax_3
