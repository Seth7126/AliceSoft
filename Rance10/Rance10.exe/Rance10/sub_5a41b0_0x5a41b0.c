// 函数: sub_5a41b0
// 地址: 0x5a41b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg3
int32_t ebx = *(arg1 + 4)
int32_t* esi = edi + 0x34c

if (esi != ebx)
    do
        sub_5672c0(edi, esi)
        esi = &esi[0xd3]
        edi += 0x34c
    while (esi != ebx)
    
    edi = arg3

void* ebx_1 = *(arg1 + 4)
void* esi_1 = ebx_1 - 0x34c

if (esi_1 != ebx_1)
    do
        sub_59b2c0(esi_1)
        esi_1 += 0x34c
    while (esi_1 != ebx_1)
    
    edi = arg3

*(arg1 + 4) -= 0x34c
*arg2 = edi
return arg2
