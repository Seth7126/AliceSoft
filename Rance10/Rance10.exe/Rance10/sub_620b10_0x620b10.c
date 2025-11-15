// 函数: sub_620b10
// 地址: 0x620b10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ebx = arg3
char* esi = arg2
char* edi = ebx

if (ebx != arg2)
    do
        esi -= 1
        
        if (edi == esi)
            break
        
        arg3.b = *edi
        *edi = *esi
        edi = &edi[1]
        *esi = arg3.b
    while (edi != esi)

char* esi_1 = arg2
char* edx = arg4

if (arg2 != arg4)
    do
        edx -= 1
        
        if (esi_1 == edx)
            break
        
        arg3.b = *esi_1
        *esi_1 = *edx
        esi_1 = &esi_1[1]
        *edx = arg3.b
    while (esi_1 != edx)

char* edx_1 = arg4
char* esi_2 = ebx

if (ebx != arg4)
    do
        edx_1 -= 1
        
        if (esi_2 == edx_1)
            break
        
        arg3.b = *esi_2
        *esi_2 = *edx_1
        esi_2 = &esi_2[1]
        *edx_1 = arg3.b
    while (esi_2 != edx_1)

return arg4 + ebx - arg2
