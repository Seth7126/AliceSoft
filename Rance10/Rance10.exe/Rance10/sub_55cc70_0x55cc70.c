// 函数: sub_55cc70
// 地址: 0x55cc70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = arg2
int32_t result = 0

while (i != *(arg1 + 0xa0))
    void* edi_1 = *i
    int32_t* ecx = edi_1 + 4
    
    if (*(edi_1 + 0x18) u>= 0x10)
        ecx = *ecx
    
    int32_t esi_2 = ecx[4]
    int32_t eax = 1
    
    if (esi_2 u< 1)
        eax = esi_2
    
    if (sub_406ac0(eax, &(*U"\n\n\n\n\n")[2], ecx, eax) == 0 && esi_2 u>= 1 && esi_2 u<= 1)
        break
    
    result += sub_55aaf0(*(edi_1 + 0x6c), edi_1 + 0xb4)
    i = &arg2[1]
    arg2 = i

return result
