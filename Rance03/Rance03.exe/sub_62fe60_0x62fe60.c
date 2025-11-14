// 函数: sub_62fe60
// 地址: 0x62fe60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_dc[0xd8]
int32_t eax_1 = __security_cookie ^ &var_dc
int32_t result = *(arg3 + 0x2b8)

if (result == 0)
label_62febf:
    
    if (arg2 - 1 u> 0xfffffffe)
        result = 0
    label_62ff14:
        
        if (arg4 s< 2)
            if (arg4 == 0)
                sub_62a740(arg3, "insufficient memory to read chunk")
                noreturn
            
            sub_62a640(arg4, &var_dc, arg3, "insufficient memory to read chunk")
            sub_62a550(arg3, &var_dc)
    else
        int32_t eax_4 = *(arg3 + 0x274)
        int32_t result_1
        
        if (eax_4 == 0)
            result_1 = _malloc(arg2)
        else
            result_1 = eax_4(arg3, arg2)
        
        result = result_1
        
        if (result == 0)
            goto label_62ff14
        
        *(arg3 + 0x2b8) = result
        *(arg3 + 0x2bc) = arg2
else if (arg2 u> *(arg3 + 0x2bc))
    int32_t eax_2 = *(arg3 + 0x278)
    *(arg3 + 0x2b8) = 0
    *(arg3 + 0x2bc) = 0
    
    if (eax_2 == 0)
        _free(result)
    else
        eax_2(arg3, result)
    
    goto label_62febf

sub_69a5bc(eax_1 ^ &var_dc)
return result
