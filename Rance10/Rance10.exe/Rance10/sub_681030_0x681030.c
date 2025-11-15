// 函数: sub_681030
// 地址: 0x681030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpPathName = arg1
PSTR lpFileName

if (lpPathName[5] u< 0x10)
    lpFileName = lpPathName
else
    lpFileName = *lpPathName

uint32_t eax_3 = GetFileAttributesA(lpFileName)
int32_t* result

if (eax_3 != 0xffffffff)
    result.b = (eax_3 u>> 4).b & 1

if (eax_3 == 0xffffffff || result.b == 0)
    void* var_2c
    sub_404ea0(&var_2c)
    int32_t var_8_1 = 0
    int32_t var_1c
    int32_t ebx
    
    if (var_1c == 0)
    label_6810a9:
        
        if (lpPathName[4] != 3)
        label_6810f3:
            
            if (lpPathName[5] u>= 0x10)
                lpPathName = *lpPathName
            
            if (CreateDirectoryA(lpPathName, nullptr) != 0)
                ebx.b = 1
            else
                ebx.b = 0
        else
            int32_t ecx_1 = lpPathName[5]
            int32_t* lpPathName_1
            
            if (ecx_1 u< 0x10)
                lpPathName_1 = lpPathName
            else
                lpPathName_1 = *lpPathName
            
            lpPathName_1.b = *lpPathName_1
            
            if (lpPathName_1.b u< 0x61 || lpPathName_1.b u> 0x7a)
                lpPathName_1.b -= 0x41
                
                if (lpPathName_1.b u> 0x19)
                    goto label_6810f3
            
            int32_t* lpPathName_2
            
            if (ecx_1 u< 0x10)
                lpPathName_2 = lpPathName
            else
                lpPathName_2 = *lpPathName
            
            if (*(lpPathName_2 + 1) != 0x3a)
                goto label_6810f3
            
            if (ecx_1 u< 0x10)
                result = lpPathName
            else
                result = *lpPathName
            
            if (*(result + 2) != 0x5c)
                goto label_6810f3
            
            ebx.b = 1
    else
        if (sub_681030(eax_2).b != 0)
            goto label_6810a9
        
        ebx.b = 0
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
