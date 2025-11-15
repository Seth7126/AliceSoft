// 函数: sub_681ed0
// 地址: 0x681ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dc48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_681fc0(arg1)
char* ecx = *arg2
int32_t* eax_3 = arg2[1]

if (ecx != eax_3)
    struct fileimage::CFileImageAnalyser::VTable* const var_1c =
        &fileimage::CFileImageAnalyser::`vftable'
    int32_t var_8_1 = 0
    void* eax_6
    
    if (sub_682060(&var_1c).b == 0 || &ecx[4] u> eax_3)
    label_681f9f:
        eax_6.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    void* var_18_2 = &ecx[4]
    
    if ((((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)) s> 0)
        if (sub_682120(arg1, &var_1c).b == 0)
            goto label_681f9f
        
        eax_6 = sub_6cc740()
        *(arg1 + 0x34) = eax_6
        
        if (eax_6 == 0)
            goto label_681f9f
        
        *(arg1 + 4) = 2
        sub_5a44a0(arg1 + 0x20, arg2)

eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
