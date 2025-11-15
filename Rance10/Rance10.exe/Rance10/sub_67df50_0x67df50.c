// 函数: sub_67df50
// 地址: 0x67df50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_44
int32_t eax_1 = __security_cookie ^ &var_44
int32_t result = *(arg1 + 0x2c)
HDC result_1 = result

if (result != 0)
    int32_t eax_3 = (*(*(arg1 + 4) + 0x10))()
    int32_t eax_4 = (*(*(arg1 + 4) + 0x14))()
    RECT lprc
    lprc.left = 0
    lprc.top = 0
    lprc.right = eax_3
    lprc.bottom = eax_4
    HDC result_2 = result_1
    FillRect(result_2, &lprc, GetStockObject(WHITE_BRUSH))
    HGDIOBJ h = SelectObject(result_2, *(arg1 + 0x3c))
    int32_t ecx_2 = 0
    int32_t edi_2 = 0
    int32_t eax_8 = (*(arg2 + 8) - *(arg2 + 4)) s>> 2
    int32_t eax_10
    int32_t edx_2
    edx_2:eax_10 = sx.q(*(arg1 + 0x40))
    int32_t var_3c_1 = 0
    int32_t edx_4 = *(arg1 + 0x64) - ((eax_10 - edx_2) s>> 1) * arg3
    int32_t eax_14 = arg5
    int32_t var_34_1 = edx_4
    
    if (eax_14 s> 0)
        int32_t esi_1 = arg4
        
        do
            if (esi_1 s>= 0)
                if (esi_1 s>= eax_8)
                    break
                
                void* const eax_19
                
                if (esi_1 s>= (*(arg2 + 8) - *(arg2 + 4)) s>> 2)
                    eax_19 = nullptr
                else
                    eax_19 = *(*(arg2 + 4) + (esi_1 << 2))
                
                sub_67e0b0(arg1, result_1, edx_4, ecx_2, eax_19 + 4)
                ecx_2 = var_3c_1 + *(arg1 + 0x40)
                eax_14 = arg5
                edx_4 = var_34_1
                var_3c_1 = ecx_2
            
            edi_2 += 1
            esi_1 += 1
        while (edi_2 s< eax_14)
        
        result_2 = result_1
    
    SelectObject(result_2, h)
    RECT lprc_1
    lprc_1.right = *(arg1 + 0x64)
    lprc_1.left = 0
    lprc_1.top = 0
    lprc_1.bottom = eax_4
    result = FillRect(result_2, &lprc_1, GetStockObject(WHITE_BRUSH))

@__security_check_cookie@4(eax_1 ^ &var_44)
return result
