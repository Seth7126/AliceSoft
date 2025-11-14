// 函数: sub_5e5610
// 地址: 0x5e5610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1

if ((*arg1[0x72])() == 0)
    sub_5e8670(arg1)
    arg1[0x71].b = 0
    *(arg1 + 0xf9) = 1
    sub_5e9a10(&arg1[0x28])
    int32_t ebx
    
    if (arg1[0x39] != 0)
        ebx.b = (*(*arg1[0x39] + 0x10))()
        
        if (ebx.b != 0 && arg1[0x39] != 0)
            (*(*arg1[0x39] + 0x1c))()
    else
        ebx.b = 0
    
    if (sub_5e5560(arg1) == 0)
        sub_64b530(0x6eb4ec)
        enum MESSAGEBOX_RESULT eax_8
        eax_8.b = 0
        return eax_8
    
    arg1[0x74].b = 1
    sub_5e5870(arg1)
    sub_5e5300(arg1, 0)
    
    if (ebx.b != 0 && arg1[0x39] != 0 && (*(*arg1[0x39] + 0x20))() == 0)
        sub_64b530("Direct3D")
        enum MESSAGEBOX_RESULT eax_11
        eax_11.b = 0
        return eax_11
    
    *(arg1 + 0xf9) = 0
    arg1[0x71].b = 1
    *(arg1 + 0x69) = 1

return 1
