// 函数: sub_56a320
// 地址: 0x56a320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    void* ecx = *i
    
    if (ecx != 0)
        int32_t eax_1 = *(ecx + 0xc)
        
        if (eax_1 == 0)
            if (sub_557300(ecx + 0x31c, arg2) == 0)
                return 0
        else if (eax_1 == 1)
            void* edi_1 = *(ecx + 0x37c)
            
            if (edi_1 != 0)
                if (sub_583dd0(edi_1, arg2) == 0)
                    return 0
                
                if (sub_583f30(edi_1, arg2) == 0)
                    return 0
                
                *(edi_1 + 0x10) = 1

*(arg1 + 0x10) = 1
return 1
