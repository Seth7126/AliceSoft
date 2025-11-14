// 函数: sub_419bf0
// 地址: 0x419bf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1 + 0x44
int32_t eax_1 = (*(*(arg1 + 0x44) + 0x10))()
int32_t result = (*(*esi + 0x14))()

if (eax_1 s> 0 && result s> 0)
    sub_420d50(result, 0, esi, 0, eax_1, result, (*(arg1 + 0xf4)).b, (*(arg1 + 0xf8)).b, 
        (*(arg1 + 0xfc)).b)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x38e38e39, *(arg1 + 0x88) - *(arg1 + 0x84))
    int32_t var_20_1 = 0
    int32_t edx_2 = edx_1 s>> 3
    int32_t var_1c_1 = 0
    result = (edx_2 u>> 0x1f) + edx_2
    
    if (result s> 0)
        int32_t edx_3 = 0
        int32_t var_14_1 = 0
        int32_t ebx_6
        
        do
            int32_t ebp_1 = *(arg1 + 0x74)
            int32_t i_5 = *(arg1 + 0x7c) - ebp_1
            int32_t i_6 = i_5
            int32_t i_7 = *(edx_3 + *(arg1 + 0x84) + 0x1c) + (*(arg1 + 0x80) << 1)
            
            if (var_1c_1 == *(arg1 + 0x90))
                ebp_1 -= 1
                i_5 += 1
                i_6 = i_5
            
            int32_t eax_8
            char ecx_6
            char edx_4
            
            if (var_1c_1 != *(arg1 + 0x94))
                eax_8 = *(arg1 + 0x100)
                ecx_6 = (*(arg1 + 0x104)).b
                edx_4 = (*(arg1 + 0x108)).b
            else
                eax_8 = 0xff
                ecx_6 = -1
                edx_4 = -0x40
            
            sub_420d50(eax_8, var_20_1, esi, ebp_1, i_7, i_5, eax_8.b, ecx_6, edx_4)
            HDC hdc = *(arg1 + 0x68)
            COLORREF color
            HGDIOBJ h
            
            if (var_1c_1 != *(arg1 + 0x90))
                h = SelectObject(hdc, *(arg1 + 0x9c))
                color = GetSysColor(COLOR_BTNSHADOW)
            else
                h = SelectObject(hdc, *(arg1 + 0xc8))
                color = 0
            
            SetTextColor(hdc, color)
            void* eax_13 = *(arg1 + 0x84)
            void** lpString = eax_13 + 4 + var_14_1
            
            if (lpString[5] u>= 0x10)
                lpString = *lpString
            
            int32_t ecx_9 = *(arg1 + 0x80)
            TextOutA(hdc, var_20_1 + ecx_9, ecx_9 + ebp_1, lpString, *(var_14_1 + eax_13 + 0x14))
            SelectObject(hdc, h)
            char eax_18 = (*(arg1 + 0x120)).b
            char eax_19 = (*(arg1 + 0x11c)).b
            char eax_20 = (*(arg1 + 0x118)).b
            char* esi_1 = (*(*(arg1 + 0x44) + 8))(var_20_1, ebp_1)
            (*(*(arg1 + 0x44) + 0x1c))()
            int32_t i_3 = i_7
            
            if (i_3 s> 0)
                int32_t i
                
                do
                    *esi_1 = eax_20
                    esi_1 = &esi_1[3]
                    esi_1[0xfffffffe] = eax_19
                    esi_1[0xffffffff] = eax_18
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                i_5 = i_6
            
            char eax_23 = (*(arg1 + 0x120)).b
            char eax_24 = (*(arg1 + 0x11c)).b
            char eax_25 = (*(arg1 + 0x118)).b
            char* esi_2 = (*(*(arg1 + 0x44) + 8))(var_20_1, ebp_1)
            int32_t eax_29 = (*(*(arg1 + 0x44) + 0x1c))() - 3
            
            if (i_5 s> 0)
                int32_t i_4 = i_5
                int32_t i_1
                
                do
                    *esi_2 = eax_25
                    esi_2[1] = eax_24
                    esi_2[2] = eax_23
                    esi_2 = &esi_2[3 + eax_29]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                i_5 = i_6
            
            if (var_1c_1 != *(arg1 + 0x90))
                int32_t eax_32 = ebp_1 - 1 + i_5
                sub_420d50(eax_32, var_20_1, arg1 + 0x44, eax_32, i_7, 1, (*(arg1 + 0xf4)).b, 
                    (*(arg1 + 0xf8)).b, (*(arg1 + 0xfc)).b)
            
            int32_t ecx_17 = var_20_1 + i_7
            var_20_1 = ecx_17
            int16_t* esi_5 = (*(*(arg1 + 0x44) + 8))(ecx_17 - 1, ebp_1)
            int32_t eax_37 = (*(*(arg1 + 0x44) + 0x1c))() - 3
            
            if (i_5 s> 0)
                int32_t i_2
                
                do
                    *esi_5 = 0
                    esi_5[1].b = 0
                    esi_5 = esi_5 + 3 + eax_37
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
            
            esi = arg1 + 0x44
            var_14_1 += 0x24
            ebx_6 = var_1c_1 + 1
            int32_t eax_38
            int32_t edx_14
            edx_14:eax_38 = muls.dp.d(0x38e38e39, *(arg1 + 0x88) - *(arg1 + 0x84))
            var_1c_1 = ebx_6
            int32_t edx_15 = edx_14 s>> 3
            result = (edx_15 u>> 0x1f) + edx_15
            edx_3 = var_14_1
        while (ebx_6 s< result)

return result
