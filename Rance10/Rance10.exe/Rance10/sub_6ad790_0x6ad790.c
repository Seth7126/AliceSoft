// 函数: sub_6ad790
// 地址: 0x6ad790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_30c
int32_t eax_1 = __security_cookie ^ &var_30c
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax_2.b & 2) != 0)
    sub_6a7750(arg3, "duplicate")
    noreturn

if ((eax_2.b & 4) != 0)
    sub_6ace40(arg3, arg4)
    int32_t eax_3 = sub_6a77d0(arg3, "out of place")
    @__security_check_cookie@4(eax_1 ^ &var_30c)
    return eax_3

bool cond:0 = (*(arg3 + 0x157) & 2) != 0
*(arg3 + 0x74) = eax_2 | 2

if (not(cond:0))
    sub_6ace40(arg3, arg4)
    int32_t eax_5 = sub_6a77d0(arg3, "ignored in grayscale PNG")
    @__security_check_cookie@4(eax_1 ^ &var_30c)
    return eax_5

if (arg4 u<= 0x300 && arg4 == arg4 u/ 3 * 3)
    void* var_308 = arg4 u% 3
    int32_t ebp_2 = arg4 s/ 3
    
    if (ebp_2 s> 0)
        void var_302
        void* edi_1 = &var_302
        void* ecx_10
        
        do
            int32_t eax_9 = *(arg3 + 0x5c)
            
            if (eax_9 == 0)
                sub_6a7500(arg3, "Call to NULL read function")
                noreturn
            
            sub_6a4030(eax_9(arg3, &var_30c, 3), &var_30c, arg3, 3)
            *(edi_1 - 2) = var_30c
            ecx_10 = var_308 + 1
            char var_30b
            *(edi_1 - 1) = var_30b
            char var_30a
            *edi_1 = var_30a
            edi_1 += 3
            var_308 = ecx_10
        while (ecx_10 s< ebp_2)
    
    sub_6ace40(arg3, nullptr)
    char var_304
    int32_t eax_15 = sub_6b1ef0(&var_304, arg2, arg3, &var_304, ebp_2)
    
    if (*(arg3 + 0x150) u> 0)
    label_6ad8f0:
        *(arg3 + 0x150) = 0
        
        if (arg2 != 0)
            *(arg2 + 0x16) = 0
        
        eax_15 = sub_6a77d0(arg3, "tRNS must be after")
        goto label_6ad90b
    
    if (arg2 != 0)
        if ((*(arg2 + 8) & 0x10) != 0)
            goto label_6ad8f0
        
    label_6ad90b:
        
        if (arg2 != 0)
            char ebx_1 = (*(arg2 + 8)).b
            
            if ((ebx_1 & 0x40) != 0)
                eax_15 = sub_6a77d0(arg3, "hIST must be after")
            
            if ((ebx_1 & 0x20) != 0)
                eax_15 = sub_6a77d0(arg3, "bKGD must be after")
    
    @__security_check_cookie@4(eax_1 ^ &var_30c)
    return eax_15

sub_6ace40(arg3, arg4)

if (*(arg3 + 0x157) == 3)
    sub_6a7750(arg3, "invalid")
    noreturn

int32_t eax_16 = sub_6a77d0(arg3, "invalid")
@__security_check_cookie@4(eax_1 ^ &var_30c)
return eax_16
