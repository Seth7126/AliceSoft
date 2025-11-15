// 函数: sub_687cd0
// 地址: 0x687cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[8].b != 0)
    char result = (*(*arg1 + 0xc))()
    
    if (result == 0)
        return result

if ((*(*arg1 + 0x10))() == 0)
    return 1

int32_t* i = arg1[0x20]

for (int32_t edi = arg1[0x21]; i != edi; i = &i[1])
    if (sub_694830(*i) == 0)
        return 0

int32_t* i_1 = arg1[0x26]

for (int32_t edi_1 = arg1[0x27]; i_1 != edi_1; i_1 = &i_1[1])
    if (sub_688a00(*i_1) == 0)
        return 0

if (sub_688530(&arg1[0x2b]) != 0 && sub_688440(&arg1[0x31]) != 0)
    int32_t* i_2 = arg1[0x3e]
    
    for (int32_t edi_2 = arg1[0x3f]; i_2 != edi_2; i_2 = &i_2[1])
        if (sub_694c50(*i_2) == 0)
            return 0
    
    int32_t* i_3 = arg1[0x44]
    
    for (int32_t edi_3 = arg1[0x45]; i_3 != edi_3; i_3 = &i_3[1])
        if (sub_689660(*i_3) == 0)
            return 0
    
    if (sub_6926c0(&arg1[0x5d]) != 0 && sub_693c60(&arg1[0x7b]) != 0
            && sub_683f90(&arg1[0x9a], arg1[0xd]) != 0)
        int32_t var_10_2 = arg1[0xd]
        return sub_68a9b0(&arg1[0xa2]) != 0

return 0
