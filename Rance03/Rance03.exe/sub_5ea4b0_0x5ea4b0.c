// 函数: sub_5ea4b0
// 地址: 0x5ea4b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = data_75d538

if (ecx != 0)
    (**ecx)()
    int32_t* edi_1 = data_75d538
    
    if (edi_1 != 0)
        int32_t* eax_3 = (*(*edi_1 + 0xc))(*(arg1 + 0x60), *(arg1 + 0x64), 0x20)
        (*(*edi_1 + 4))()
        
        if (eax_3 != 0)
            int32_t eax_6
            
            if (sub_5ea450(arg1, eax_3) != 0)
                bool cond:0_1 = sub_5ea530(arg1, arg2, eax_3) == 0
                eax_6 = *eax_3
                
                if (not(cond:0_1))
                    (*(eax_6 + 4))()
                    int32_t eax_8
                    eax_8.b = 1
                    return eax_8
            else
                eax_6 = *eax_3
            
            (*(eax_6 + 4))()

int32_t eax
eax.b = 0
return eax
