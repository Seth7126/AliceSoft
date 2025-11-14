// 函数: sub_5716f0
// 地址: 0x5716f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c667b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x37c)

if (ecx != 0)
    sub_529c30(ecx)
    *(arg1 + 0x37c) = 0

int32_t* ecx_1 = *(arg1 + 0x378)

if (ecx_1 != 0)
    sub_54c280(ecx_1)
    *(arg1 + 0x378) = 0

struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s< 0)
    result.b = 0
else
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x1a6d01a7, *(arg3 + 0x18) - *(arg3 + 0x14))
    int32_t edx_2 = edx_1 s>> 6
    
    if (arg2 s>= (edx_2 u>> 0x1f) + edx_2)
        result.b = 0
    else
        int32_t eax_8 = arg2 * 0x26c
        result = eax_8 + *(arg3 + 0x14)
        
        if (eax_8 == neg.d(*(arg3 + 0x14)))
            result.b = 0
        else
            void* edi_1 = &result[0x61]
            
            if (result[0x65] != 0)
                char var_44[0x10]
                char* eax_9 = sub_4028a0(&var_44, arg3 + 0x2c)
                int32_t var_4 = 0
                int32_t var_2c
                sub_410ad0(eax_9, eax_9, &var_2c, edi_1)
                var_4.b = 2
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    j__free(var_44[0].d)
                
                void* ecx_6 = *(arg1 + 0x384)
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                var_44[0] = 0
                result = sub_58db80(ecx_6, &var_2c, 1)
                *(arg1 + 0x378) = result
                void* ebx
                
                if (result == 0)
                    ebx.b = 0
                else
                    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** eax_10 =
                        sub_69adc6(0x160)
                    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** var_48_1 =
                        eax_10
                    var_4.b = 3
                    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** ecx_8
                    
                    if (eax_10 == 0)
                        ecx_8 = nullptr
                    else
                        ecx_8 = sub_583990(eax_10)
                    
                    var_4.b = 2
                    int32_t eax_12 = *(arg1 + 0x384)
                    *(arg1 + 0x37c) = ecx_8
                    ecx_8[0x57] = eax_12
                    
                    if (sub_583c10(*(arg1 + 0x37c), edi_1, *(arg1 + 0x378), 0, arg4).b != 0)
                        ebx.b = 1
                    else
                        sub_529c30(*(arg1 + 0x37c))
                        *(arg1 + 0x37c) = 0
                        ebx.b = 0
                
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
                
                result.b = ebx.b
            else
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
