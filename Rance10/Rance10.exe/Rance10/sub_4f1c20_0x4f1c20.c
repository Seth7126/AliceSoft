// 函数: sub_4f1c20
// 地址: 0x4f1c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e9b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
sub_4f1640(arg1)
char* result_2
uint32_t result_5 = result_2

if (sub_4a9e60(arg1 + 0x10, result_5) != 0)
    char* edx_1 = *(result_5 + 4)
    
    if (&edx_1[4] u<= *(result_5 + 8))
        uint32_t ecx_7 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(result_5 + 4) = &edx_1[4]
        char* result = nullptr
        int32_t ecx_8 = 0
        char* result_1 = nullptr
        int32_t var_20 = 0
        int32_t var_1c = 0
        int32_t var_8_1 = 0
        int32_t edi_2 = 0
        uint32_t ebx_1
        
        if (ecx_7 s> 0)
            while (true)
                ebx_1 = *(result_5 + 8)
                
                if (*(result_5 + 4) + 4 u<= ebx_1)
                    void* edx_2 = *(result_5 + 4)
                    uint32_t ecx_15 = ((zx.d(*(edx_2 + 3)) << 8 | zx.d(*(edx_2 + 2))) << 8
                        | zx.d(*(edx_2 + 1))) << 8 | zx.d(*edx_2)
                    *(result_5 + 4) = edx_2 + 4
                    
                    if (ecx_15 == 0)
                        goto label_4f1d52
                    
                    if (edx_2 + 8 u<= ebx_1)
                        uint32_t ecx_22 = ((zx.d(*(edx_2 + 7)) << 8 | zx.d(*(edx_2 + 6))) << 8
                            | zx.d(*(edx_2 + 5))) << 8 | zx.d(*(edx_2 + 4))
                        *(result_5 + 4) = edx_2 + 8
                        int32_t ecx_24
                        result, ecx_24 = sub_4f1840(ecx_22)
                        result_2 = result
                        
                        if (result != 0)
                            int32_t var_38_2 = ecx_24
                            
                            if (sub_4f0690(result, arg2, result_5).b != 0)
                                sub_42ccf0(&result_1, &result_2)
                            label_4f1d52:
                                edi_2 += 1
                                
                                if (edi_2 s< ecx_7)
                                    continue
                                
                                ecx_8 = var_20
                                result = result_1
                                break
                
                ebx_1.b = 0
                goto label_4f1db1
        
        int32_t edi_3 = 0
        char* result_3 = result
        ebx_1 = (ecx_8 - result + 3) u>> 2
        
        if (result u> ecx_8)
            ebx_1 = 0
        
        if (ebx_1 != 0)
            do
                result = *result_3
                result_2 = result
                int32_t* ecx_27 = *(result + 0x74)
                
                if (ecx_27 != 0 && (*(*ecx_27 + 8))(1) == 9)
                    sub_51a9d0(sub_4ef6a0(result_2))
                
                edi_3 += 1
                result_3 = &result_3[4]
            while (edi_3 != ebx_1)
        
        ebx_1.b = 1
    label_4f1db1:
        char* result_4 = result_1
        
        if (result_4 != 0)
            sub_403160(result_4, (var_1c - result_4) s>> 2, 4)
        
        result.b = ebx_1.b
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
