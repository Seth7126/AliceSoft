// 函数: sub_433b00
// 地址: 0x433b00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b57f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_75d4bc
int32_t var_1c = 0
char* result

if (arg2 s>= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = nullptr
    int32_t ebp_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD** var_18 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    char* i = *(ebx + 0x28)
    
    if (i != *(ebx + 0x2c))
        do
            sub_421cd0(&var_18, i)
            i = &i[0x1c]
        while (i != *(ebx + 0x2c))
        
        ebp_1 = var_14_1
        edi_1 = var_18
    
    if ((ebp_1 - edi_1) s/ 0x18 s> arg2)
        *(arg1 + 0x14) = 0xf
        *(arg1 + 0x10) = 0
        *arg1 = 0
        sub_401ff0(arg1, &edi_1[arg2 * 6], 0, 0xffffffff)
    else
        sub_401f60(arg1, 0x6da09d)
    
    if (edi_1 != 0)
        sub_4107c0(edi_1, ebp_1)
        j__free(edi_1)
    
    result = arg1
else
    sub_401f60(arg1, 0x6da093)
    result = arg1

fsbase->NtTib.ExceptionList = ExceptionList
return result
