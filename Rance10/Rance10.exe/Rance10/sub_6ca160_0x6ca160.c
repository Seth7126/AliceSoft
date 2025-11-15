// 函数: sub_6ca160
// 地址: 0x6ca160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edx = arg2
int32_t eax = edx[5]
int32_t edi = edx[4]
void** esi

if (eax u< 0x10)
    esi = edx
else
    esi = *edx

if (eax u>= 0x10)
    edx = *edx

int32_t var_c = 0
return sub_6ca200(arg1 + 4, *(arg1 + 8), edx, esi + edi)
