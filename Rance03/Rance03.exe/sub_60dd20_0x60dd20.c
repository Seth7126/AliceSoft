// 函数: sub_60dd20
// 地址: 0x60dd20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

for (void** i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    void* ebx_1 = *i
    
    if (*(ebx_1 + 0x10) != *(ebx_1 + 0x14))
        int32_t* var_18
        sub_459330(&var_18, ebx_1 + 0x10)
        int32_t var_4 = 0
        int32_t* edi_1 = var_18
        int32_t var_14
        void* var_30_2 = var_14 - edi_1
        
        if (sub_60eb10(ebx_1, edi_1).b == 0)
            if (edi_1 != 0)
                j__free(edi_1)
            
            result.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        int32_t var_4_1 = 0xffffffff
        
        if (edi_1 != 0)
            j__free(edi_1)
            var_18 = nullptr
            var_14 = 0
            int32_t var_10_1 = 0

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
