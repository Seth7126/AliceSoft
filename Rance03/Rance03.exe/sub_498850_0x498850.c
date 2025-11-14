// 函数: sub_498850
// 地址: 0x498850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg4

if (arg2[4] != 0)
    void* esi_1 = data_75d4cc
    char var_35_1 = 0xff
    *(esi_1 + 0x194) = *(arg1 + 4)
    *(esi_1 + 0x198) = *(arg1 + 8)
    char edx_1 = (*(arg1 + 0x14)).b
    char var_37_1 = (*(arg1 + 0x10)).b
    var_38 = (*(arg1 + 0xc)).b
    char var_36_1 = edx_1
    *(esi_1 + 0x19c) = var_38.d
    *(esi_1 + 0x1a0) = *(arg1 + 0x1c)
    *(esi_1 + 0x1a4) = *(arg1 + 0x20)
    char edx_2 = (*(arg1 + 0x28)).b
    void* ebx_1 = nullptr
    char var_36_2 = (*(arg1 + 0x2c)).b
    var_38 = (*(arg1 + 0x24)).b
    char var_37_2 = edx_2
    char var_35_2 = 0xff
    *(esi_1 + 0x1a8) = var_38.d
    int32_t eax_11 = sub_4ff540(arg1)
    int32_t* result_1 = result
    int32_t esi_2 = 0
    *arg3 = 0
    *result_1 = eax_11
    int32_t eax_12 = arg2[4]
    
    if (eax_12 s> 0)
        do
            int32_t edx_3 = arg2[5]
            char* eax_13
            
            if (edx_3 u< 0x10)
                eax_13 = arg2
            else
                eax_13 = *arg2
            
            result_1.b = eax_13[esi_2]
            
            if (result_1.b != 0xa)
                int32_t var_14_1 = 0xf
                int32_t var_4 = 0
                char var_28
                
                if ((result_1.b u< 0x81 || result_1.b u> 0x9f) && result_1.b + 0x20 u> 0xf)
                    var_28 = result_1.b
                    int32_t var_18_2 = 1
                    char var_27_2 = 0
                else
                    esi_2 += 1
                    var_28 = result_1.b
                    int32_t var_18_1 = 1
                    char var_27_1 = 0
                    char* eax_18
                    
                    if (edx_3 u< 0x10)
                        eax_18 = arg2
                    else
                        eax_18 = *arg2
                    
                    eax_18.b = eax_18[esi_2]
                    var_38 = eax_18.b
                    sub_4031c0(&var_28, 1, (var_38.d).b)
                
                ebx_1 += sub_514630(&var_28) + arg5
                int32_t var_4_1 = 0xffffffff
                
                if (var_14_1 u>= 0x10)
                    j__free(var_28.d)
                
                result_1 = result
            else
                result_1 = result
                *result_1 += arg6 + eax_11
                void* eax_16 = *arg3
                
                if (eax_16 s< ebx_1)
                    eax_16 = ebx_1
                
                ebx_1 = nullptr
                *arg3 = eax_16
            
            esi_2 += 1
        while (esi_2 s< eax_12)
    
    void* eax_21 = *arg3
    
    if (eax_21 s< ebx_1)
        eax_21 = ebx_1
    
    *arg3 = eax_21
    *result_1 -= arg6
    result = arg5
    *arg3 -= result
else
    *arg3 = 0
    *result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
