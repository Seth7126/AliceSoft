// 函数: sub_4fd270
// 地址: 0x4fd270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 0x1c)
void* edx = arg1 + 8
int32_t ebp = *(edx + 0x10)
void* edi = arg2
void* ecx

if (eax u< 0x10)
    ecx = edx
else
    ecx = *edx

if (eax u>= 0x10)
    edx = *edx

void* var_14 = arg2
sub_468ff0(edi + 4, *(edi + 8), edx, ecx + ebp)
arg2.b = 0
sub_414b60(edi + 4, &arg2)
sub_468ec0(edi, *(arg1 + 0x38))
sub_468ec0(edi, *(arg1 + 0x3c))
sub_468ec0(edi, *(arg1 + 0x40))
sub_468ec0(edi, *(arg1 + 0x44))
int32_t result
result.b = 1
return result
