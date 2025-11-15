// 函数: sub_4b02e0
// 地址: 0x4b02e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (int32_t* i = *arg1; i != arg1[1]; i = &i[3])
    int32_t ecx = i[1]
    int32_t* esi_1 = *i
    
    if (ecx != esi_1)
        while (*esi_1 != arg2)
            esi_1 = &esi_1[1]
            
            if (esi_1 == ecx)
                break
        
        if (ecx != esi_1)
            return **i

return 0
