// 函数: sub_44e450
// 地址: 0x44e450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ebx = arg1
void** edi = ebx

if (*(ebx + 0xd) != 0)
    return 

do
    sub_44e450(edi[2])
    int32_t eax_1 = ebx[9]
    void* esi_1 = &ebx[4]
    edi = *edi
    
    if (eax_1 u>= 0x10)
        sub_403160(*esi_1, eax_1 + 1, 1)
    
    *(esi_1 + 0x14) = 0xf
    bool cond:0_1 = *(esi_1 + 0x14) u< 0x10
    *(esi_1 + 0x10) = 0
    
    if (not(cond:0_1))
        esi_1 = *esi_1
    
    *esi_1 = 0
    sub_403160(ebx, 1, 0x28)
    ebx = edi
while (*(edi + 0xd) == 0)
