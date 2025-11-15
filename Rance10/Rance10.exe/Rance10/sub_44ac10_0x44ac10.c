// 函数: sub_44ac10
// 地址: 0x44ac10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a9e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t ebx
uint32_t var_38 = ebx
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

uint32_t arg_4
uint32_t esi = arg_4
struct fileimage::CFileImageAnalyser::VTable* const var_28 =
    &fileimage::CFileImageAnalyser::`vftable'
char* ecx_2 = *esi
char* var_24 = ecx_2
uint32_t eax_6 = *(esi + 4)
uint32_t var_20 = eax_6
int32_t var_8_1 = 0

if (&ecx_2[4] u<= eax_6)
    void* var_24_1 = &ecx_2[4]
    ebx = ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)

if (&ecx_2[4] u> eax_6 || ebx s<= 0)
    ebx.b = 0
else
    int32_t var_34
    sub_431b80(&var_34, ebx)
    var_8_1.b = 1
    int32_t eax_9 = *esi
    int32_t esi_3 = var_34
    
    if ((*(**(arg1 + 4) + 8))(esi_3, ebx, eax_9 + 4, *(esi + 4) - eax_9 - 4) == 0)
        ebx.b = 0
        sub_4059a0(&var_34)
    else
        struct fileimage::CFileImageAnalyser::VTable* const var_1c =
            &fileimage::CFileImageAnalyser::`vftable'
        int32_t var_18_1 = esi_3
        int32_t var_30
        int32_t var_14_1 = var_30
        var_8_1.b = 2
        
        if (sub_61ec90(&var_1c, &arg_4) == 0)
            ebx.b = 0
            sub_4059a0(&var_34)
        else
            uint32_t edi_2 = arg_4
            
            if (edi_2 s<= 0)
                ebx.b = 0
                sub_4059a0(&var_34)
            else
                sub_405950(arg2, edi_2)
                
                if (sub_6c9430(&var_1c, *arg2, edi_2) == 0)
                    ebx.b = 0
                    sub_4059a0(&var_34)
                else
                    ebx.b = 1
                    sub_4059a0(&var_34)

eax_6.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
