// 函数: sub_61c480
// 地址: 0x61c480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t eax_5 =
    MultiByteToWideChar(0, 0, (**arg1)(0xffffffff, 0, 0, __security_cookie ^ &__saved_edi))

if (eax_5 s<= 0)
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

wchar16* lpWideCharStr_1
sub_61c950(&lpWideCharStr_1, eax_5 + 1)
int32_t var_4 = 0
wchar16* lpWideCharStr = lpWideCharStr_1
int32_t eax_9 = MultiByteToWideChar(0, 0, (**arg1)(0xffffffff, lpWideCharStr, eax_5))
int32_t cbMultiByte

if (eax_9 s> 0)
    lpWideCharStr[eax_5] = 0
    cbMultiByte =
        WideCharToMultiByte(0xfde9, 0, lpWideCharStr, 0xffffffff, nullptr, 0, nullptr, nullptr)

int32_t* ebx

if (eax_9 s<= 0 || cbMultiByte s<= 0)
    ebx.b = 0
else
    char* lpMultiByteStr_1
    sub_448e90(&lpMultiByteStr_1, cbMultiByte + 1)
    var_4.b = 1
    char* lpMultiByteStr = lpMultiByteStr_1
    
    if (WideCharToMultiByte(0xfde9, 0, lpWideCharStr, 0xffffffff, lpMultiByteStr, cbMultiByte, 
            nullptr, nullptr) s> 0)
        lpMultiByteStr[cbMultiByte] = 0
        (*(*arg1 + 4))(lpMultiByteStr)
        ebx.b = 1
    else
        ebx.b = 0
    
    if (lpMultiByteStr != 0)
        j__free(lpMultiByteStr)

if (lpWideCharStr != 0)
    j__free(lpWideCharStr)

eax_9.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
