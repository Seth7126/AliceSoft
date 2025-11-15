// 函数: sub_685290
// 地址: 0x685290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (*(arg1 + 0xc) == 0)
    result.b = 0
    return result

int32_t esi = 0

while (true)
    int32_t* ecx = *(arg1 + 0xc)
    int32_t var_4_1 = 0
    
    if (ecx == 0)
        break
    
    if (esi s< 0)
        break
    
    if (esi u>= (*(arg1 + 0x28) - *(arg1 + 0x24)) s>> 2)
        break
    
    if (*(*(arg1 + 0x24) + (esi << 2)) != 0)
        int32_t var_8 = 0
        (*(*ecx + 0x20))(ecx, esi, 1, &var_8)
        *(*(arg1 + 0x24) + (esi << 2)) = var_4_1
    
    esi += 1
    
    if (esi u>= 8)
        int32_t* eax_3 = *(arg1 + 0xc)
        (*(*eax_3 + 0x2c))(eax_3, 0, 0, 0)
        int32_t* eax_4 = *(arg1 + 0xc)
        (*(*eax_4 + 0x24))(eax_4, 0, 0, 0)
        int32_t* eax_5 = *(arg1 + 0xc)
        (*(*eax_5 + 0x44))(eax_5, 0)
        
        if (*(arg1 + 0xc) == 0)
            break
        
        if (*(arg1 + 0x30) != 0xffffffff)
            *(arg1 + 0x30) = 0xffffffff
        
        result.b = 1
        return result

result.b = 0
return result
