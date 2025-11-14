// 函数: sub_64c950
// 地址: 0x64c950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_64
int32_t eax_1 = __security_cookie ^ &var_64
int32_t result = arg3
HDC hDC = result

if (result != 0 && arg1[5] s> 0)
    RECT rect
    GetClientRect(arg2, &rect)
    int32_t ecx_1 = arg1[7] + arg1[5]
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(rect.bottom - rect.top)
    int32_t eax_6 = GetScrollPos(arg2, SB_VERT)
    int32_t ebx_2 = divs.dp.d(edx_1:eax_4, ecx_1) + eax_6
    int32_t var_60_1 = ebx_2
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q(GetScrollPos(arg2, SB_HORZ) * arg1[5])
    int32_t eax_11 = (eax_9 - edx_3) s>> 1
    
    if (ebx_2 s>= (*(*arg1 + 4))())
        int32_t eax_14 = (*(*arg1 + 4))()
        ebx_2 = eax_14
        var_60_1 = eax_14
    
    int32_t eax_39 = eax_6
    int32_t var_40_1 = eax_39
    
    if (eax_39 s<= ebx_2)
        int32_t edx_5 = 0
        int32_t var_54_1 = eax_39 * 0x18
        int32_t var_44_1 = 0
        int32_t edi_2 = eax_39
        
        do
            void* eax_18 = arg1[5] + arg1[7]
            void* ebx_4 = edx_5 * eax_18
            void* eax_19 = eax_18 + ebx_4
            int32_t eax_21 = arg1[6] - eax_11
            int32_t eax_23
            
            if (edi_2 s>= 0)
                eax_23 = (*(*arg1 + 4))()
            
            int32_t var_58_2
            
            if (edi_2 s< 0 || edi_2 s>= eax_23)
                var_58_2 = 0
            else
                int32_t* edi_4 = arg1[0x2e] + var_54_1
                sub_64d230(arg1, eax_21, ebx_4, edi_4)
                
                if (edi_4[5] u>= 0x10)
                    edi_4 = *edi_4
                
                edi_2 = var_40_1
                var_58_2 = sub_651150(edi_4)
            
            int32_t ecx_6 = arg1[6]
            
            if (ecx_6 s> 0)
                (*(*arg1 + 0x44))(edi_2, hDC, 0, ecx_6, ebx_4, eax_19)
            
            int32_t eax_28
            int32_t edx_6
            edx_6:eax_28 = sx.q(arg1[5] * var_58_2)
            (*(*arg1 + 0x44))(edi_2, hDC, ((eax_28 - edx_6) s>> 1) - eax_11 + arg1[6], rect.right, 
                ebx_4, eax_19)
            RECT lprc
            lprc.left = 0
            lprc.top = arg1[5] + ebx_4
            lprc.right = rect.right - rect.left
            lprc.bottom = eax_19
            FillRect(hDC, &lprc, GetStockObject(WHITE_BRUSH))
            edi_2 += 1
            var_54_1 += 0x18
            edx_5 = var_44_1 + 1
            ebx_2 = var_60_1
            var_40_1 = edi_2
            var_44_1 = edx_5
        while (edi_2 s<= ebx_2)
        
        eax_39 = eax_6
    
    RECT lprc_1
    lprc_1.left = 0
    lprc_1.right = rect.right
    lprc_1.top = (ebx_2 - eax_39 + 1) * (arg1[7] + arg1[5])
    lprc_1.bottom = rect.bottom
    result = FillRect(hDC, &lprc_1, GetStockObject(WHITE_BRUSH))

sub_69a5bc(eax_1 ^ &var_64)
return result
