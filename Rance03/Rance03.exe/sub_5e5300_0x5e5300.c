// 函数: sub_5e5300
// 地址: 0x5e5300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_44
int32_t eax_1 = __security_cookie ^ &var_44
int32_t* result = *(arg1 + 0xc)

if (*result != 0)
    int32_t eax_5
    int32_t edi_1
    
    if ((**(arg1 + 0x1c8))() != 0)
        eax_5 = *(arg1 + 0x50)
        edi_1 = *(arg1 + 0x54)
    else if (arg2 != 0 || *(arg1 + 0x65) == 0)
        eax_5 = *(arg1 + 0x48)
        edi_1 = *(arg1 + 0x4c)
    else
        eax_5 = *(arg1 + 0x74)
        edi_1 = *(arg1 + 0x78)
    
    int32_t var_40_1 = edi_1
    int32_t i_1 = 0
    int32_t eax_33
    int32_t ecx_6
    int32_t i
    
    do
        RECT rect_1
        GetWindowRect(**(arg1 + 0xc), &rect_1)
        int32_t eax_8 = rect_1.bottom - rect_1.top
        int32_t ebx_2 = rect_1.right - rect_1.left
        RECT rect
        GetClientRect(**(arg1 + 0xc), &rect)
        int32_t cx = ebx_2 + rect.left - rect.right + eax_5
        int32_t cy = eax_8 + rect.top - rect.bottom + edi_1
        int32_t X
        int32_t Y
        
        if ((**(arg1 + 0x1c8))() == 0)
            if (arg2 != 0 || *(arg1 + 0x65) == 0)
                int32_t eax_21
                int32_t edx_1
                edx_1:eax_21 = sx.q(GetSystemMetrics(SM_CXSCREEN) - cx)
                X = (eax_21 - edx_1) s>> 1
                int32_t eax_25
                int32_t edx_2
                edx_2:eax_25 = sx.q(GetSystemMetrics(SM_CYSCREEN) - cy)
                Y = (eax_25 - edx_2) s>> 1
            else
                X = *(arg1 + 0x6c)
                Y = *(arg1 + 0x70)
            
            if (Y s< 0)
                Y = 0
        else
            X = 0
            Y = 0
        
        int32_t ecx_3
        ecx_3.b = (**(arg1 + 0x1c8))() != 0
        SetWindowPos(**(arg1 + 0xc), ecx_3 - 2, X, Y, cx, cy, SWP_SHOWWINDOW)
        GetClientRect(**(arg1 + 0xc), &rect)
        ecx_6 = rect.right - rect.left
        eax_33 = rect.bottom - rect.top
        edi_1 = var_40_1
        *(arg1 + 0x50) = ecx_6
        *(arg1 + 0x54) = eax_33
        
        if (ecx_6 == eax_5 && eax_33 == edi_1)
            break
        
        i = i_1 + 1
        i_1 = i
    while (i s< 3)
    
    if (*(arg1 + 0x69) == 0 && (ecx_6 != eax_5 || eax_33 != edi_1))
        sub_64b530(0x6eb518)
    
    SetFocus(**(arg1 + 0xc))
    result = SetForegroundWindow(**(arg1 + 0xc))
    bool cond:1_1 = *(arg1 + 0xe4) == 0
    int32_t edx_4 = *(arg1 + 0x54)
    int32_t edi_4 = *(arg1 + 0x50)
    *(arg1 + 0x104) = edi_4
    *(arg1 + 0x108) = edx_4
    
    if (not(cond:1_1))
        result = (*(**(arg1 + 0xe4) + 0x14))(edi_4, edx_4)

sub_69a5bc(eax_1 ^ &var_44)
return result
