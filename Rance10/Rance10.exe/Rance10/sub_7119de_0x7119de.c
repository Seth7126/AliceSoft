// 函数: sub_7119de
// 地址: 0x7119de
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_204 = edi

if (arg1 == 0)
label_711a18:
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return nullptr

void* eax_4 = sub_714cce()
int32_t var_208_1 = 0x55
int16_t* var_1d8_1 = eax_4 + 0x172
void* var_20c_1 = eax_4 + 0x2a0
int32_t var_210_1 = arg5
int16_t* var_214_1 = arg4
int32_t var_1f8_1 = 0
uint32_t var_1e8 = 0

if (sub_713d17() == 0)
    if (*arg1 == 0x43 && arg1[1] == 0)
        if (_wcscpy_s(arg2, arg3, 0x755a38) != 0)
            int32_t var_218_3
            __builtin_memset(&var_218_3, 0, 0x14)
            __invoke_watson()
            noreturn
        
        if (arg6 != 0)
            *arg6 = 0
        
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return arg2
    
    int16_t* edi_3 = arg1
    int32_t eax_6
    
    do
        eax_6.w = *edi_3
        edi_3 = &edi_3[1]
    while (eax_6.w != 0)
    int32_t edi_5 = (edi_3 - &edi_3[1]) s>> 1
    
    if (edi_5 u< 0x83)
        int16_t* eax_8 = var_1d8_1
        int16_t* ecx_7 = arg1
        int32_t eax_10
        int16_t edx_1
        
        while (true)
            edx_1 = *eax_8
            int16_t temp0_1 = *ecx_7
            bool c_1 = edx_1 u< temp0_1
            
            if (edx_1 == temp0_1)
                if (edx_1 == 0)
                    eax_10 = 0
                    break
                
                edx_1 = eax_8[1]
                int16_t temp1_1 = ecx_7[1]
                c_1 = edx_1 u< temp1_1
                
                if (edx_1 == temp1_1)
                    eax_8 = &eax_8[2]
                    ecx_7 = &ecx_7[2]
                    
                    if (edx_1 != 0)
                        continue
                    
                    eax_10 = 0
                    break
            
            eax_10 = sbb.d(eax_8, eax_8, c_1) | 1
            break
        
        if (eax_10 == 0)
            goto label_711cd6
        
        int16_t* eax_11 = eax_4 + 0x6c
        int16_t* ecx_8 = arg1
        int32_t eax_13
        
        while (true)
            edx_1 = *eax_11
            int16_t temp2_1 = *ecx_8
            bool c_2 = edx_1 u< temp2_1
            
            if (edx_1 == temp2_1)
                if (edx_1 == 0)
                    eax_13 = 0
                    break
                
                edx_1 = eax_11[1]
                int16_t temp3_1 = ecx_8[1]
                c_2 = edx_1 u< temp3_1
                
                if (edx_1 == temp3_1)
                    eax_11 = &eax_11[2]
                    ecx_8 = &ecx_8[2]
                    
                    if (edx_1 != 0)
                        continue
                    
                    eax_13 = 0
                    break
            
            eax_13 = sbb.d(eax_11, eax_11, c_2) | 1
            break
        
        if (eax_13 == 0)
            goto label_711cd6
        
        goto label_711b5d
    
label_711b5d:
    int32_t ebx_1
    ebx_1.b = ___acrt_can_use_vista_locale_apis() == 0
    void var_1d4
    int32_t* ebx_2
    
    if (___lc_wcstolc(&var_1d4, arg1) != 0)
        ebx_2 = eax_4 + 0x68
    label_711c00:
        
        if (___acrt_IsValidLocaleName@4(arg1) == 0)
            int16_t* ecx_13 = arg4
            BOOL eax_18
            
            do
                eax_18.w = *ecx_13
                ecx_13 = &ecx_13[1]
            while (eax_18.w != 0)
            int32_t var_208_12 = ((ecx_13 - &ecx_13[1]) s>> 1) + 1
            int16_t* var_20c_12 = arg4
            int32_t var_210_11 = 0x55
            void* var_214_8 = eax_4 + 0x2a0
            
            if (sub_713d17() == 0)
                goto label_711a18
            
            int32_t var_218_2
            __builtin_memset(&var_218_2, 0, 0x14)
            __invoke_watson()
            noreturn
        
        int32_t eax_19 = ___acrt_GetLocaleInfoEx@16(arg1, 0x20001004, &var_1e8, 2)
        uint32_t eax_20
        
        if (eax_19 != 0)
            eax_20 = var_1e8
        
        if (eax_19 == 0 || eax_20 == 0)
            eax_20 = GetACP()
            var_1e8 = eax_20
        
        *ebx_2 = zx.d(eax_20.w)
        int32_t var_208_7 = edi_5 + 1
        int16_t* var_20c_7 = arg1
        int32_t var_210_6 = 0x83
        int16_t* var_214_4 = var_1d8_1
        
        if (sub_713d17() == 0)
            int32_t var_208_8 = edi_5 + 1
            int16_t* var_20c_8 = arg1
            int32_t var_210_7 = arg5
            int16_t* var_214_5 = arg4
            
            if (sub_713d17() == 0)
                int32_t var_208_9 = edi_5 + 1
                int16_t* var_20c_9 = arg1
                int32_t var_210_8 = 0x55
                void* var_214_6 = eax_4 + 0x2a0
            label_711c81:
                
                if (sub_713d17() == 0)
                    goto label_711c93
    else
        ebx_2 = eax_4 + 0x68
        void* var_208_3 = &var_1d4
        void* var_210_3 = &var_1d4
        int32_t eax_16
        
        if (ebx_1 == 0)
            eax_16 = sub_71d4e3(var_210_3, ebx_2, var_208_3)
        else
            eax_16 = ___acrt_get_qualified_locale_downlevel(var_210_3, ebx_2, var_208_3)
        
        if (eax_16 == 0)
            goto label_711c00
        
        ___lc_lctowcs(var_1d8_1, 0x83, &var_1d4)
        
        if (arg4 != 0)
            void var_b4
            void* ecx_10 = &var_b4
            int16_t i
            
            do
                i = *ecx_10
                ecx_10 += 2
            while (i != 0)
            void var_b2
            int32_t var_208_5 = ((ecx_10 - &var_b2) s>> 1) + 1
            void* var_20c_5 = &var_b4
            int32_t var_210_5 = arg5
            int16_t* var_214_2 = arg4
            goto label_711c81
        
    label_711c93:
        
        if (*arg1 != 0 && edi_5 u< 0x83)
            int32_t var_208_10 = edi_5 + 1
            int16_t* var_20c_10 = arg1
            int32_t var_210_9 = 0x83
            int16_t* var_214_7 = eax_4 + 0x6c
            
            if (sub_713d17() == 0)
                goto label_711cd6
            
            int32_t var_218_1
            __builtin_memset(&var_218_1, 0, 0x14)
            __invoke_watson()
            noreturn
        
        *(eax_4 + 0x6c) = 0
    label_711cd6:
        
        if (arg6 != 0)
            *arg6 = *(eax_4 + 0x68)
        
        if (_wcscpy_s(arg2, arg3, var_1d8_1) == 0)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return var_1d8_1

int32_t var_218
__builtin_memset(&var_218, 0, 0x14)
__invoke_watson()
noreturn
