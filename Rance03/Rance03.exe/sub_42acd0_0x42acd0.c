// 函数: sub_42acd0
// 地址: 0x42acd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1 + 0xb4
int32_t eax_1 = (*(*(arg1 + 0xb4) + 0x10))()
int32_t result = (*(*esi + 0x14))()

if (eax_1 s> 0 && result s> 0)
    sub_420d50(result, 0, esi, 0, eax_1, result, (*(arg1 + 0x164)).b, (*(arg1 + 0x168)).b, 
        (*(arg1 + 0x16c)).b)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x38e38e39, *(arg1 + 0xf8) - *(arg1 + 0xf4))
    int32_t var_20_1 = 0
    int32_t edx_2 = edx_1 s>> 3
    int32_t var_1c_1 = 0
    uint32_t eax_4 = edx_2 u>> 0x1f
    result = eax_4 + edx_2
    
    if (eax_4 != neg.d(edx_2))
        int32_t edx_3 = 0
        int32_t var_14_1 = 0
        int32_t ebx_5
        
        do
            int32_t ebp_1 = *(arg1 + 0xe4)
            int32_t i_5 = *(arg1 + 0xec) - ebp_1
            int32_t i_6 = i_5
            int32_t i_7 = *(edx_3 + *(arg1 + 0xf4) + 0x1c) + (*(arg1 + 0xf0) << 1)
            int32_t eax_7 = *(arg1 + 0x100)
            
            if (eax_7 s>= 0 && var_1c_1 == eax_7)
                ebp_1 -= 1
                i_5 += 1
                i_6 = i_5
            
            int32_t eax_8 = *(arg1 + 0x104)
            int32_t eax_9
            char ecx_7
            char edx_4
            
            if (eax_8 s< 0 || var_1c_1 != eax_8)
                eax_9 = *(arg1 + 0x170)
                ecx_7 = (*(arg1 + 0x174)).b
                edx_4 = (*(arg1 + 0x178)).b
            else
                eax_9 = 0xff
                ecx_7 = -1
                edx_4 = -0x40
            
            sub_420d50(eax_9, var_20_1, esi, ebp_1, i_7, i_5, eax_9.b, ecx_7, edx_4)
            int32_t eax_10 = *(arg1 + 0x100)
            HDC hdc = *(arg1 + 0xd8)
            COLORREF color
            HGDIOBJ h
            
            if (eax_10 s< 0 || var_1c_1 != eax_10)
                h = SelectObject(hdc, *(arg1 + 0x10c))
                color = GetSysColor(COLOR_BTNSHADOW)
            else
                h = SelectObject(hdc, *(arg1 + 0x138))
                color = 0
            
            SetTextColor(hdc, color)
            void* eax_14 = *(arg1 + 0xf4)
            void** lpString = eax_14 + 4 + var_14_1
            
            if (lpString[5] u>= 0x10)
                lpString = *lpString
            
            int32_t ecx_10 = *(arg1 + 0xf0)
            TextOutA(hdc, var_20_1 + ecx_10, ecx_10 + ebp_1, lpString, *(var_14_1 + eax_14 + 0x14))
            SelectObject(hdc, h)
            char eax_19 = (*(arg1 + 0x190)).b
            char eax_20 = (*(arg1 + 0x18c)).b
            char eax_21 = (*(arg1 + 0x188)).b
            char* esi_1 = (*(*(arg1 + 0xb4) + 8))(var_20_1, ebp_1)
            (*(*(arg1 + 0xb4) + 0x1c))()
            int32_t i_3 = i_7
            
            if (i_3 s> 0)
                int32_t i
                
                do
                    *esi_1 = eax_21
                    esi_1 = &esi_1[3]
                    esi_1[0xfffffffe] = eax_20
                    esi_1[0xffffffff] = eax_19
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                i_5 = i_6
            
            char eax_24 = (*(arg1 + 0x190)).b
            char eax_25 = (*(arg1 + 0x18c)).b
            char eax_26 = (*(arg1 + 0x188)).b
            void* esi_2 = (*(*(arg1 + 0xb4) + 8))(var_20_1, ebp_1)
            int32_t eax_30 = (*(*(arg1 + 0xb4) + 0x1c))() - 3
            
            if (i_5 s> 0)
                int32_t i_4 = i_5
                int32_t i_1
                
                do
                    *esi_2 = eax_26
                    *(esi_2 + 1) = eax_25
                    *(esi_2 + 2) = eax_24
                    esi_2 = esi_2 + 3 + eax_30
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                i_5 = i_6
            
            int32_t eax_31 = *(arg1 + 0x100)
            void* esi_4
            
            if (eax_31 s< 0 || var_1c_1 != eax_31)
                int32_t eax_33 = ebp_1 - 1 + i_5
                esi_4 = arg1 + 0xb4
                sub_420d50(eax_33, var_20_1, esi_4, eax_33, i_7, 1, (*(arg1 + 0x164)).b, 
                    (*(arg1 + 0x168)).b, (*(arg1 + 0x16c)).b)
            else
                esi_4 = arg1 + 0xb4
            
            int32_t ecx_18 = var_20_1 + i_7
            var_20_1 = ecx_18
            int16_t* esi_5 = (*(*esi_4 + 8))(ecx_18 - 1, ebp_1)
            int32_t eax_38 = (*(*(arg1 + 0xb4) + 0x1c))() - 3
            
            if (i_5 s> 0)
                int32_t i_2
                
                do
                    *esi_5 = 0
                    esi_5[1].b = 0
                    esi_5 = esi_5 + 3 + eax_38
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
            
            esi = arg1 + 0xb4
            var_14_1 += 0x24
            ebx_5 = var_1c_1 + 1
            int32_t eax_39
            int32_t edx_14
            edx_14:eax_39 = muls.dp.d(0x38e38e39, *(arg1 + 0xf8) - *(arg1 + 0xf4))
            var_1c_1 = ebx_5
            int32_t edx_15 = edx_14 s>> 3
            result = (edx_15 u>> 0x1f) + edx_15
            edx_3 = var_14_1
        while (ebx_5 u< result)

return result
