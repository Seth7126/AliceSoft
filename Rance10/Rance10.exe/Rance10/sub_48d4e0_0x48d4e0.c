// 函数: sub_48d4e0
// 地址: 0x48d4e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg2
int32_t* esi = ebx
int32_t* edi = arg3

if (arg3 != ebx)
    do
        esi -= 4
        
        if (edi == esi)
            break
        
        int32_t xmm0_1 = *edi
        *edi = *esi
        edi = &edi[1]
        *esi = xmm0_1
    while (edi != esi)

int32_t* ecx = arg4

if (ebx != arg4)
    do
        ecx -= 4
        
        if (arg2 == ecx)
            break
        
        int32_t xmm0_2 = *arg2
        *arg2 = *ecx
        arg2 = &arg2[1]
        *ecx = xmm0_2
    while (arg2 != ecx)

int32_t* ecx_1 = arg4
int32_t* edx = arg3

if (arg3 != arg4)
    do
        ecx_1 -= 4
        
        if (edx == ecx_1)
            break
        
        int32_t xmm0_3 = *edx
        *edx = *ecx_1
        edx = &edx[1]
        *ecx_1 = xmm0_3
    while (edx != ecx_1)

return &arg3[(arg4 - ebx) s>> 2]
