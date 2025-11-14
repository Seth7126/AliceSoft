// 函数: sub_673f60
// 地址: 0x673f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg1 s> 0)
    int32_t var_50_1 = arg1
    int32_t* edi_1 = data_75d4fc + 0x178
    
    if (sub_4a55e0(edi_1).b != 0)
        int32_t var_50_2 = arg1
        
        if (sub_4a55e0(edi_1).b != 0)
            eax_3.b = sub_4f0040(arg1, arg2) == 0xd
            
            if (eax_3.b != 0)
                int32_t var_4 = 0
                struct partsengine::CCharSpriteProperty::VTable* var_40
                sub_4f7d70(sub_4ff2c0(&var_40), &var_40, arg1, arg2)
                int32_t var_3c
                *arg3 = var_3c
                int32_t var_38
                *arg4 = var_38
                int32_t var_34
                *arg5 = var_34
                int32_t var_30
                *arg6 = var_30
                int32_t var_2c
                *arg7 = var_2c
                int32_t var_24
                *arg8 = var_24
                int32_t var_20
                *arg9 = var_20
                int32_t var_1c
                *arg10 = var_1c
                *arg11 = var_1c
                *arg12 = var_1c
                void* eax_16 = sub_4a8b80(data_75d4fc + 0x174, arg1)
                int32_t ecx_14
                
                if (eax_16 != 0)
                    ecx_14 = *(sub_510260(*(eax_16 + 0x34), arg2) + 0x40)
                else
                    ecx_14 = 0
                
                *arg13 = ecx_14
                void* eax_19 = sub_4a8b80(data_75d4fc + 0x174, arg1)
                
                if (eax_19 != 0)
                    *arg14 = *(sub_510260(*(eax_19 + 0x34), arg2) + 0x44)
                    int32_t* eax_22
                    eax_22.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_22
                
                *arg14 = 0
                int32_t* eax_20
                eax_20.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_20

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
