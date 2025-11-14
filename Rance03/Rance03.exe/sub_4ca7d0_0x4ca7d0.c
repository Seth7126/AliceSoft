// 函数: sub_4ca7d0
// 地址: 0x4ca7d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b77b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1 + 0x18
void* ebp = arg2
void* var_3c = ebp
void* var_40 = edi
sub_4cce00(edi, *(*(arg1 + 0x18) + 4))
void* eax_6 = *edi
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *edi
*eax_7 = eax_7
struct _EXCEPTION_REGISTRATION_RECORD** result = *edi
result[2] = result
*(edi + 4) = 0
char* edx = *(ebp + 4)

if (&edx[4] u> *(ebp + 8))
    result.b = 0
else
    int32_t ebx_1 = 0
    int32_t ecx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(ebp + 4) = &edx[4]
    
    if (ecx_7 s<= 0)
    label_4ca977:
        result.b = 1
    else
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_4 = 0
            
            if (sub_468d00(ebp, &var_2c).b != 0)
                void** eax_10
                int32_t ecx_10
                eax_10, ecx_10 = sub_417ed0(edi, &var_2c)
                void** esi_1 = eax_10
                
                if (esi_1 == *edi)
                label_4ca91c:
                    int32_t var_5c_4 = ecx_10
                    char* var_38 = &var_2c
                    char** var_60_1 = &var_38
                    int32_t* eax_13 = sub_4ce700(ecx_10)
                    void** var_30
                    sub_4ce780(edi, &var_30, esi_1, &eax_13[4], eax_13)
                    esi_1 = var_30
                else
                    void* edx_1 = &esi_1[4]
                    int32_t edi_1 = *(edx_1 + 0x10)
                    
                    if (esi_1[9] u>= 0x10)
                        edx_1 = *edx_1
                    
                    int32_t* ecx_11 = &var_2c
                    int32_t eax_11 = edi_1
                    
                    if (var_18_1 u>= 0x10)
                        ecx_11 = var_2c.d
                    
                    if (var_1c_1 u< edi_1)
                        eax_11 = var_1c_1
                    
                    int32_t eax_12
                    eax_12, ecx_10 = sub_405190(eax_11, edx_1, ecx_11, eax_11)
                    bool cond:3_1 = eax_12 s< 0
                    
                    if (eax_12 == 0)
                        if (var_1c_1 u>= edi_1)
                            eax_12.b = var_1c_1 != edi_1
                        else
                            eax_12 = 0xffffffff
                        
                        cond:3_1 = eax_12 s< 0
                    
                    edi = var_40
                    eax_12.b = cond:3_1
                    ebp = var_3c
                    
                    if (eax_12.b != 0)
                        goto label_4ca91c
                
                if (sub_4e6370(&esi_1[0xa], ebp).b != 0)
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_18_1 u>= 0x10)
                        j__free(var_2c.d)
                    
                    ebx_1 += 1
                    
                    if (ebx_1 s>= ecx_7)
                        goto label_4ca977
                    
                    continue
            
            if (var_18_1 u< 0x10)
                break
            
            j__free(var_2c.d)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
