// 函数: sub_55a020
// 地址: 0x55a020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 4) != *(arg1 + 8))
    int32_t* ecx = *(arg1 + 0x10)
    
    if (ecx != 0)
        int32_t* ebp = (*(*ecx + 0x18))()
        
        if (ebp == 0)
            int32_t* eax_2
            eax_2.b = 0
            return eax_2
        
        int32_t* i = *(arg1 + 4)
        
        while (i != *(arg1 + 8))
            void* edi_1 = *i
            sub_69d850(ebp, *(edi_1 + 0x24), (*(edi_1 + 0x28) - *(edi_1 + 0x24)) & 0xfffffffc)
            i = &i[1]
            ebp = &ebp[(*(edi_1 + 0x28) - *(edi_1 + 0x24)) s>> 2]
        
        return (*(**(arg1 + 0x10) + 0x1c))() != 0

int32_t eax
eax.b = 1
return eax
