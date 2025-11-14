// 函数: sub_4a6050
// 地址: 0x4a6050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_20 = arg1
sub_4a5510(arg1)
int32_t result_2
int32_t result_5 = result_2
uint32_t* result = sub_47e360(arg1 + 0x10, result_5)
char* edx_1

if (result.b != 0)
    edx_1 = *(result_5 + 4)

if (result.b == 0 || &edx_1[4] u> *(result_5 + 8))
    result.b = 0
else
    uint32_t ecx_7 =
        ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
    *(result_5 + 4) = &edx_1[4]
    result = nullptr
    int32_t ecx_8 = 0
    uint32_t* result_1 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    uint32_t ebx_1
    
    if (ecx_7 s> 0)
        ebx_1 = 0
        
        while (true)
            char* edi_2 = *(result_5 + 4)
            int32_t ebp_1 = *(result_5 + 8)
            
            if (&edi_2[4] u<= ebp_1)
                bool cond:1_1 = (((zx.d(edi_2[3]) << 8 | zx.d(edi_2[2])) << 8 | zx.d(edi_2[1])) << 8
                    | zx.d(*edi_2)) == 0
                *(result_5 + 4) = &edi_2[4]
                
                if (cond:1_1)
                    goto label_4a6186
                
                if (&edi_2[8] u<= ebp_1)
                    uint32_t ecx_22 =
                        ((zx.d(edi_2[7]) << 8 | zx.d(edi_2[6])) << 8 | zx.d(edi_2[5])) << 8
                        | zx.d(edi_2[4])
                    *(result_5 + 4) = &edi_2[8]
                    result = sub_4a56a0(ecx_22)
                    result_2 = result
                    
                    if (result != 0 && sub_4a48f0(result, arg2, result_5, 0).b != 0)
                        sub_412de0(&result_1, &result_2)
                    label_4a6186:
                        ebx_1 += 1
                        
                        if (ebx_1 s< ecx_7)
                            continue
                        
                        ecx_8 = var_14_1
                        result = result_1
                        break
            
            ebx_1.b = 0
            goto label_4a61df
    
    int32_t edi_4 = 0
    uint32_t* result_3 = result
    ebx_1 = (ecx_8 - result + 3) u>> 2
    
    if (result u> ecx_8)
        ebx_1 = 0
    
    if (ebx_1 != 0)
        do
            uint32_t ebp_2 = *result_3
            int32_t* ecx_26 = *(ebp_2 + 0x5c)
            
            if (ecx_26 != 0 && (*(*ecx_26 + 8))(1) == 9)
                (**(sub_4a3f80(ebp_2) + 0x2c))(eax_2)
            
            edi_4 += 1
            result_3 = &result_3[1]
        while (edi_4 != ebx_1)
    
    ebx_1.b = 1
label_4a61df:
    uint32_t* result_4 = result_1
    
    if (result_4 != 0)
        j__free(result_4)
    
    result.b = ebx_1.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
