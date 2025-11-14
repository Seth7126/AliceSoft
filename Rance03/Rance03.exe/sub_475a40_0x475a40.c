// 函数: sub_475a40
// 地址: 0x475a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (arg2 != 0)
    eax = (**arg2)(0x6dd814)
    
    if (eax != 0)
        int32_t* ecx_1 = *(arg1 + 0x930)
        
        if (ecx_1 != eax && ecx_1 != 0)
            (*(*ecx_1 + 4))()
            *(arg1 + 0x930) = 0
        
        *(arg1 + 0x930) = eax
        int32_t eax_4 = (**arg2)(0x6dd834)
        int32_t eax_5 = (**arg2)(0x6dd804)
        *(arg1 + 0x920) = eax_4
        *(arg1 + 0x924) = eax_5
        *(arg1 + 0x928) = arg1 + 0x92c
        sub_472ee0(arg1 + 0xc)
        sub_472950(arg1 + 0xc)
        (**(arg1 + 0xc))((***(arg1 + 0x928))())
        int32_t eax_8
        eax_8.b = 1
        return eax_8

eax.b = 0
return eax
