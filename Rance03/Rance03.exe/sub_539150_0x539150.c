// 函数: sub_539150
// 地址: 0x539150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = arg1 + 8
int32_t xmm6 = *(arg3 + 4)
int32_t i_1 = 3
int32_t esi = *(arg2 + 0x58)
int32_t xmm2 = *(arg3 + 8)
int32_t xmm5 = *(arg3 + 0xc)
int32_t xmm3 = *(arg3 + 0x10)
int32_t xmm4 = *(arg3 + 0x14)
int32_t xmm1 = *(arg3 + 0x18)
int32_t result
int32_t i

do
    void* eax_1 = *ecx
    int32_t eax_2
    
    if (eax_1 != 0)
        eax_2 = *(eax_1 + 4)
    else
        eax_2 = 0xffffffff
    
    result = eax_2 * 9
    int32_t xmm0_1 = *(esi + (result << 2))
    
    if (not(xmm6 f<= xmm0_1))
        xmm6 = xmm0_1
        *(arg3 + 4) = xmm6
    
    int32_t xmm0_2 = *(esi + (result << 2))
    
    if (not(xmm0_2 f<= xmm2))
        xmm2 = xmm0_2
        *(arg3 + 8) = xmm2
    
    int32_t xmm0_3 = *(esi + (result << 2) + 4)
    
    if (not(xmm5 f<= xmm0_3))
        xmm5 = xmm0_3
        *(arg3 + 0xc) = xmm5
    
    int32_t xmm0_4 = *(esi + (result << 2) + 4)
    
    if (not(xmm0_4 f<= xmm3))
        xmm3 = xmm0_4
        *(arg3 + 0x10) = xmm3
    
    int32_t xmm0_5 = *(esi + (result << 2) + 8)
    
    if (not(xmm4 f<= xmm0_5))
        xmm4 = xmm0_5
        *(arg3 + 0x14) = xmm4
    
    int32_t xmm0_6 = *(esi + (result << 2) + 8)
    
    if (not(xmm0_6 f<= xmm1))
        xmm1 = xmm0_6
        *(arg3 + 0x18) = xmm1
    
    ecx = &ecx[5]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
