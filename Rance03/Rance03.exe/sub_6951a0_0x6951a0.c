// 函数: sub_6951a0
// 地址: 0x6951a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

WINDOWPLACEMENT lpwndpl
int32_t top = __security_cookie ^ &lpwndpl
int32_t top_3 = top

if (*(arg1 + 0x58) == 0xffffffff && *(arg1 + 0x5c) == 0xffffffff)
    int32_t edx_3 = (*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2
    int32_t esi_1 = 0
    
    if (edx_3 s> 0)
        int32_t* edi_1 = *(arg1 + 0x74)
        int32_t* ecx = edi_1
        
        while (true)
            void* eax_1 = *ecx
            
            if (*(eax_1 + 0x7b) != 0)
                break
            
            esi_1 += 1
            ecx = &ecx[1]
            
            if (esi_1 s>= edx_3)
                sub_69a5bc(top_3 ^ &lpwndpl)
                return eax_1
        
        *(arg1 + 0x5c) = esi_1
        int32_t top_1
        int32_t edi_2
        
        if (esi_1 != edx_3 - 1)
            GetWindowPlacement(*(edi_1[esi_1 + 1] + 8), &lpwndpl)
            edi_2 = *(arg1 + 0x2c)
            top_1 = lpwndpl.rcNormalPosition.top
        else
            edi_2 = *(arg1 + 0x2c)
            top_1 = sub_6948f0(arg1)
        
        *(arg1 + 0xc) = top_1 - *(arg1 + 0x24) - edi_2
        WINDOWPLACEMENT lpwndpl_1
        
        if (esi_1 != 0)
            GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_1 << 2) - 4) + 8), &lpwndpl_1)
            int32_t top_2 = lpwndpl_1.rcNormalPosition.top
            GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_1 << 2) - 4) + 8), &lpwndpl)
            *(arg1 + 0x10) = *(arg1 + 0x2c) - lpwndpl.rcNormalPosition.top
                + lpwndpl.rcNormalPosition.bottom + top_2
        else
            *(arg1 + 0x10) = edi_2
        
        GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_1 << 2)) + 8), &lpwndpl_1)
        top = lpwndpl_1.rcNormalPosition.top
        *(arg1 + 0x54) = top

sub_69a5bc(top_3 ^ &lpwndpl)
return top
