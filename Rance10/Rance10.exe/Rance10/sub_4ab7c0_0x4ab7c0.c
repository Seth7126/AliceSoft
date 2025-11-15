// 函数: sub_4ab7c0
// 地址: 0x4ab7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[4])
    int32_t* ecx = *i
    int32_t edx_1 = i[1]
    
    if (ecx != edx_1)
        while (true)
            int32_t eax_1 = ecx[1]
            int32_t* ebx_1 = *ecx
            
            if (eax_1 != ebx_1)
                while (*ebx_1 != arg2)
                    ebx_1 = &ebx_1[1]
                    
                    if (ebx_1 == eax_1)
                        break
                
                if (eax_1 != ebx_1)
                    if (sub_4afe00(i, arg2) != 0)
                        return ***i
                    
                    break
            
            ecx = &ecx[3]
            
            if (ecx == edx_1)
                goto label_4ab806
        
        break
    
label_4ab806:

return 0
