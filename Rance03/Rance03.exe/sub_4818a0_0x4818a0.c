// 函数: sub_4818a0
// 地址: 0x4818a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba6c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_4819b0(arg1)

if (arg2 != 0)
    void* esi_1 = *(arg1 + 4)
    int32_t edi_1 = *(arg1 + 8)
    
    if (esi_1 == edi_1)
    label_48190e:
        struct partsengine::CConstructionProcessList::VTable* var_20 =
            &partsengine::CConstructionProcessList::`vftable'
        void var_1c
        sub_484c60(&var_1c, arg3 + 4)
        void* var_10_1 = arg2
        int32_t var_4 = 0
        sub_4849a0(arg1 + 4, &var_20)
        int32_t var_4_1 = 0xffffffff
        sub_481970(&var_20)
        result = (**arg2)(eax_2)
    else
        while (true)
            result = sub_4811c0(esi_1, arg3)
            
            if (result != 0)
                break
            
            esi_1 += 0x14
            
            if (esi_1 == edi_1)
                goto label_48190e
        
        if (*(esi_1 + 0x10) == 0)
            goto label_48190e

fsbase->NtTib.ExceptionList = ExceptionList
return result
