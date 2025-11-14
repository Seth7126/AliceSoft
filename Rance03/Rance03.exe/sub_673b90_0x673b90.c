// 函数: sub_673b90
// 地址: 0x673b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 s> 0)
    void* edi_1 = data_75d4fc
    int32_t var_28_1 = arg1
    
    if (sub_4a55e0(edi_1 + 0x178) != 0)
        int32_t* var_18 = nullptr
        int32_t var_14 = 0
        int32_t var_10 = 0
        int32_t var_28_2 = arg1
        int32_t var_4 = 0
        struct partsengine::CPartsList::VTable** eax_4 = sub_4a52a0(edi_1 + 0x178)
        
        if (eax_4 != 0)
            int32_t eax_5 = eax_4[2]
            struct IInterface::VTable** vFunc_0
            
            if (arg1 s< eax_5 || eax_4[1] + eax_5 s<= arg1)
                vFunc_0 = nullptr
            label_673c37:
                
                if (vFunc_0 != 0)
                    sub_4a4f00(vFunc_0, &var_18, arg2)
            else
                vFunc_0 = eax_4[3][arg1 - eax_5].vFunc_0
                
                if (vFunc_0 == 0)
                    vFunc_0 = sub_4e7720(eax_4, arg1)
                    goto label_673c37
                
                sub_4a4f00(vFunc_0, &var_18, arg2)
        
        int32_t* eax_7 = var_18
        int32_t result
        
        if (eax_7 != var_14)
            result = *eax_7
        else
            result = 0
        
        if (eax_7 != 0)
            j__free(eax_7)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
