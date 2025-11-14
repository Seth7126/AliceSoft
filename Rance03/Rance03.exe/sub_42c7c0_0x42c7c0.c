// 函数: sub_42c7c0
// 地址: 0x42c7c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax

if (data_75d534 != 0)
    void* __saved_esi_1 = arg1
    eax = sub_6203f0()
    
    if (eax != 0)
        int32_t* esi = (**eax)(0x6db130)
        int32_t* eax_1
        
        if (esi != 0)
            eax_1 = (*(*esi + 0x14))(0x6db120)
            *(arg1 + 4) = eax_1
            
            if (eax_1 != 0)
                eax_1 = (*(*esi + 0x14))(0x6db140)
                *(arg1 + 8) = eax_1
                
                if (eax_1 != 0)
                    int32_t eax_5 = (*(*esi + 0x14))(0x6db110)
                    *(arg1 + 0xc) = eax_5
                    eax_5.b = eax_5 != 0
                    return eax_5
        
        eax_1.b = 0
        return eax_1

eax.b = 0
return eax
