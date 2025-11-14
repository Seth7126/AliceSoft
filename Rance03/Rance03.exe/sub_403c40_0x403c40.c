// 函数: sub_403c40
// 地址: 0x403c40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 != 0)
    bool cond:1_1 = *(arg1 + 0x230) == 0
    int32_t eax_1 = data_74b438
    int32_t ebx_1 = data_74b434
    int32_t ecx = data_75d4b0
    arg3.d = eax_1
    data_75d4b0 = ebx_1
    data_75d4a8 = eax_1
    
    if (cond:1_1)
        sub_41d390(arg1 + 0x414, ebx_1)
    else
        if (ecx != ebx_1)
            sub_417c00(arg1 + 0x224)
            eax_1 = arg3.d
        
        sub_417c60(arg1 + 0x224, eax_1)
        InvalidateRect(*(arg1 + 0x230), nullptr, 1)
        UpdateWindow(*(arg1 + 0x230))
        sub_41d390(arg1 + 0x414, ebx_1)

sub_414c70(arg1 + 0x1a4, arg2)
InvalidateRect(*(arg1 + 0x230), nullptr, 1)
return UpdateWindow(*(arg1 + 0x230))
