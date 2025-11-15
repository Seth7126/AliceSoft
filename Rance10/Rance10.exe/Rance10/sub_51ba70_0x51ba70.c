// 函数: sub_51ba70
// 地址: 0x51ba70
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
int32_t edx = *(arg1 + 0x58)
void* ecx_13 = arg1 + 0x44
int32_t ebp = *(ecx_13 + 0x10)
void* eax

if (edx u< 0x10)
    eax = ecx_13
else
    eax = *ecx_13

if (edx u>= 0x10)
    ecx_13 = *ecx_13

arg2.b = 0
void* var_14_13 = arg2
sub_6ca200(edi + 4, *(edi + 8), ecx_13, eax + ebp)
arg2.b = 0
sub_4263a0(edi + 4, &arg2)
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
sub_6ca100(edi, *(arg1 + 0x8c))
int32_t edx_1 = *(arg1 + 0xa4)
void* ecx_29 = arg1 + 0x90
int32_t ebp_1 = *(ecx_29 + 0x10)
void* eax_2

if (edx_1 u< 0x10)
    eax_2 = ecx_29
else
    eax_2 = *ecx_29

if (edx_1 u>= 0x10)
    ecx_29 = *ecx_29

arg2.b = 0
void* var_14_28 = arg2
sub_6ca200(edi + 4, *(edi + 8), ecx_29, eax_2 + ebp_1)
arg2.b = 0
sub_4263a0(edi + 4, &arg2)
sub_6ca100(edi, *(arg1 + 0xa8))
arg2.b = *(arg1 + 0xac) != 0
sub_4263a0(edi + 4, &arg2)
void* result
result.b = 1
return result
