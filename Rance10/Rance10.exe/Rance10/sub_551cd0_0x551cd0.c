// 函数: sub_551cd0
// 地址: 0x551cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x28)
void* edx = arg1 + 0x14
int32_t ebp = *(edx + 0x10)
void* edi = arg2
void* ecx

if (eax u< 0x10)
    ecx = edx
else
    ecx = *edx

if (eax u>= 0x10)
    edx = *edx

arg2.b = 0
void* var_14 = arg2
sub_6ca200(edi + 4, *(edi + 8), edx, ecx + ebp)
arg2.b = 0
sub_4263a0(edi + 4, &arg2)
sub_6ca100(edi, *(arg1 + 0x2c))
sub_6ca100(edi, *(arg1 + 0x30))
sub_6ca100(edi, *(arg1 + 0x34))
sub_6ca100(edi, *(arg1 + 0x4c))
sub_6ca100(edi, *(arg1 + 0x50))
sub_6ca100(edi, *(arg1 + 0x58))
sub_6ca100(edi, *(arg1 + 0x5c))
void* result
result.b = 1
return result
