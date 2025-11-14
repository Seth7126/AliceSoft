// 函数: sub_4170d0
// 地址: 0x4170d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT lprc
int32_t eax_1 = __security_cookie ^ &lprc
int32_t var_c = eax_1

if (arg2 s>= 0)
    eax_1 = (*(*arg1 + 0x90))()
    
    if (arg2 s< eax_1)
        lprc.left = arg4
        lprc.right = arg5
        lprc.top = arg6
        lprc.bottom = arg7
        int32_t eax_7 = data_75d4b0
        
        if (data_74b434 == eax_7 && data_74b438 == arg2)
            HBRUSH eax_8 = CreateSolidBrush(arg1[0x20])
            FillRect(arg3, &lprc, eax_8)
            BOOL eax_9 = DeleteObject(eax_8)
            sub_69a5bc(var_c ^ &lprc)
            return eax_9
        
        if (eax_7 == arg1[0x26] && arg2 == arg1[0x27])
            HBRUSH eax_10 = CreateSolidBrush(arg1[0x28])
            FillRect(arg3, &lprc, eax_10)
            BOOL eax_11 = DeleteObject(eax_10)
            sub_69a5bc(var_c ^ &lprc)
            return eax_11
        
        void* ecx_4 = arg1[0x18]
        
        if (ecx_4 != 0 && sub_413850(ecx_4, eax_7, arg2) != 0)
            HBRUSH eax_13 = CreateSolidBrush(arg1[0x22])
            FillRect(arg3, &lprc, eax_13)
            BOOL eax_14 = DeleteObject(eax_13)
            sub_69a5bc(var_c ^ &lprc)
            return eax_14
        
        RECT lprc_1
        lprc_1.left = arg4
        lprc_1.right = arg5
        lprc_1.top = arg6
        lprc_1.bottom = arg7
        eax_1 = FillRect(arg3, &lprc_1, GetStockObject(WHITE_BRUSH))

sub_69a5bc(var_c ^ &lprc)
return eax_1
