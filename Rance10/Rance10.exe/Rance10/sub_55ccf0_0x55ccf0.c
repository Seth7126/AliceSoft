// 函数: sub_55ccf0
// 地址: 0x55ccf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = arg2
int32_t result = 0

while (i != *(arg1 + 0xa0))
    void* esi_1 = *i
    int32_t result_1 = sub_55ab70(esi_1 + 0xb4, esi_1 + 0x38)
    int32_t* ecx = esi_1 + 4
    
    if (result s< result_1)
        result = result_1
    
    if (ecx[5] u>= 0x10)
        ecx = *ecx
    
    int32_t esi_3 = ecx[4]
    int32_t eax_2 = 1
    
    if (esi_3 u< 1)
        eax_2 = esi_3
    
    if (sub_406ac0(eax_2, &(*U"\n\n\n\n\n")[3], ecx, eax_2) == 0 && esi_3 u>= 1 && esi_3 u<= 1)
        break
    
    i = &arg2[1]
    arg2 = i

return result
