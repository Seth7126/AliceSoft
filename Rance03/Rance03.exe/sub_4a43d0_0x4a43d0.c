// 函数: sub_4a43d0
// 地址: 0x4a43d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi

if ((*(**(arg1 + 0x5c) + 0x18))(__security_cookie ^ &__saved_edi) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_4a6a50(arg1 + 0x4c, &var_18)
int32_t* ebp = var_18
int32_t* esi_1 = ebp
int32_t edi_1

if (ebp == var_14)
label_4a446c:
    edi_1 = 0
else
    while (true)
        *esi_1
        edi_1 = sub_4a43d0()
        
        if (edi_1 != 0)
            break
        
        esi_1 = &esi_1[1]
        
        if (esi_1 == var_14)
            goto label_4a446c

if (ebp != 0)
    j__free(ebp)

fsbase->NtTib.ExceptionList = ExceptionList
return edi_1
