// 函数: sub_608370
// 地址: 0x608370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cce08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x24) = *(arg1 + 0x20)
void* eax_4 = arg1 + 8
bool cond:0 = *(eax_4 + 0x14) u< 0x10
*(eax_4 + 0x10) = 0

if (not(cond:0))
    eax_4 = *eax_4

*eax_4 = 0
sub_41fff0(arg1 + 0x2c)
int32_t* ecx_1 = *(arg1 + 0x34)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    *(arg1 + 0x34) = 0

*(arg1 + 4) = 0
char* ecx_2 = *arg2
int32_t* eax_6 = arg2[1]

if (ecx_2 != eax_6)
    struct fileimage::CFileImageAnalyser::VTable* const var_24 =
        &fileimage::CFileImageAnalyser::`vftable'
    int32_t var_c_1 = 0
    uint32_t* eax_9
    
    if (sub_6084b0(&var_24).b == 0 || &ecx_2[4] u> eax_6)
    label_60848c:
        eax_9.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    int32_t* var_20_2 = &ecx_2[4]
    
    if ((((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)) s> 0)
        if (sub_608580(arg1, &var_24).b == 0)
            goto label_60848c
        
        eax_9 = sub_620fa0()
        *(arg1 + 0x34) = eax_9
        
        if (eax_9 == 0)
            goto label_60848c
        
        *(arg1 + 4) = 2
        sub_5d18a0(arg1 + 0x20, arg2)

eax_6.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
