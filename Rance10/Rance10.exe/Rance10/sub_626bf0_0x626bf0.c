// 函数: sub_626bf0
// 地址: 0x626bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_24
int32_t eax_1 = __security_cookie ^ &var_24

if (sub_62ab60(arg2, 3) != 0 && sub_62ab60(arg2, *(arg1 + 0x1c)) != 0
        && sub_62ab60(arg2, *(arg1 + 0x34)) != 0 && sub_62ab60(arg2, *(arg1 + 0x2c)) != 0)
    char* eax_4 = (*(*(arg1 + 0x20) + 4))()
    char* var_34_4
    
    var_34_4 = eax_4 == 0 ? &data_75d64f : eax_4
    
    sub_403360(&var_24, var_34_4)
    int32_t* ecx_6 = &var_24
    int32_t var_10
    
    if (var_10 u>= 0x10)
        ecx_6 = var_24
    
    void* var_14
    int32_t ebx
    ebx.b = sub_62ab00(arg2, ecx_6, var_14 + 1) == 0
    sub_403320(&var_24)
    
    if (ebx.b == 0)
        int32_t eax_8
        eax_8.b = *(arg1 + 0x38) != 0
        
        if (sub_62ab60(arg2, eax_8) != 0)
            char eax_2 = sub_62ab60(arg2, *(arg1 + 0x14))
            
            if (eax_2 != 0)
                void* ecx_13 = *(arg1 + 0x14)
                
                if (ecx_13 != 0)
                    eax_2 = sub_62ab00(arg2, *(arg1 + 0x10), ecx_13)
                
                if (ecx_13 == 0 || eax_2 != 0)
                    @__security_check_cookie@4(eax_1 ^ &var_24)
                    return 1

@__security_check_cookie@4(eax_1 ^ &var_24)
return 0
