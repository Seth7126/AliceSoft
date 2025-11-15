// 函数: sub_408d50
// 地址: 0x408d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg3
int32_t ebx = *(arg1 + 4)
int32_t* esi = edi + 0x3c

if (esi != ebx)
    do
        sub_409530(edi, esi)
        esi = &esi[0xf]
        edi += 0x3c
    while (esi != ebx)
    
    edi = arg3

void* ebx_1 = *(arg1 + 4)
int32_t* esi_1 = ebx_1 - 0x3c

if (esi_1 != ebx_1)
    do
        sub_408350(esi_1)
        esi_1 = &esi_1[0xf]
    while (esi_1 != ebx_1)
    
    edi = arg3

*(arg1 + 4) -= 0x3c
*arg2 = edi
return arg2
