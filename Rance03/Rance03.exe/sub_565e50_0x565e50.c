// 函数: sub_565e50
// 地址: 0x565e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg3
int32_t ebx = *(arg1 + 4)
void* esi = edi + 0x26c

if (esi != ebx)
    do
        sub_568b50(edi, esi)
        esi += 0x26c
        edi += 0x26c
    while (esi != ebx)
    
    edi = arg3

void* ebx_1 = *(arg1 + 4)
int32_t* esi_1 = ebx_1 - 0x26c

if (esi_1 != ebx_1)
    do
        (**esi_1)(0)
        esi_1 = &esi_1[0x9b]
    while (esi_1 != ebx_1)
    
    edi = arg3

*(arg1 + 4) -= 0x26c
*arg2 = edi
return arg2
