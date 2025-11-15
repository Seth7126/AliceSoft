// 函数: sub_6184b0
// 地址: 0x6184b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744140
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = data_7fcbb8
int32_t* var_44 = ebx
void* var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_8_1 = 0
struct sys43vm::CResume::VTable* const var_34 = &sys43vm::CResume::`vftable'
int32_t var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 1
var_8_1.b = 0
bool cond:1 = sub_6239e0(arg2, arg1, &var_40, &ebx[0x6a]) != 0
int32_t eax_6 = *(*arg3 + 0x48)
char const* const var_5c_1
char* var_58_1

if (cond:1)
    if (eax_6(eax_2) != 0)
        void* esi_1 = var_40
        
        if (esi_1 == var_3c)
        label_618661:
            ebx.b = 1
        else if ((*(*arg3 + 0x40))((var_3c - esi_1) s/ 0x18) != 0)
            ebx = nullptr
            
            if ((*(*arg3 + 8))() s<= 0)
            label_618661_1:
                ebx.b = 1
            else
                while (true)
                    int32_t* eax_18 = (*(*arg3 + 0x14))(ebx)
                    
                    if (eax_18 == 0)
                        sub_403360(&var_2c, 0x76cf14)
                        var_8_1.b = 5
                        sub_612230(var_44, "system.ResumeWriteComment", &var_2c)
                        sub_403320(&var_2c)
                        break
                    
                    void* ecx_16
                    
                    if (*(esi_1 + 0x14) u< 0x10)
                        ecx_16 = esi_1
                    else
                        ecx_16 = *esi_1
                    
                    (*(*eax_18 + 4))(ecx_16)
                    ebx += 1
                    esi_1 += 0x18
                    
                    if (ebx s>= (*(*arg3 + 8))())
                        goto label_618661_1
                
                ebx.b = 0
        else
            sub_403360(&var_2c, 0x76cd74)
            var_8_1.b = 4
            sub_612230(ebx, "system.ResumeWriteComment", &var_2c)
            sub_403320(&var_2c)
            ebx.b = 0
    else
        sub_403360(&var_2c, 0x76cdb0)
        var_8_1.b = 3
        var_58_1 = &var_2c
        var_5c_1 = "system.ResumeWriteComment"
    label_61859b:
        sub_612230(ebx, var_5c_1, var_58_1)
        
        if (var_18 u< 0x10)
            ebx.b = 0
        else
            sub_403160(var_2c.d, var_18 + 1, 1)
            ebx.b = 0
else
    if (eax_6(eax_2) == 0)
        sub_403360(&var_2c, 0x76cdec)
        var_8_1.b = 2
        var_58_1 = &var_2c
        var_5c_1 = "system.ResumeWriteComment"
        goto label_61859b
    
    ebx.b = 0
sub_417070(&var_40)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
