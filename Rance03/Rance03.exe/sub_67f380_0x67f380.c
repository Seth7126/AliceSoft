// 函数: sub_67f380
// 地址: 0x67f380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
int32_t top = __security_cookie ^ &lpwndpl
int32_t top_3 = top

if (*(arg1 + 0x58) == 0xffffffff && *(arg1 + 0x5c) == 0xffffffff)
    int32_t edx_3 = (*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2
    int32_t ebx_1 = 0
    
    if (edx_3 != 0)
        int32_t* edi_1 = *(arg1 + 0x74)
        int32_t* ecx = edi_1
        
        while (true)
            void* eax_1 = *ecx
            
            if (*(eax_1 + 0x7b) != 0)
                break
            
            ebx_1 += 1
            ecx = &ecx[1]
            
            if (ebx_1 u>= edx_3)
                sub_69a5bc(top_3 ^ &lpwndpl)
                return eax_1
        
        *(arg1 + 0x5c) = ebx_1
        int32_t top_1
        int32_t edi_2
        
        if (ebx_1 != ((*(arg1 + 0x78) - edi_1) s>> 2) - 1)
            GetWindowPlacement(*(edi_1[ebx_1 + 1] + 8), &lpwndpl)
            edi_2 = *(arg1 + 0x2c)
            top_1 = lpwndpl.rcNormalPosition.top
        else
            edi_2 = *(arg1 + 0x2c)
            top_1 = sub_67eab0(arg1)
        
        *(arg1 + 0xc) = top_1 - *(arg1 + 0x24) - edi_2
        WINDOWPLACEMENT lpwndpl_1
        
        if (ebx_1 != 0)
            GetWindowPlacement(*(*(*(arg1 + 0x74) + (ebx_1 << 2) - 4) + 8), &lpwndpl_1)
            int32_t top_2 = lpwndpl_1.rcNormalPosition.top
            GetWindowPlacement(*(*(*(arg1 + 0x74) + (ebx_1 << 2) - 4) + 8), &lpwndpl)
            *(arg1 + 0x10) = *(arg1 + 0x2c) - lpwndpl.rcNormalPosition.top
                + lpwndpl.rcNormalPosition.bottom + top_2
        else
            *(arg1 + 0x10) = edi_2
        
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (ebx_1 << 2)) + 8), &lpwndpl_1)
        top = lpwndpl_1.rcNormalPosition.top
        *(arg1 + 0x54) = top

sub_69a5bc(top_3 ^ &lpwndpl)
return top
