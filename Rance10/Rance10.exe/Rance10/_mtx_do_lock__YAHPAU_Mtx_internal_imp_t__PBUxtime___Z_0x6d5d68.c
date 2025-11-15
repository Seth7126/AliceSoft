// 函数: ?mtx_do_lock@@YAHPAU_Mtx_internal_imp_t@@PBUxtime@@@Z
// 地址: 0x6d5d68
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = arg2
int32_t* var_1c = esi
int32_t result

if ((*arg1 & 0xfffffeff) != 1)
    if (esi == 0)
        uint32_t eax_7 = GetCurrentThreadId()
        
        if (arg1[0xa] != eax_7)
            int32_t esi_2 = *arg1[1]
            j_sub_4033e0()
            esi_2()
        
        goto label_6d5e9f
    
    int32_t temp0_1 = esi[1]
    int32_t eax_9 = *esi
    int32_t eax_10
    
    if (temp0_1 s>= 0 && (temp0_1 s> 0 || eax_9 u>= 0))
        eax_10 = eax_9 | esi[1]
    
    if (temp0_1 s>= 0 && (temp0_1 s> 0 || eax_9 u>= 0) && (eax_10 != 0 || esi[2] s> eax_10))
        int32_t var_18
        _xtime_get(&var_18, 1)
        
        while (true)
            int32_t eax_11 = *esi
            int32_t temp1_1 = esi[1]
            int32_t var_14
            
            if (var_14 s>= temp1_1 && (var_14 s> temp1_1 || var_18 u>= eax_11))
                if (var_18 != eax_11)
                    break
                
                if (var_14 != esi[1])
                    break
                
                int32_t var_10
                
                if (var_10 s>= esi[2])
                    break
            
            uint32_t eax_13 = GetCurrentThreadId()
            
            if (arg1[0xa] == eax_13)
                goto label_6d5e9f
            
            void* esi_3 = arg1[1]
            int32_t eax_14 = __Xtime_diff_to_millis2(var_1c, &var_18)
            int32_t esi_4 = *(esi_3 + 8)
            j_sub_4033e0()
            
            if (esi_4(eax_14) != 0)
                goto label_6d5e9f
            
            _xtime_get(&var_18, 1)
            esi = var_1c
        
        goto label_6d5ebb
    
    uint32_t eax_16 = GetCurrentThreadId()
    
    if (arg1[0xa] != eax_16)
        int32_t esi_5 = *(arg1[1] + 4)
        j_sub_4033e0()
        
        if (esi_5() == 0)
            goto label_6d5ebb
        
        goto label_6d5e9f
    
label_6d5e9f:
    arg1[0xb] += 1
    int32_t eax_19 = arg1[0xb]
    
    if (eax_19 s<= 1)
        arg1[0xa] = GetCurrentThreadId()
        result = 0
    else if ((*arg1 & 0x100) != 0)
        result = 0
    else
        arg1[0xb] = eax_19 - 1
    label_6d5ebb:
        int32_t eax_22
        
        if (var_1c != 0)
            eax_22 = *var_1c | var_1c[1]
        
        int32_t result_1
        
        if (var_1c != 0 && (eax_22 != 0 || var_1c[2] != eax_22))
            result_1 = 2
        else
            result_1 = 3
        
        result = result_1
else
    uint32_t eax_4 = GetCurrentThreadId()
    
    if (arg1[0xa] != eax_4)
        int32_t esi_1 = *arg1[1]
        j_sub_4033e0()
        esi_1()
        arg1[0xa] = GetCurrentThreadId()
    
    arg1[0xb] += 1
    result = 0

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
