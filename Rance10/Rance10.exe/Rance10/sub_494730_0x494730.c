// 函数: sub_494730
// 地址: 0x494730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ebx = arg1
void** edi = ebx

if (*(ebx + 0xd) != 0)
    return 

do
    sub_494730(edi[2])
    int32_t eax_1 = ebx[0xa]
    void* esi_1 = &ebx[5]
    edi = *edi
    
    if (eax_1 u>= 0x10)
        sub_403160(*esi_1, eax_1 + 1, 1)
    
    *(esi_1 + 0x14) = 0xf
    bool cond:0_1 = *(esi_1 + 0x14) u< 0x10
    *(esi_1 + 0x10) = 0
    
    if (not(cond:0_1))
        esi_1 = *esi_1
    
    *esi_1 = 0
    sub_403160(ebx, 1, 0x2c)
    ebx = edi
while (*(edi + 0xd) == 0)
