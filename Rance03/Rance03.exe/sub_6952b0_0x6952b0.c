// 函数: sub_6952b0
// 地址: 0x6952b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_6c
int32_t top = __security_cookie ^ &var_6c
int32_t top_5 = top

if (*(arg1 + 0x58) == 0xffffffff && *(arg1 + 0x5c) == 0xffffffff)
    int32_t ecx_1 = *(arg1 + 0x90) - *(arg1 + 0x8c)
    int32_t eax_3 = (*(arg1 + 0x6c) - *(arg1 + 0x68)) s>> 2
    var_6c = (*(arg1 + 0x78) - *(arg1 + 0x74)) s>> 2
    int32_t ebp_1 = 0
    top = ecx_1 s/ 0xc
    int32_t top_4 = top
    
    if (top s> 0)
        int32_t top_6 = top_4
        int32_t esi_1 = *(arg1 + 0x8c)
        int32_t* edi_1 = nullptr
        top = esi_1 + 4
        int32_t top_3 = top
        
        while (true)
            int32_t esi_2 = 0
            int32_t edx_5 = (*top - *(edi_1 + esi_1)) s>> 2
            
            if (edx_5 s> 0)
                int32_t* ecx_3 = *(edi_1 + *(arg1 + 0x8c))
                
                while (*(*ecx_3 + 0x7b) == 0)
                    esi_2 += 1
                    ecx_3 = &ecx_3[1]
                    
                    if (esi_2 s>= edx_5)
                        top = top_3
                        top_6 = top_4
                        goto label_69535f
                
                int32_t eax_12 = var_6c - 1
                *(arg1 + 0x58) = ebp_1
                *(arg1 + 0x5c) = esi_2
                WINDOWPLACEMENT lpwndpl_1
                int32_t top_1
                int32_t ecx_5
                
                if (esi_2 != eax_12)
                    GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_2 << 2) + 4) + 8), &lpwndpl_1)
                    ecx_5 = *(arg1 + 0x2c)
                    top_1 = lpwndpl_1.rcNormalPosition.top
                else
                    var_6c = *(arg1 + 0x2c)
                    top_1 = sub_6948f0(arg1)
                    ecx_5 = var_6c
                
                *(arg1 + 0xc) = top_1 - ecx_5 - *(arg1 + 0x24)
                WINDOWPLACEMENT lpwndpl
                
                if (esi_2 != 0)
                    GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_2 << 2) - 4) + 8), &lpwndpl)
                    int32_t top_2 = lpwndpl.rcNormalPosition.top
                    GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_2 << 2) - 4) + 8), &lpwndpl_1)
                    *(arg1 + 0x10) = lpwndpl_1.rcNormalPosition.bottom
                        - lpwndpl_1.rcNormalPosition.top + top_2 + *(arg1 + 0x2c)
                else
                    *(arg1 + 0x10) = ecx_5
                
                int32_t left
                int32_t ecx_7
                
                if (ebp_1 != eax_3 - 1)
                    GetWindowPlacement(*(*(*(arg1 + 0x68) + (ebp_1 << 2) + 4) + 8), &lpwndpl)
                    ecx_7 = *(arg1 + 0x28)
                    left = lpwndpl.rcNormalPosition.left
                else
                    int32_t eax_28 = *(arg1 + 0x28)
                    left = sub_694800(arg1)
                    ecx_7 = eax_28
                
                *(arg1 + 4) = left - ecx_7 - *(arg1 + 0x24)
                
                if (ebp_1 != 0)
                    GetWindowPlacement(*(*(*(arg1 + 0x68) + (ebp_1 << 2) - 4) + 8), &lpwndpl)
                    int32_t left_1 = lpwndpl.rcNormalPosition.left
                    GetWindowPlacement(*(*(*(arg1 + 0x68) + (ebp_1 << 2) - 4) + 8), &lpwndpl_1)
                    *(arg1 + 8) = lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left
                        + left_1 + *(arg1 + 0x28)
                else
                    *(arg1 + 8) = ecx_7
                
                GetWindowPlacement(*(*(*(arg1 + 0x68) + (ebp_1 << 2)) + 8), &lpwndpl)
                *(arg1 + 0x50) = lpwndpl.rcNormalPosition.left
                GetWindowPlacement(*(*(*(arg1 + 0x74) + (esi_2 << 2)) + 8), &lpwndpl)
                top = lpwndpl.rcNormalPosition.top
                *(arg1 + 0x54) = top
                break
            
        label_69535f:
            ebp_1 += 1
            top += 0xc
            edi_1 = &edi_1[3]
            top_3 = top
            
            if (ebp_1 s>= top_6)
                break
            
            esi_1 = *(arg1 + 0x8c)

sub_69a5bc(top_5 ^ &var_6c)
return top
