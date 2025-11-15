// 函数: sub_49fd90
// 地址: 0x49fd90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
uint32_t eax = zx.d(arg3)

if (eax u<= 0xa806)
    if (eax == 0xa806)
        int32_t* eax_11 = (***(arg1 + 0x2b8))(0x760ebc)
        
        if (eax_11 != 0 && (**eax_11)() != 0 && data_7fcbbc != 0)
            sub_63c7e0(4)
    else if (eax - 0x9c41 u<= 3)
        switch (eax)
            case 0x9c41, 0x9c44
                if (*(arg1 + 0x224) != 0)
                    bool cond:1 = (*(*(arg1 + 4) + 0x74))() == 0
                    int32_t eax_5 = *(arg1 + 4)
                    
                    if (cond:1)
                        (*(eax_5 + 0x78))()
                        return 0
                    
                    (*(eax_5 + 0x7c))()
            case 0x9c42
                sub_49fcf0(arg1, arg2)
            case 0x9c43
                sub_4a03f0(arg1, arg2)

return 0
