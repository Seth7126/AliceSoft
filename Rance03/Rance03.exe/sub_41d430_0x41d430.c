// 函数: sub_41d430
// 地址: 0x41d430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = *(arg1 + 8)
int32_t* i = *edi

while (i != edi)
    int32_t* ecx = i[5]
    
    if (*ecx == 5)
        void* ecx_1 = &ecx[7]
        int32_t ebp_1 = arg2[4]
        int32_t* edx_1
        
        if (arg2[5] u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        int32_t ebx_1 = *(ecx_1 + 0x10)
        
        if (*(ecx_1 + 0x14) u>= 0x10)
            ecx_1 = *ecx_1
        
        int32_t eax_2 = ebp_1
        
        if (ebx_1 u< ebp_1)
            eax_2 = ebx_1
        
        if (sub_405190(eax_2, edx_1, ecx_1, eax_2) == 0 && ebx_1 u>= ebp_1)
            int32_t eax_3
            eax_3.b = ebx_1 != ebp_1
            
            if (eax_3 == 0)
                return i[4]
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i

return 0
