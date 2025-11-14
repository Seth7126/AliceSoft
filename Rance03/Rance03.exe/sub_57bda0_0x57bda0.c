// 函数: sub_57bda0
// 地址: 0x57bda0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6ca0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_50 = ebp
int32_t edi_2 = (*(arg2 + 0x10) - *(arg2 + 0xc)) s>> 2
int32_t var_4 = 0
char var_44
void* var_2c
sub_402e90(&var_2c, sub_402960(&var_44, ebp + 0x70))
var_4.b = 2
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t esi = 0
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
char* result
void* ebx

if (edi_2 s<= 0)
label_57bec8:
    ebx.b = 1
else
    while (true)
        if (esi s>= 0 && esi s< (*(arg2 + 0x10) - *(arg2 + 0xc)) s>> 2)
            result = *(*(arg2 + 0xc) + (esi << 2))
            
            if (result != 0)
                char* result_1 = result
                char* edi_3 = sub_57bc50()
                
                if (edi_3 != 0)
                    if (sub_581520(edi_3, &var_2c, *(ebp + 0x8c)) == 0)
                        (**edi_3)(1)
                    else
                        var_54 = esi
                        int32_t* var_48
                        
                        if (*sub_42f3d0(ebp + 0x34, &var_48, &var_54) == *(ebp + 0x34))
                            *sub_42f350(ebp + 0x34, &var_54) = edi_3
                        
                        esi += 1
                        
                        if (esi s>= edi_2)
                            goto label_57bec8
                        
                        ebp = var_50
                        continue
        
        ebx.b = 0
        break

int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
