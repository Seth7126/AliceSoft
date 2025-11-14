// 函数: sub_694630
// 地址: 0x694630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_40
int32_t eax_1 = __security_cookie ^ &var_40
int32_t* result
int32_t edx
edx:result = muls.dp.d(0x2aaaaaab, *(arg1 + 0x84) - *(arg1 + 0x80))
int32_t edx_1 = edx s>> 1
uint32_t ebp_1 = edx_1 u>> 0x1f
int32_t ebp_2 = ebp_1 + edx_1

if (ebp_1 != neg.d(edx_1))
    int32_t** ecx_2 = *(arg1 + 0x80)
    int32_t eax_4 = ebp_2 * 0xc
    void* edx_2 = &ecx_2[ebp_2 * 3]
    result = *(edx_2 - 8) - *(edx_2 - 0xc)
    
    if ((result & 0xfffffffc) != 0)
        result = *(edx_2 - 0xc)
        void* esi_1 = *result
        
        if (esi_1 != 0)
            int32_t eax_8 = (ecx_2[1] - *ecx_2) s>> 2
            result = *ecx_2
            var_40 = eax_8 << 2
            
            if (result[eax_8 - 1] != 0)
                WINDOWPLACEMENT lpwndpl
                GetWindowPlacement(*(esi_1 + 8), &lpwndpl)
                int32_t var_3c_1 = lpwndpl.rcNormalPosition.right - lpwndpl.rcNormalPosition.left
                    + arg2 - sub_694800(arg1)
                GetWindowPlacement(*(**(eax_4 + *(arg1 + 0x80) - 0xc) + 8), &lpwndpl)
                
                if (*(arg1 + 0x28) + lpwndpl.rcNormalPosition.left u> arg2)
                    GetWindowPlacement(*(**(eax_4 + *(arg1 + 0x80) - 0xc) + 8), &lpwndpl)
                    var_3c_1 = *(arg1 + 0x28) + lpwndpl.rcNormalPosition.left
                
                GetWindowPlacement(*(*(**(arg1 + 0x80) + var_40 - 4) + 8), &lpwndpl)
                int32_t esi_8 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
                    + arg3 - sub_6948f0(arg1)
                GetWindowPlacement(*(*(**(arg1 + 0x80) + var_40 - 4) + 8), &lpwndpl)
                
                if (*(arg1 + 0x2c) + lpwndpl.rcNormalPosition.top u> arg3)
                    GetWindowPlacement(*(*(**(arg1 + 0x80) + var_40 - 4) + 8), &lpwndpl)
                    esi_8 = *(arg1 + 0x2c) + lpwndpl.rcNormalPosition.top
                
                sub_6944b0(arg1, ebp_2 - 1, var_3c_1)
                sub_694570(arg1, eax_8 - 1, esi_8)
                result = sub_6949d0(arg1)

sub_69a5bc(eax_1 ^ &var_40)
return result
