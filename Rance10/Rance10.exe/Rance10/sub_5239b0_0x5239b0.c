// 函数: sub_5239b0
// 地址: 0x5239b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* arg_4
void* edi = arg_4
var_4:3.b = *(arg1 + 0x10) != 0
sub_4263a0(edi + 4, &var_4:3)
int32_t eax = *(arg1 + 0x90)
void* ecx_1 = arg1 + 0x7c
int32_t ebp = *(ecx_1 + 0x10)
void* edx

if (eax u< 0x10)
    edx = ecx_1
else
    edx = *ecx_1

if (eax u>= 0x10)
    ecx_1 = *ecx_1

arg_4.b = 0
void* var_18_1 = arg_4
sub_6ca200(edi + 4, *(edi + 8), ecx_1, edx + ebp)
arg_4.b = 0
sub_4263a0(edi + 4, &arg_4)
sub_6ca100(edi, *(arg1 + 0x98))
sub_6ca100(edi, *(arg1 + 0x9c))
sub_6ca100(edi, *(arg1 + 0xa0))
sub_6ca100(edi, *(arg1 + 0xa4))
sub_6ca100(edi, *(arg1 + 0xa8))
void* ecx_9 = *(arg1 + 0x94)

if (ecx_9 != 0 && sub_436410(ecx_9) == 0)
    sub_6ca100(edi, sub_435fc0(*(arg1 + 0x94)))
    void* eax_4
    eax_4.b = 1
    return eax_4

sub_6ca100(edi, 0xffffffff)
void* eax_5
eax_5.b = 1
return eax_5
