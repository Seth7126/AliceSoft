// 函数: sub_695090
// 地址: 0x695090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
int32_t left = __security_cookie ^ &lpwndpl
int32_t left_3 = left

if (*(arg1 + 0x58) == 0xffffffff && *(arg1 + 0x5c) == 0xffffffff)
    int32_t edx_3 = (*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2
    int32_t esi_1 = 0
    
    if (edx_3 s> 0)
        int32_t* edi_1 = *(arg1 + 0x68)
        int32_t* ecx = edi_1
        
        while (true)
            void* eax_1 = *ecx
            
            if (*(eax_1 + 0x7b) != 0)
                break
            
            esi_1 += 1
            ecx = &ecx[1]
            
            if (esi_1 s>= edx_3)
                sub_69a5bc(left_3 ^ &lpwndpl)
                return eax_1
        
        *(arg1 + 0x58) = esi_1
        int32_t left_1
        int32_t edi_2
        
        if (esi_1 != edx_3 - 1)
            GetWindowPlacement(*(edi_1[esi_1 + 1] + 8), &lpwndpl)
            edi_2 = *(arg1 + 0x28)
            left_1 = lpwndpl.rcNormalPosition.left
        else
            edi_2 = *(arg1 + 0x28)
            left_1 = sub_694800(arg1)
        
        *(arg1 + 4) = left_1 - *(arg1 + 0x24) - edi_2
        WINDOWPLACEMENT lpwndpl_1
        
        if (esi_1 != 0)
            GetWindowPlacement(*(*(*(arg1 + 0x68) + (esi_1 << 2) - 4) + 8), &lpwndpl_1)
            int32_t left_2 = lpwndpl_1.rcNormalPosition.left
            GetWindowPlacement(*(*(*(arg1 + 0x68) + (esi_1 << 2) - 4) + 8), &lpwndpl)
            *(arg1 + 8) = *(arg1 + 0x28) - lpwndpl.rcNormalPosition.left
                + lpwndpl.rcNormalPosition.right + left_2
        else
            *(arg1 + 8) = edi_2
        
        GetWindowPlacement(*(*(*(arg1 + 0x68) + (esi_1 << 2)) + 8), &lpwndpl_1)
        left = lpwndpl_1.rcNormalPosition.left
        *(arg1 + 0x50) = left

sub_69a5bc(left_3 ^ &lpwndpl)
return left
