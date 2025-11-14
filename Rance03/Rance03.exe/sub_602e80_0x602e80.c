// 函数: sub_602e80
// 地址: 0x602e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc9f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpPathName = arg1
void** __saved_ecx_3 = nullptr
int32_t var_64 = 0
int32_t var_60 = 0
int32_t var_4 = 0
sub_605cc0(lpPathName, &__saved_ecx_3)
void** __saved_ecx_5 = __saved_ecx_3
int32_t* result
int32_t* var_5c
int32_t var_44
int32_t var_30

if (__saved_ecx_5 == var_64)
label_602f8b:
    var_5c = nullptr
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    var_4.b = 3
    sub_6055e0(lpPathName, &var_5c)
    
    for (int32_t* i = var_5c; i != var_58_1; i = &i[6])
        int32_t var_2c
        char* eax_7 = sub_4028a0(&var_2c, lpPathName)
        var_4.b = 4
        char* i_1
        
        if (i[5] u< 0x10)
            i_1 = i
        else
            i_1 = *i
        
        char* lpFileName = sub_410a80(eax_7.b, eax_7, &var_44, i_1)
        
        if (*(lpFileName + 0x14) u>= 0x10)
            lpFileName = *lpFileName
        
        bool var_69_2 = DeleteFileA(lpFileName) == 0
        
        if (var_30 u>= 0x10)
            j__free(var_44)
        
        var_4.b = 3
        var_30 = 0xf
        int32_t var_34_1 = 0
        var_44.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        if (var_69_2 != 0)
            goto label_603070
    
    if (lpPathName[5] u>= 0x10)
        lpPathName = *lpPathName
    
    if (RemoveDirectoryA(lpPathName) != 0)
        lpPathName.b = 1
    else
    label_603070:
        lpPathName.b = 0
    
    result = var_5c
    
    if (result != 0)
        int32_t* result_1 = result
        
        if (result != var_58_1)
            do
                if (result_1[5] u>= 0x10)
                    j__free(*result_1)
                
                result_1[5] = 0xf
                result_1[4] = 0
                *result_1 = 0
                result_1 = &result_1[6]
            while (result_1 != var_58_1)
            
            result = var_5c
        
        j__free(result)
else
    while (true)
        char* eax_5 = sub_4028a0(&var_44, lpPathName)
        var_4.b = 1
        var_4.b = 2
        bool var_69_1 = sub_602e80(sub_410ad0(eax_5, eax_5, &var_5c, __saved_ecx_5)).b == 0
        int32_t var_48
        
        if (var_48 u>= 0x10)
            j__free(var_5c)
        
        var_4.b = 0
        var_48 = 0xf
        int32_t var_4c_1 = 0
        var_5c.b = 0
        
        if (var_30 u>= 0x10)
            j__free(var_44)
        
        if (var_69_1 != 0)
            lpPathName.b = 0
            break
        
        __saved_ecx_5 = &__saved_ecx_5[6]
        
        if (__saved_ecx_5 == var_64)
            goto label_602f8b
void** __saved_ecx_2 = __saved_ecx_3

if (__saved_ecx_2 != 0)
    void** __saved_ecx_4 = __saved_ecx_2
    
    if (__saved_ecx_2 != var_64)
        do
            if (__saved_ecx_4[5] u>= 0x10)
                j__free(*__saved_ecx_4)
            
            __saved_ecx_4[5] = 0xf
            __saved_ecx_4[4] = 0
            *__saved_ecx_4 = nullptr
            __saved_ecx_4 = &__saved_ecx_4[6]
        while (__saved_ecx_4 != var_64)
    
    j__free(__saved_ecx_2)

result.b = lpPathName.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
