// 函数: ?store_winword@@YA_NQAU__crt_locale_pointers@@HQBUtm@@QAPA_WQAIQBU__crt_lc_time_data@@@Z
// 地址: 0x70f5b2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_40 = edi
PWSTR edi_1

if (arg2 == 0)
    edi_1 = *(arg6 + 0x154)
else if (arg2 == 1)
    edi_1 = *(arg6 + 0x158)
else
    edi_1 = *(arg6 + 0x15c)

if (*(arg6 + 0xac) == 1)
    goto label_70f9fe

bool cond:0_1 = arg2 == 2
SYSTEMTIME var_18
var_18.wYear = 0x76c + arg3[0xa]
var_18.wMonth = arg3[8] + 1
var_18.wDay = arg3[6]
var_18.wHour = arg3[4]
var_18.wMinute = arg3[2]
var_18.wSecond = *arg3
var_18.wMilliseconds = 0
int16_t* result

if (cond:0_1 == 0)
    result = ___acrt_GetDateFormatEx@28(*(arg6 + 0x160), 0, &var_18, edi_1, nullptr, 0, 0)
else
    result = ___acrt_GetTimeFormatEx@24(*(arg6 + 0x160), 0, &var_18, edi_1, nullptr, 0)

if (result == 0)
    goto label_70f9fe

int32_t edx_1 = result * 2
int32_t eax_6 = sbb.d(result, result, edx_1 u< edx_1 + 8)
void* esi_2

if (((edx_1 + 8) & eax_6) == 0)
    esi_2 = nullptr
else
    int32_t eax_8 = sbb.d(eax_6, eax_6, edx_1 u< edx_1 + 8) & (edx_1 + 8)
    int32_t* esi_1
    
    if (eax_8 u> 0x400)
        esi_1 = __malloc_base(sbb.d(eax_8, eax_8, edx_1 u< edx_1 + 8) & (edx_1 + 8))
        int32_t* var_1c_2 = esi_1
        
        if (esi_1 == 0)
            goto label_70f782
        
        *esi_1 = 0xdddd
    else
        __alloca_probe_16(sbb.d(eax_8, eax_8, edx_1 u< edx_1 + 8) & (edx_1 + 8))
        esi_1 = &var_40
        int32_t* var_1c_1 = &var_40
        
        if (&var_40 == 0)
            goto label_70f782
        
        var_40 = 0xcccc
    
    esi_2 = &esi_1[2]

if (esi_2 == 0)
label_70f782:
    __freea_crt(nullptr)
label_70f9fe:
    
    while (true)
        uint32_t edx_4 = zx.d(*edi_1)
        
        if (edx_4.w == 0)
            goto label_70f76a
        
        if (*arg5 == 0)
            goto label_70f76a
        
        int32_t* var_20
        var_20.b = 0
        int32_t ecx_10 = 0
        PWSTR var_1c_4 = edi_1
        PWSTR ebx_3 = edi_1
        
        do
            ebx_3 = &ebx_3[1]
            ecx_10 += 1
        while (*ebx_3 == edx_4.w)
        
        uint32_t eax_18 = zx.d(edx_4.w)
        void* var_1c_5 = ebx_3
        int32_t var_44_4
        void* ecx_12
        
        if (eax_18 s> 0x64)
            if (eax_18 == 0x68)
                ecx_12 = ecx_10 - 1
                
                if (ecx_10 == 1)
                    var_20.b = 1
                label_70f9dd:
                    var_44_4 = 0x49
                label_70f9ef:
                    
                    if (expand_time(var_44_4, edx_4, ecx_12, arg1, var_44_4.w, arg3, arg4, arg5, 
                            arg6, var_20.b).b != 0)
                        edi_1 = var_1c_5
                        continue
                    
                    *__errno() = 0x16
                    result.b = 0
                    break
                else
                    void* temp6_1 = ecx_12
                    ecx_12 -= 1
                    
                    if (temp6_1 == 1)
                        goto label_70f9dd
            else if (eax_18 == 0x6d)
                ecx_12 = ecx_10 - 1
                
                if (ecx_10 == 1)
                    var_20.b = 1
                label_70f9b9:
                    var_44_4 = 0x4d
                    goto label_70f9ef
                
                void* temp10_1 = ecx_12
                ecx_12 -= 1
                
                if (temp10_1 == 1)
                    goto label_70f9b9
            else if (eax_18 == 0x73)
                ecx_12 = ecx_10 - 1
                
                if (ecx_10 == 1)
                    var_20.b = 1
                label_70f9a5:
                    var_44_4 = 0x53
                    goto label_70f9ef
                
                void* temp15_1 = ecx_12
                ecx_12 -= 1
                
                if (temp15_1 == 1)
                    goto label_70f9a5
            else if (eax_18 == 0x74)
                int16_t* edx_6
                
                if (*(arg3 + 8) s> 0xb)
                    edx_6 = *(arg6 + 0x150)
                else
                    edx_6 = *(arg6 + 0x14c)
                
                if (ecx_10 != 1 || *arg5 u<= 0)
                    int16_t ecx_17 = *edx_6
                    
                    if (ecx_17 != 0)
                        while (*arg5 u> 0)
                            edx_6 = &edx_6[1]
                            **arg4 = ecx_17
                            *arg4 += 2
                            *arg5 -= 1
                            ecx_17 = *edx_6
                            
                            if (ecx_17 == 0)
                                break
                else
                    int16_t** edi_4 = arg4
                    result.w = *edx_6
                    **edi_4 = result.w
                    *edi_4 = &(*edi_4)[1]
                    *arg5 -= 1
                
                edi_1 = var_1c_5
                continue
            else if (eax_18 == 0x79)
                ecx_12 = ecx_10 - 2
                
                if (ecx_10 == 2)
                    var_44_4 = 0x79
                    goto label_70f9ef
                
                void* ecx_15 = ecx_12 - 1
                ecx_12 = ecx_15 - 1
                
                if (ecx_15 == 1)
                    var_44_4 = 0x59
                    goto label_70f9ef
        else if (eax_18 == 0x64)
            ecx_12 = ecx_10 - 1
            
            if (ecx_10 == 1)
                var_20.b = 1
            label_70f8e6:
                var_44_4 = 0x64
                goto label_70f9ef
            
            void* temp9_1 = ecx_12
            ecx_12 -= 1
            
            if (temp9_1 == 1)
                goto label_70f8e6
            
            void* temp13_1 = ecx_12
            ecx_12 -= 1
            
            if (temp13_1 == 1)
                var_44_4 = 0x61
                goto label_70f9ef
            
            void* temp17_1 = ecx_12
            ecx_12 -= 1
            
            if (temp17_1 == 1)
                var_44_4 = 0x41
                goto label_70f9ef
        else if (eax_18 == 0x27)
            result = ecx_10 & 0x80000001
            bool cond:3_1 = result != 0
            
            if (result s< 0)
                cond:3_1 = ((result - 1) | 0xfffffffe) != 0xffffffff
            
            edi_1 = &edi_1[ecx_10]
            
            if (cond:3_1)
                continue
            else
                int16_t ecx_13 = *edi_1
                
                if (ecx_13 == 0)
                    goto label_70f76a
                
                while (*arg5 != 0)
                    edi_1 = &edi_1[1]
                    
                    if (ecx_13 == 0x27)
                        break
                    
                    **arg4 = ecx_13
                    *arg4 += 2
                    *arg5 -= 1
                    ecx_13 = *edi_1
                    
                    if (ecx_13 == 0)
                        break
                
                continue
        else
            if (eax_18 == 0x41)
            label_70f7eb:
                uint32_t eax_19
                eax_19, edx_4 = __wcsicmp(edi_1, u"am/pm")
                
                if (eax_19 != 0)
                    uint32_t eax_20
                    eax_20, edx_4 = __wcsicmp(edi_1, &data_7557a4)
                    ecx_12 = &data_7557a4
                    
                    if (eax_20 == 0)
                        var_1c_5 = &edi_1[3]
                else
                    ecx_12 = &edi_1[5]
                    var_1c_5 = ecx_12
                
                var_44_4 = 0x70
                goto label_70f9ef
            
            if (eax_18 == 0x48)
                ecx_12 = ecx_10 - 1
                
                if (ecx_10 == 1)
                    var_20.b = 1
                label_70f842:
                    var_44_4 = 0x48
                    goto label_70f9ef
                
                void* temp20_1 = ecx_12
                ecx_12 -= 1
                
                if (temp20_1 == 1)
                    goto label_70f842
            else if (eax_18 == 0x4d)
                ecx_12 = ecx_10 - 1
                
                if (ecx_10 == 1)
                    var_20.b = 1
                label_70f828:
                    var_44_4 = 0x6d
                    goto label_70f9ef
                
                void* temp23_1 = ecx_12
                ecx_12 -= 1
                
                if (temp23_1 == 1)
                    goto label_70f828
                
                void* temp24_1 = ecx_12
                ecx_12 -= 1
                
                if (temp24_1 == 1)
                    var_44_4 = 0x62
                    goto label_70f9ef
                
                void* temp25_1 = ecx_12
                ecx_12 -= 1
                
                if (temp25_1 == 1)
                    var_44_4 = 0x42
                    goto label_70f9ef
            else if (eax_18 == 0x61)
                goto label_70f7eb
        edi_1 = &edi_1[1]
        **arg4 = edx_4.w
        *arg4 += 2
        *arg5 -= 1
else
    int32_t eax_15
    
    if (cond:0_1 == 0)
        eax_15 = ___acrt_GetDateFormatEx@28(*(arg6 + 0x160), 0, &var_18, edi_1, esi_2, result, 0)
    else
        eax_15 = ___acrt_GetTimeFormatEx@24(*(arg6 + 0x160), 0, &var_18, edi_1, esi_2, result)
    
    void* edi_2 = esi_2
    int32_t edx_3 = eax_15 - 1
    
    if (edx_3 s> 0)
        int32_t* ebx_2 = arg5
        
        while (*ebx_2 u> 0)
            eax_15.w = *edi_2
            edi_2 += 2
            **arg4 = eax_15.w
            *arg4 += 2
            *ebx_2 -= 1
            edx_3 -= 1
            
            if (edx_3 s<= 0)
                break
    
    __freea_crt(esi_2)
label_70f76a:
    result.b = 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
