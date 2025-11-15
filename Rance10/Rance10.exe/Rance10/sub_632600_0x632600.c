// 函数: sub_632600
// 地址: 0x632600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 4) = std::locale::_Locimp::_New_Locimp(*(arg2 + 4))

if (arg3 != 0)
    int32_t eax_1 = data_7fbad8
    
    if (eax_1 == 0)
        std::_Lockit::_Lockit(&arg2, eax_1)
        
        if (data_7fbad8 == 0)
            int32_t eax_3 = data_7fbac4 + 1
            data_7fbac4 = eax_3
            data_7fbad8 = eax_3
        
        std::_Lockit::~_Lockit(&arg2)
        eax_1 = data_7fbad8
    
    std::locale::_Locimp::_Locimp_Addfac(*(arg1 + 4), arg3, eax_1)
    *(*(arg1 + 4) + 0x10) = 0
    sub_630d40(*(arg1 + 4) + 0x18, U"*")

return arg1
