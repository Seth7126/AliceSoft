// 函数: sub_4b5250
// 地址: 0x4b5250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
sub_6ca100(edi, *(arg1 + 4))
sub_6ca100(edi, *(arg1 + 8))
sub_6ca100(edi, *(arg1 + 0x10))
sub_6ca100(edi, *(arg1 + 0x14))
sub_6ca100(edi, *(arg1 + 0x20))
sub_6ca100(edi, *(arg1 + 0x1c))
sub_6ca100(edi, *(arg1 + 0x18))
arg2 = *(arg1 + 0x28)
sub_6ca100(edi, arg2)
arg2 = *(arg1 + 0x2c)
sub_6ca100(edi, arg2)
sub_6ca100(edi, *(arg1 + 0x38))
sub_6ca100(edi, *(arg1 + 0x34))
sub_6ca100(edi, *(arg1 + 0x30))
arg2.b = *(arg1 + 0x40) != 0
sub_4263a0(edi + 4, &arg2)
arg2 = *(arg1 + 0x44)
sub_6ca100(edi, arg2)
arg2 = *(arg1 + 0x48)
sub_6ca100(edi, arg2)
arg2 = *(arg1 + 0x4c)
sub_6ca100(edi, arg2)
arg2 = *(arg1 + 0x50)
sub_6ca100(edi, arg2)
arg2 = *(arg1 + 0x54)
sub_6ca100(edi, arg2)
sub_6ca100(edi, *(arg1 + 0x58))
sub_6ca100(edi, *(arg1 + 0x5c))
sub_6ca100(edi, *(arg1 + 0x60))
sub_6ca100(edi, *(arg1 + 0x64))
sub_6ca100(edi, *(arg1 + 0x68))
sub_6ca100(edi, *(arg1 + 0x6c))
sub_6ca100(edi, *(arg1 + 0x70))
sub_6ca100(edi, *(arg1 + 0x74))
sub_6ca100(edi, *(arg1 + 0x78))
sub_6ca100(edi, *(arg1 + 0x7c))
sub_6ca100(edi, *(arg1 + 0x80))
sub_6ca100(edi, *(arg1 + 0x84))
sub_6ca100(edi, *(arg1 + 0x88))
int32_t edx = *(arg1 + 0xa0)
void* ecx_31 = arg1 + 0x8c
int32_t ebp = *(ecx_31 + 0x10)
void* eax

if (edx u< 0x10)
    eax = ecx_31
else
    eax = *ecx_31

if (edx u>= 0x10)
    ecx_31 = *ecx_31

arg2.b = 0
void* var_14_31 = arg2
sub_6ca200(edi + 4, *(edi + 8), ecx_31, eax + ebp)
arg2.b = 0
sub_4263a0(edi + 4, &arg2)
sub_6ca100(edi, *(arg1 + 0xa4))
void* result
result.b = 1
return result
