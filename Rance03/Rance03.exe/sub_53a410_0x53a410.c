// 函数: sub_53a410
// 地址: 0x53a410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* eax

if (*(arg1 + 0x3c) != 0)
    int32_t* ecx_1 = *(arg1 + 0x14)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        *(arg1 + 0x14) = 0
    
    int32_t* ecx_2 = *(arg1 + 0x10)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))()
        *(arg1 + 0x10) = 0
    
    eax = sub_58e5f0(*(arg1 + 0x3c), arg2)
    *(arg1 + 0x10) = eax
    
    if (eax != 0 && sub_53a7b0(arg1, eax).b != 0)
        if (arg3 != 0)
            char eax_3
            int32_t ecx_5
            int32_t edx_1
            eax_3, ecx_5, edx_1 = sub_53acf0(*(arg1 + 0x10))
            
            if (eax_3 == 0)
                void** eax_4
                
                if (arg2[5] u< 0x10)
                    eax_4 = arg2
                else
                    eax_4 = *arg2
                
                sub_59f4e0(eax_4, edx_1, ecx_5, 0x6e371c, eax_4)
        
        if (arg1 + 0x18 != arg2)
            sub_401ff0(arg1 + 0x18, arg2, 0, 0xffffffff)
        
        sub_53ada0(arg1)
        int32_t eax_5
        eax_5.b = 1
        return eax_5

eax.b = 0
return eax
