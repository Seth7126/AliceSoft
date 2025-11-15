// 函数: sub_503820
// 地址: 0x503820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg2
int32_t* edi = arg3

if (arg3 != arg2)
    do
        esi -= 4
        
        if (edi == esi)
            break
        
        int32_t ecx = *edi
        *edi = *esi
        edi = &edi[1]
        *esi = ecx
    while (edi != esi)

int32_t* esi_1 = arg2
int32_t* edx = arg4

if (arg2 != arg4)
    do
        edx -= 4
        
        if (esi_1 == edx)
            break
        
        int32_t ecx_1 = *esi_1
        *esi_1 = *edx
        esi_1 = &esi_1[1]
        *edx = ecx_1
    while (esi_1 != edx)

int32_t* edx_1 = arg4
int32_t* esi_2 = arg3

if (arg3 != arg4)
    do
        edx_1 -= 4
        
        if (esi_2 == edx_1)
            break
        
        int32_t ecx_2 = *esi_2
        *esi_2 = *edx_1
        esi_2 = &esi_2[1]
        *edx_1 = ecx_2
    while (esi_2 != edx_1)

return &arg3[(arg4 - arg2) s>> 2]
