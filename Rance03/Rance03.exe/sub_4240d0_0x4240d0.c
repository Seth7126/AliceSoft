// 函数: sub_4240d0
// 地址: 0x4240d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT result = arg1[0x45]

if (result != arg1[0x46])
    void* edi_1 = arg1[0x46]
    
    if (*(edi_1 - 4) u>= 0x10)
        j__free(*(edi_1 - 0x18))
    
    *(edi_1 - 4) = 0xf
    *(edi_1 - 8) = 0
    *(edi_1 - 0x18) = 0
    arg1[0x46] -= 0x24
    
    if (arg1[0x45] != arg1[0x46])
        void* eax_6 = arg1[0x46]
        arg1[0x3b] = *(eax_6 - 0x20)
        int32_t eax_7 = *(eax_6 - 0x1c)
        
        if (eax_7 s>= 0)
            sub_42bf70(arg1, eax_7, 0)
    else
        arg1[0x3b] = 0xffffffff
    
    sub_4315f0(arg1)
    char var_34
    char* eax_8 = sub_424270(arg1, &var_34)
    int32_t var_c_1 = 0
    char* ecx_5 = arg1[0x48] + 0x44
    
    if (ecx_5 != eax_8)
        sub_401ff0(ecx_5, eax_8, 0, 0xffffffff)
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34.d)
    
    void* ecx_6 = arg1[0x48]
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    var_34 = 0
    result = sub_429a20(ecx_6)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
