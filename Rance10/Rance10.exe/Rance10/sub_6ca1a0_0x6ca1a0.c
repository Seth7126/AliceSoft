// 函数: sub_6ca1a0
// 地址: 0x6ca1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edx = arg2
int32_t eax = edx[5]
int32_t ebx = edx[4]
void** edi

if (eax u< 0x10)
    edi = edx
else
    edi = *edx

if (eax u>= 0x10)
    edx = *edx

arg2.b = 0
void** var_10 = arg2
sub_6ca200(arg1 + 4, *(arg1 + 8), edx, edi + ebx)
arg2.b = 0
return sub_4263a0(arg1 + 4, &arg2)
