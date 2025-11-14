// 函数: sub_48ec40
// 地址: 0x48ec40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 8) != 5)
    return 0xffffffff

int32_t* eax_1 = *(arg1 + 0x58)
void* i = *eax_1
void* i_1 = i

for (; i != eax_1; i = i_1)
    void* ecx = *(i + 0x14)
    
    if (*(ecx + 0x20) != 0)
        int32_t ebx_1 = arg2[4]
        void* ecx_1 = ecx + 0x10
        int32_t* edx_1
        
        if (arg2[5] u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        int32_t edi_1 = *(ecx_1 + 0x10)
        
        if (*(ecx_1 + 0x14) u>= 0x10)
            ecx_1 = *ecx_1
        
        int32_t eax_2 = ebx_1
        
        if (edi_1 u< ebx_1)
            eax_2 = edi_1
        
        if (sub_405190(eax_2, edx_1, ecx_1, eax_2) == 0 && edi_1 u>= ebx_1)
            int32_t eax_3
            eax_3.b = edi_1 != ebx_1
            
            if (eax_3 == 0)
                return *(i + 0x10)
    
    sub_418380(&i_1)

return 0xffffffff
