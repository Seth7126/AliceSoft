// 函数: sub_5632f0
// 地址: 0x5632f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c59e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x66666667, *(arg2 + 0x1c4) - *(arg2 + 0x1c0))
int32_t edx_1 = edx s>> 3
int32_t result

if ((edx_1 u>> 0x1f) + edx_1 s<= 0)
    result.b = 1
else
    int32_t var_2c_1 = 0xf
    void* var_30_1 = nullptr
    char var_40 = 0
    sub_402110(&var_40, 0x6e4c4c, 0x13)
    int32_t var_4 = 0
    char* esi_1 = &var_40
    char* edx_2 = &var_40
    void* var_60_1 = arg1
    
    if (var_2c_1 u>= 0x10)
        esi_1 = var_40.d
    
    if (var_2c_1 u>= 0x10)
        edx_2 = var_40.d
    
    void* esi_2 = arg1
    sub_468ff0(arg1 + 4, *(esi_2 + 8), edx_2, var_30_1 + esi_1)
    int32_t var_4_1 = 0xffffffff
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    int32_t ebx_1 = 0
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 = muls.dp.d(0x66666667, *(arg2 + 0x1c4) - *(arg2 + 0x1c0))
    int32_t edx_4 = edx_3 s>> 3
    
    if ((edx_4 u>> 0x1f) + edx_4 s<= 0)
    label_5634db:
        int32_t var_14_1 = 0xf
        int32_t var_18_1 = 0
        char var_28 = 0
        sub_402110(&var_28, "\r\n\r\n", 4)
        int32_t var_4_4 = 2
        char* esi_4 = &var_28
        int32_t* edx_10 = &var_28
        void* var_60_6 = arg1
        
        if (var_14_1 u>= 0x10)
            esi_4 = var_28.d
        
        if (var_14_1 u>= 0x10)
            edx_10 = var_28.d
        
        sub_468ff0(arg1 + 4, *(arg1 + 8), edx_10, &esi_4[var_18_1])
        
        if (var_14_1 u>= 0x10)
            j__free(var_28.d)
        
        result.b = 1
    else
        int32_t ebp_1 = 0
        
        while (true)
            if (sub_563570(esi_2, *(arg2 + 0x1c0) + ebp_1).b == 0)
                result.b = 0
                break
            
            int32_t eax_16
            int32_t edx_5
            edx_5:eax_16 = muls.dp.d(0x66666667, *(arg2 + 0x1c4) - *(arg2 + 0x1c0))
            int32_t edx_6 = edx_5 s>> 3
            
            if (ebx_1 s< (edx_6 u>> 0x1f) - 1 + edx_6)
                int32_t var_2c_2 = 0xf
                int32_t var_30_2 = 0
                var_40 = 0
                sub_402110(&var_40, 0x6e4c38, 3)
                int32_t var_4_2 = 1
                char* esi_3 = &var_40
                int32_t* edx_7 = &var_40
                void* var_60_4 = arg1
                
                if (var_2c_2 u>= 0x10)
                    esi_3 = var_40.d
                
                if (var_2c_2 u>= 0x10)
                    edx_7 = var_40.d
                
                esi_2 = arg1
                sub_468ff0(esi_2 + 4, *(esi_2 + 8), edx_7, &esi_3[var_30_2])
                int32_t var_4_3 = 0xffffffff
                
                if (var_2c_2 u>= 0x10)
                    j__free(var_40.d)
            
            ebx_1 += 1
            int32_t eax_23
            int32_t edx_8
            edx_8:eax_23 = muls.dp.d(0x66666667, *(arg2 + 0x1c4) - *(arg2 + 0x1c0))
            ebp_1 += 0x14
            int32_t edx_9 = edx_8 s>> 3
            
            if (ebx_1 s>= (edx_9 u>> 0x1f) + edx_9)
                goto label_5634db

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
