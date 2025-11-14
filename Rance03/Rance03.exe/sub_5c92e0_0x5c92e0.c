// 函数: sub_5c92e0
// 地址: 0x5c92e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
arg1[0x8d] -= 4
int32_t ebp = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t ecx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t eax_3 = sub_5c9230(arg1, *arg1[0x8d], ecx, "A_ERASE")

if (eax_3 != 0)
    if (ebp s>= 0)
        uint32_t eax_4
        
        if (*(eax_3 + 0x48) != 0)
            eax_4 = *(eax_3 + 0xc) u>> 2
        else
            eax_4 = 0
        
        if (ebp s< eax_4)
            uint32_t eax_6
            int32_t* ecx_3
            int32_t edx
            eax_6, ecx_3, edx = sub_5d4bc0(eax_3, ebp)
            
            if (eax_6.b == 0)
                return sub_5c24e0(eax_6, edx, ecx_3, arg1, "array.Erase")
            
            int32_t ebx
            
            if (*(eax_3 + 0xc) != 0)
                ebx = *(eax_3 + 8)
            else
                ebx = 0
            
            int32_t ecx_5 = eax_3
            int32_t edx_1 = ebp + 1
            
            if (edx_1 s< sub_5d4330(ecx_5))
                uint32_t eax_11
                
                do
                    ecx_5 = eax_3
                    *(ebx + (edx_1 << 2) - 4) = *(ebx + (edx_1 << 2))
                    edx_1 += 1
                    eax_11 = sub_5d4330(ecx_5)
                while (edx_1 s< eax_11)
            
            uint32_t eax_13
            
            if (*(eax_3 + 0x48) != 0)
                eax_13 = *(eax_3 + 0xc) u>> 2
            
            if (*(eax_3 + 0x48) == 0 || eax_13 s<= 1)
                *(eax_3 + 0xc) = 0
            else
                uint32_t eax_14 = eax_13 - 1
                int32_t var_18_3
                
                if (eax_14 s<= 0)
                    var_18_3 = 0x6e8a60
                    return sub_5c2400(eax_14, edx_1, ecx_5, arg1, "A_ERASE")
                
                eax_14, ecx_5, edx_1 = sub_64aeb0(eax_3 + 4, eax_14 << 2)
                
                if (eax_14.b == 0)
                    var_18_3 = 0x6e8a60
                    return sub_5c2400(eax_14, edx_1, ecx_5, arg1, "A_ERASE")
            
            int32_t ecx_9 = arg1[0x8b]
            int32_t edi_3 = (arg1[0x8d] - arg1[0x8a]) s>> 2
            
            if (edi_3 + 1 u>= ecx_9)
                sub_64ad90(&arg1[0x89], ecx_9 * 2)
                arg1[0x8d] = arg1[0x8a] + (edi_3 << 2)
            
            int32_t* eax_21 = arg1[0x8d]
            *eax_21 = 1
            arg1[0x8d] += 4
            return eax_21
    
    int32_t ecx_12 = arg1[0x8b]
    int32_t edi_6 = (arg1[0x8d] - arg1[0x8a]) s>> 2
    
    if (edi_6 + 1 u>= ecx_12)
        sub_64ad90(&arg1[0x89], ecx_12 * 2)
        arg1[0x8d] = arg1[0x8a] + (edi_6 << 2)
    
    eax_3 = arg1[0x8d]
    *eax_3 = 0
    arg1[0x8d] += 4

return eax_3
