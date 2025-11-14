// 函数: sub_414310
// 地址: 0x414310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax

if (data_75d534 != 0)
    void* var_8_1 = arg1
    eax = sub_6203f0()
    
    if (eax != 0)
        eax = (**eax)(0x6da41c)
        *(arg1 + 4) = eax
        
        if (eax != 0)
            eax = (*(*eax + 0x14))(0x6da40c)
            *(arg1 + 8) = eax
            
            if (eax != 0)
                eax = (*(**(arg1 + 4) + 0x14))(0x6da3dc)
                *(arg1 + 0xc) = eax
                
                if (eax != 0)
                    eax = (*(**(arg1 + 4) + 0x14))(0x6da42c)
                    *(arg1 + 0x10) = eax
                    
                    if (eax != 0)
                        int32_t eax_5 = (*(**(arg1 + 4) + 0x14))(0x6da3ec)
                        *(arg1 + 0x14) = eax_5
                        eax_5.b = eax_5 != 0
                        return eax_5

eax.b = 0
return eax
