// 函数: sub_4f74b0
// 地址: 0x4f74b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7290a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_7fcba4
int32_t* esi = arg2
*arg5 = 0
*arg4 = 0
float** var_30 = arg1
*arg3 = 0
*esi = 0
float* result = sub_4f15e0(ecx + 0x128)

if (result != 0)
    int32_t edx_1 = result[2]
    void* const ecx_4
    
    if (arg1 s< edx_1 || result[1] i+ edx_1 s<= arg1)
        ecx_4 = nullptr
    else
        result = result[3]
        ecx_4 = result[arg1 - edx_1]
    
    if (ecx_4 != 0)
        float** var_1c = nullptr
        int32_t var_18_1 = 0
        int32_t var_14_1 = 0
        int32_t var_8_1 = 0
        result = sub_4f10c0(ecx_4, &var_1c, arg6)
        float** ecx_5 = var_1c
        float** ebx
        ebx.b = 1
        float** edx_2 = ecx_5
        arg1 = ecx_5
        
        if (ecx_5 != var_18_1)
            do
                result = *edx_2
                
                if (result != 0)
                    result = &result[0x1e]
                    void* ecx_6 = &result[0x10]
                    
                    if (result != ecx_6)
                        do
                            if (ebx.b == 0)
                                int32_t edi_4 = int.d(fconvert.t(result[1]))
                                int32_t esi_3 = *esi
                                
                                if (edi_4 s< esi_3)
                                    esi_3 = edi_4
                                
                                *arg2 = esi_3
                                int32_t edi_6 = int.d(fconvert.t(result[1]))
                                int32_t esi_5 = *arg3
                                
                                if (esi_5 s< edi_6)
                                    esi_5 = edi_6
                                
                                *arg3 = esi_5
                                int32_t edi_8 = int.d(fconvert.t(*result))
                                int32_t esi_6 = *arg4
                                
                                if (edi_8 s< esi_6)
                                    esi_6 = edi_8
                                
                                *arg4 = esi_6
                                int32_t edi_9 = int.d(fconvert.t(*result))
                                int32_t esi_8 = *arg5
                                
                                if (esi_8 s< edi_9)
                                    esi_8 = edi_9
                                
                                *arg5 = esi_8
                            else
                                int32_t esi_1 = int.d(fconvert.t(result[1]))
                                ebx.b = 0
                                *arg3 = esi_1
                                *arg2 = esi_1
                                int32_t esi_2 = int.d(fconvert.t(*result))
                                *arg5 = esi_2
                                *arg4 = esi_2
                            
                            esi = arg2
                            result = &result[4]
                        while (result != ecx_6)
                        
                        edx_2 = arg1
                
                edx_2 = &edx_2[1]
                arg1 = edx_2
            while (edx_2 != var_18_1)
            
            ecx_5 = var_1c
        
        if (ecx_5 != 0)
            result = sub_403160(ecx_5, (var_14_1 - ecx_5) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
