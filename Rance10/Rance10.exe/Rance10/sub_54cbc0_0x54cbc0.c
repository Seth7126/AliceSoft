// 函数: sub_54cbc0
// 地址: 0x54cbc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
int32_t eax = *(arg1 + 0x1c)
void* edx = arg1 + 8
int32_t ebp = *(edx + 0x10)
void* ecx

if (eax u< 0x10)
    ecx = edx
else
    ecx = *edx

if (eax u>= 0x10)
    edx = *edx

arg2.b = 0
void* var_14 = arg2
sub_6ca200(ebx + 4, *(ebx + 8), edx, ecx + ebp)
arg2.b = 0
sub_4263a0(ebx + 4, &arg2)
arg2 = *(arg1 + 0x20)
sub_6ca100(ebx, arg2)
arg2 = *(arg1 + 0x24)
sub_6ca100(ebx, arg2)
arg2.b = *(arg1 + 0x28) != 0
sub_4263a0(ebx + 4, &arg2)
sub_6ca100(ebx, *(arg1 + 0xa0))
sub_6ca100(ebx, *(arg1 + 0xa4))
sub_6ca100(ebx, *(arg1 + 0xac))
sub_6ca100(ebx, *(arg1 + 0xb0))
void* result
result.b = 1
return result
