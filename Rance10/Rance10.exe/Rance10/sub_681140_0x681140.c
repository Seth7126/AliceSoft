// 函数: sub_681140
// 地址: 0x681140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746c48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpPathName = arg1
PSTR lpFileName

if (lpPathName[5] u< 0x10)
    lpFileName = lpPathName
else
    lpFileName = *lpPathName

uint32_t result = GetFileAttributesA(lpFileName)

if (result == 0xffffffff)
    result.b = 1
else
    result.b = (result u>> 4).b & 1
    
    if (result.b == 0)
        result.b = 1
    else
        void** var_50
        sub_67f720(&var_50)
        int32_t var_8_1 = 0
        void** esi_1 = var_50
        int32_t var_4c
        
        if (esi_1 == var_4c)
        label_681265:
            sub_417070(&var_50)
            
            if (lpPathName[5] u>= 0x10)
                lpPathName = *lpPathName
            
            result.b = RemoveDirectoryA(lpPathName) != 0
        else
            while (true)
                void* var_44
                char* eax_3 = sub_404f20(&var_44, lpPathName)
                var_8_1.b = 1
                int32_t* lpFileName_3
                sub_417750(eax_3, eax_3, &lpFileName_3, esi_1)
                var_8_1.b = 3
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44, var_30 + 1, 1)
                
                int32_t* lpFileName_1 = &lpFileName_3
                var_30 = 0xf
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    lpFileName_1 = lpFileName_3
                
                int32_t var_34_1 = 0
                var_44.b = 0
                uint32_t eax_6 = GetFileAttributesA(lpFileName_1)
                bool cond:2_1
                
                if (eax_6 == 0xffffffff || ((eax_6 u>> 4).b & 1) == 0)
                    int32_t* lpFileName_2 = &lpFileName_3
                    
                    if (var_18 u>= 0x10)
                        lpFileName_2 = lpFileName_3
                    
                    cond:2_1 = DeleteFileA(lpFileName_2) == 0
                else
                    cond:2_1 = sub_681140(eax_2) == 0
                
                if (cond:2_1)
                    if (var_18 u>= 0x10)
                        sub_403160(lpFileName_3, var_18 + 1, 1)
                    
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    lpFileName_3.b = 0
                    sub_417070(&var_50)
                    result.b = 0
                    break
                
                var_8_1.b = 0
                
                if (var_18 u>= 0x10)
                    sub_403160(lpFileName_3, var_18 + 1, 1)
                
                esi_1 = &esi_1[6]
                
                if (esi_1 == var_4c)
                    goto label_681265

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
