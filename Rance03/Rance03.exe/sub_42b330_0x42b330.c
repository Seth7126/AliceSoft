// 函数: sub_42b330
// 地址: 0x42b330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_24
int32_t eax_1 = __security_cookie ^ &var_24
BOOL result = arg2

if (arg1[0x40] != result)
    arg1[0x40] = result
    int32_t i = 0
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x38e38e39, arg1[0x3e] - arg1[0x3d])
    int32_t i_1 = 0
    int32_t edx_2 = edx_1 s>> 3
    
    if (edx_2 u>> 0x1f != neg.d(edx_2))
        int32_t* edi_1 = nullptr
        var_24 = nullptr
        int32_t edx_6
        
        do
            int32_t eax_7 = arg1[0x40]
            char ecx_3
            
            if (eax_7 s< 0 || i != eax_7)
                ecx_3 = 0
            else
                ecx_3 = 1
            
            int32_t eax_8 = 0
            
            if (ecx_3 != 0)
                eax_8 = 5
            
            ShowWindow((***(edi_1 + arg1[0x3d]))(eax_8))
            int32_t eax_11 = arg1[0x40]
            
            if (eax_11 s>= 0 && i == eax_11)
                RECT rect
                GetClientRect(arg1[0x17], &rect)
                int32_t ebx_2 = rect.right - rect.left
                int32_t edi_3 = rect.bottom - rect.top
                int32_t eax_13 = (*(arg1[0x21] + 0x14))()
                int32_t ecx_6 = arg1[0x40]
                int32_t edi_4 = edi_3 - eax_13
                arg1[0x6a] = eax_13
                arg1[0x6b] = edi_4
                MoveWindow((***(arg1[0x3d] + ecx_6 * 0x24))(0, eax_13, ebx_2, edi_4, 1))
                i = i_1
                edi_1 = var_24
            
            i += 1
            int32_t eax_16
            int32_t edx_5
            edx_5:eax_16 = muls.dp.d(0x38e38e39, arg1[0x3e] - arg1[0x3d])
            edi_1 = &edi_1[9]
            i_1 = i
            edx_6 = edx_5 s>> 3
            var_24 = edi_1
        while (i u< (edx_6 u>> 0x1f) + edx_6)
    
    sub_42aa80(arg1)
    sub_42acd0(arg1)
    sub_42b030(arg1)
    sub_42b4c0(arg1)
    InvalidateRect(arg1[0x17], nullptr, 1)
    result = UpdateWindow(arg1[0x17])

sub_69a5bc(eax_1 ^ &var_24)
return result
