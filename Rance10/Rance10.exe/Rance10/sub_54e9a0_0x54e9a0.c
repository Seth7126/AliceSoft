// 函数: sub_54e9a0
// 地址: 0x54e9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *arg1

if (edi != 0)
    int32_t* edi_1 = *(edi + 0x118)
    
    if (edi_1 != 0)
        int32_t eax_2 = (**edi_1)()
        (*(*edi_1 + 4))()
        
        if (eax_2 == 2)
            return edi_1
        
        int32_t* eax_4 = sub_54e8e0(arg1, edi_1)
        
        if (eax_4 == 0)
            return eax_4
        
        sub_450940(*arg1, eax_4)
        (*(*eax_4 + 4))()
        return *(*arg1 + 0x118)

return 0
