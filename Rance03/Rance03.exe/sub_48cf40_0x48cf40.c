// 函数: sub_48cf40
// 地址: 0x48cf40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baf50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg3[1] = *arg3
int32_t* ecx = *(arg1 + 4)
int32_t* edi_1

if (ecx != 0)
    int32_t* eax_6 = (*(*ecx + 0x10))(3)
    char var_28
    int32_t* ecx_2 = sub_410930(eax_6, arg2, &var_28, 0x6de80c)
    int32_t var_4 = 0
    
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    int32_t var_4_1 = 0xffffffff
    edi_1 = (*(*eax_6 + 8))(ecx_2)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28.d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0

int32_t* result

if (ecx == 0 || edi_1 == 0)
    result.b = 0
else
    int32_t eax_10 = (*(*edi_1 + 0x18))(eax_4)
    int32_t eax_11 = (*(*edi_1 + 0x14))()
    int32_t* eax_12 = (*(*edi_1 + 0x18))()
    int32_t var_2c
    int32_t var_50_3 = var_2c
    int32_t var_38 = 0
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    sub_459eb0(&var_38, eax_12, eax_10 + eax_11)
    int32_t var_4_2 = 1
    sub_48d5d0(arg3, &var_38)
    int32_t var_4_3 = 0xffffffff
    int32_t eax_13 = var_38
    
    if (eax_13 != 0)
        j__free(eax_13)
    
    (*(*edi_1 + 4))()
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
