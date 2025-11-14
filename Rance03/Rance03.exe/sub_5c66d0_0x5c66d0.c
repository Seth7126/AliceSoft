// 函数: sub_5c66d0
// 地址: 0x5c66d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9c60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x8d] -= 4
int32_t edx = *arg1[0x8d]
arg1[0x8d] -= 4
int32_t* ecx_1 = *arg1[0x8d]
int32_t eax_9 = (arg1[0x5e] - arg1[0x5d]) s>> 2
var_48 = ecx_1
int32_t* result

if (ecx_1 u>= eax_9)
    result = sub_5c24e0(eax_9, edx, ecx_1, arg1, 0x6e7160)
else
    eax_9 = arg1[0x5d]
    void* ebx_1 = *(eax_9 + (ecx_1 << 2))
    
    if (ebx_1 == 0)
        result = sub_5c24e0(eax_9, edx, ecx_1, arg1, 0x6e7160)
    else
        eax_9 = (arg1[0x5e] - arg1[0x5d]) s>> 2
        
        if (edx u>= eax_9)
            result = sub_5c24e0(eax_9, edx, ecx_1, arg1, 0x6e718c)
        else
            eax_9 = arg1[0x5d]
            void* ebp_1 = *(eax_9 + (edx << 2))
            
            if (ebp_1 == 0)
                result = sub_5c24e0(eax_9, edx, ecx_1, arg1, 0x6e718c)
            else
                char* eax_12
                
                if (*(ebx_1 + 0xc) != 0)
                    eax_12 = *(ebx_1 + 8)
                else
                    eax_12 = nullptr
                
                char var_40
                char* eax_13 = sub_401f60(&var_40, eax_12)
                int32_t var_4 = 0
                char* ecx_3
                
                if (*(ebp_1 + 0xc) != 0)
                    ecx_3 = *(ebp_1 + 8)
                else
                    ecx_3 = nullptr
                
                void* var_28
                sub_410a80(eax_13.b, eax_13, &var_28, ecx_3)
                var_4.b = 2
                int32_t var_2c
                
                if (var_2c u>= 0x10)
                    j__free(var_40.d)
                
                int32_t var_2c_1 = 0xf
                int32_t var_30_1 = 0
                var_40 = 0
                int32_t eax_14
                int32_t* ecx_6
                int32_t edx_2
                eax_14, ecx_6, edx_2 = sub_5d5e80(&arg1[0x5b], edx)
                
                if (eax_14.b != 0)
                    int32_t eax_15
                    int32_t* ecx_8
                    int32_t edx_3
                    eax_15, ecx_8, edx_3 = sub_5d3d20(ebx_1, &var_28)
                    
                    if (eax_15.b != 0)
                        result = sub_5ddf10(&arg1[0x88], var_48)
                    else
                        result = sub_5c24e0(eax_15, edx_3, ecx_8, arg1, 0x6e71fc)
                else
                    result = sub_5c24e0(eax_14, edx_2, ecx_6, arg1, 0x6e7220)
                
                int32_t var_14
                
                if (var_14 u>= 0x10)
                    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
