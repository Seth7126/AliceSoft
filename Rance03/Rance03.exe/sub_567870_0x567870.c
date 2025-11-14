// 函数: sub_567870
// 地址: 0x567870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5748
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ecx = arg2
int32_t result

if ((arg3[1] - *arg3) s/ 0x1c s> 0)
    if (ecx[5] u>= 0x10)
        ecx = *ecx
    
    void** var_68_1 = ecx
    int32_t* var_40
    void** ecx_1 = sub_4691f0(&var_40, "\t%s =\r\n")
    int32_t var_4 = 0
    int32_t eax_10 = ecx_1[5]
    int32_t ebx_1 = ecx_1[4]
    void** edx_3
    
    if (eax_10 u< 0x10)
        edx_3 = ecx_1
    else
        edx_3 = *ecx_1
    
    if (eax_10 u>= 0x10)
        ecx_1 = *ecx_1
    
    void* esi_2 = arg1
    int32_t* ebp_1 = esi_2 + 4
    int32_t* var_4c_1 = ebp_1
    int32_t* var_68_2 = var_4c_1
    sub_468ff0(ebp_1, *(esi_2 + 8), ecx_1, edx_3 + ebx_1)
    int32_t var_4_1 = 0xffffffff
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40)
    
    int32_t ecx_4 = arg3[1] - *arg3
    int32_t i = 0
    
    if (ecx_4 s/ 0x1c s> 0)
        int32_t ebp_2 = 0
        
        do
            int32_t var_68_4 = ecx_4
            
            if (sub_568630(esi_2, *arg3 + ebp_2).b == 0)
                result.b = 0
                goto label_567abe
            
            int32_t ecx_6 = arg3[1] - *arg3
            int32_t eax_18
            int32_t edx_7
            edx_7:eax_18 = muls.dp.d(0x92492493, ecx_6)
            int32_t edx_9 = (edx_7 + ecx_6) s>> 4
            
            if (i s< (edx_9 u>> 0x1f) - 1 + edx_9)
                int32_t var_2c_1 = 0xf
                void* var_30_1 = nullptr
                var_40.b = 0
                sub_402110(&var_40, 0x6e50b8, 3)
                int32_t var_4_2 = 1
                int32_t* esi_3 = &var_40
                int32_t* edx_10 = &var_40
                int32_t* var_68_5 = var_4c_1
                
                if (var_2c_1 u>= 0x10)
                    esi_3 = var_40
                
                if (var_2c_1 u>= 0x10)
                    edx_10 = var_40
                
                esi_2 = arg1
                sub_468ff0(esi_2 + 4, *(esi_2 + 8), edx_10, var_30_1 + esi_3)
                int32_t var_4_3 = 0xffffffff
                
                if (var_2c_1 u>= 0x10)
                    j__free(var_40)
            
            ecx_4 = arg3[1] - *arg3
            i += 1
            ebp_2 += 0x1c
        while (i s< ecx_4 s/ 0x1c)
        
        ebp_1 = var_4c_1
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    sub_402110(&var_28, "\r\n\r\n", 4)
    int32_t var_4_4 = 2
    char* esi_4 = &var_28
    int32_t* edx_14 = &var_28
    int32_t* var_68_7 = var_4c_1
    
    if (var_14_1 u>= 0x10)
        esi_4 = var_28.d
    
    if (var_14_1 u>= 0x10)
        edx_14 = var_28.d
    
    sub_468ff0(ebp_1, *(arg1 + 8), edx_14, &esi_4[var_18_1])
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)

result.b = 1
label_567abe:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
