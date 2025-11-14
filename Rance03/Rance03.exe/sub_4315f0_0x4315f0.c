// 函数: sub_4315f0
// 地址: 0x4315f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = (*(*arg1 + 0x8c))()
int32_t eax_2 = (*(*arg1 + 0x88))()
int32_t var_8
int32_t var_4

if (eax_1 != arg1[0x3c])
    int32_t eax_3 = GetScrollPos(arg1[0x17], SB_HORZ)
    
    if (eax_3 s>= eax_1)
        var_4 = 0
        var_8 = eax_1 - 1
        int32_t* ecx_1 = &var_8
        
        if (eax_1 - 1 s<= 0)
            ecx_1 = &var_4
        
        eax_3 = *ecx_1
    
    sub_42c030(arg1, eax_3)
    arg1[0x3c] = eax_1

if (eax_2 != arg1[0x3d])
    int32_t eax_5 = GetScrollPos(arg1[0x17], SB_VERT)
    
    if (eax_5 s>= eax_2)
        var_8 = 0
        var_4 = eax_2 - 1
        int32_t* ecx_3 = &var_4
        
        if (eax_2 - 1 s<= 0)
            ecx_3 = &var_8
        
        eax_5 = *ecx_3
    
    sub_42bf70(arg1, eax_5, 0)
    arg1[0x3d] = eax_2

InvalidateRect(arg1[0x17], nullptr, 0)
return UpdateWindow(arg1[0x17])
