// 函数: sub_67f490
// 地址: 0x67f490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_64
int32_t top = __security_cookie ^ &var_64
int32_t top_3 = top

if (*(arg1 + 0x58) == 0xffffffff && *(arg1 + 0x5c) == 0xffffffff)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x90) - *(arg1 + 0x8c))
    int32_t edx_2 = edx_1 s>> 1
    int32_t ebp_1 = 0
    uint32_t eax_3 = edx_2 u>> 0x1f
    top = eax_3 + edx_2
    
    if (eax_3 != neg.d(edx_2))
        int32_t* edi_1 = nullptr
        int32_t* eax_5 = *(arg1 + 0x8c) + 4
        var_64 = eax_5
        int32_t top_4
        int32_t edx_5
        int32_t esi_1
        
        while (true)
            esi_1 = 0
            top_4 = top
            edx_5 = (*eax_5 - *(edi_1 + *(arg1 + 0x8c))) s>> 2
            
            if (edx_5 != 0)
                break
            
        label_67f529:
            ebp_1 += 1
            eax_5 = &eax_5[3]
            edi_1 = &edi_1[3]
            var_64 = eax_5
            
            if (ebp_1 u>= top_4)
                sub_69a5bc(top_3 ^ &var_64)
                return eax_5
        
        int32_t* ecx_3 = *(edi_1 + *(arg1 + 0x8c))
        
        while (*(*ecx_3 + 0x7b) == 0)
            esi_1 += 1
            ecx_3 = &ecx_3[1]
            
            if (esi_1 u>= edx_5)
                eax_5 = var_64
                top_4 = top
                goto label_67f529
        
        *(arg1 + 0x58) = ebp_1
        *(arg1 + 0x5c) = esi_1
        WINDOWPLACEMENT lpwndpl_1
        int32_t top_1
        int32_t edi_2
        
        if (esi_1 != ((*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2) - 1)
            GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_1 << 2) + 4) + 8), &lpwndpl_1)
            edi_2 = *(arg1 + 0x2c)
            top_1 = lpwndpl_1.rcNormalPosition.top
        else
            edi_2 = *(arg1 + 0x2c)
            top_1 = sub_67eab0(arg1)
        
        *(arg1 + 0xc) = top_1 - edi_2 - *(arg1 + 0x24)
        WINDOWPLACEMENT lpwndpl
        
        if (esi_1 != 0)
            GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_1 << 2) - 4) + 8), &lpwndpl)
            int32_t top_2 = lpwndpl.rcNormalPosition.top
            GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_1 << 2) - 4) + 8), &lpwndpl_1)
            *(arg1 + 0x10) = lpwndpl_1.rcNormalPosition.bottom - lpwndpl_1.rcNormalPosition.top
                + top_2 + *(arg1 + 0x2c)
        else
            *(arg1 + 0x10) = edi_2
        
        int32_t left
        int32_t* ecx_8
        
        if (ebp_1 != ((*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2) - 1)
            GetWindowPlacement(*(*(*(arg1 + 0x68) + (ebp_1 << 2) + 4) + 8), &lpwndpl)
            ecx_8 = *(arg1 + 0x28)
            left = lpwndpl.rcNormalPosition.left
        else
            var_64 = *(arg1 + 0x28)
            left = sub_67e980(arg1)
            ecx_8 = var_64
        
        *(arg1 + 4) = left - ecx_8 - *(arg1 + 0x24)
        
        if (ebp_1 != 0)
            GetWindowPlacement(*(*(*(arg1 + 0x68) + (ebp_1 << 2) - 4) + 8), &lpwndpl)
            int32_t left_1 = lpwndpl.rcNormalPosition.left
            GetWindowPlacement(*(*(*(arg1 + 0x68) + (ebp_1 << 2) - 4) + 8), &lpwndpl_1)
            *(arg1 + 8) = lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left
                + left_1 + *(arg1 + 0x28)
        else
            *(arg1 + 8) = ecx_8
        
        GetWindowPlacement(*(*(*(arg1 + 0x68) + (ebp_1 << 2)) + 8), &lpwndpl)
        *(arg1 + 0x50) = lpwndpl.rcNormalPosition.left
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_1 << 2)) + 8), &lpwndpl)
        top = lpwndpl.rcNormalPosition.top
        *(arg1 + 0x54) = top

sub_69a5bc(top_3 ^ &var_64)
return top
