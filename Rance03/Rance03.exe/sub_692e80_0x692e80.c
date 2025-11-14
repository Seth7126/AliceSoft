// 函数: sub_692e80
// 地址: 0x692e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
int32_t* result = arg3
int32_t var_24 = 0
void* edi = arg5
int32_t var_4 = 0
int32_t* arg_10

if (esi != arg4 && edi != arg6)
    bool cond:0_1
    
    do
        arg3.b = *(esi + 0x34)
        
        if (*(edi + 0x34) != 0 || arg3.b != 1)
            sub_693750(&arg_10, esi)
            esi += 0x44
            cond:0_1 = esi != arg4
        else
            sub_693750(&arg_10, edi)
            edi += 0x44
            cond:0_1 = edi != arg6
    while (cond:0_1)

int32_t var_44 = 0
int32_t var_40_3 = arg8
int32_t* var_20
int32_t* eax_5
int32_t ecx_3
eax_5, ecx_3 = sub_68f150(arg8, esi, &var_20, arg4, nullptr, 0, 0)
int32_t* esi_1 = var_20
int32_t eax_6 = eax_5[4]

if (esi_1 != 0)
    int32_t var_18
    
    if (esi_1 != var_18)
        do
            (**esi_1)(0)
            esi_1 = &esi_1[0x11]
        while (esi_1 != var_18)
        
        esi_1 = var_20
    
    j__free(esi_1)

int32_t var_44_1 = 0
int32_t var_40_5 = eax_6
sub_68f150(eax_6, edi, result, arg6, nullptr, 0, 0)
int32_t var_4_1 = 0xffffffff
int32_t* esi_2 = arg_10

if (esi_2 != 0)
    if (esi_2 != arg7)
        do
            (**esi_2)(0)
            esi_2 = &esi_2[0x11]
        while (esi_2 != arg7)
        
        esi_2 = arg_10
    
    j__free(esi_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
