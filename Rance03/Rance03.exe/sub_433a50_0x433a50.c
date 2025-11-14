// 函数: sub_433a50
// 地址: 0x433a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b57c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_75d4bc
struct _EXCEPTION_REGISTRATION_RECORD** ebx = nullptr
int32_t ebp = 0
struct _EXCEPTION_REGISTRATION_RECORD** var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
char* i = *(edi + 0x28)

if (i != *(edi + 0x2c))
    do
        sub_421cd0(&var_18, i)
        i = &i[0x1c]
    while (i != *(edi + 0x2c))
    
    ebp = var_14
    ebx = var_18

if (ebx != 0)
    sub_4107c0(ebx, ebp)
    j__free(ebx)

fsbase->NtTib.ExceptionList = ExceptionList
return (ebp - ebx) s/ 0x18
