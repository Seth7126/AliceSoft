// 函数: sub_6812e0
// 地址: 0x6812e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_746cb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_80
int32_t eax_2 = __security_cookie ^ &var_80
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpFileName_1 = arg2
int32_t* lpFileName_2 = lpFileName_1
void** var_94 = arg1
PSTR lpFileName

if (lpFileName_1[5] u< 0x10)
    lpFileName = lpFileName_1
else
    lpFileName = *lpFileName_1

uint32_t result = GetFileAttributesA(lpFileName)

if (result == 0xffffffff)
    result.b = 0
else
    result.b = (result u>> 4).b & 1
    
    if (result.b == 0)
        result.b = 0
    else if (sub_681030(arg1).b == 0)
        result.b = 0
    else
        void** var_a0
        int32_t* eax_3 = sub_67fac0(&var_a0)
        int32_t var_84_1 = 0
        void** esi_1 = var_a0
        int32_t var_9c
        void* var_68
        int32_t* var_54
        int32_t var_40
        char var_38
        int32_t var_24
        char var_20
        int32_t var_c
        
        if (esi_1 == var_9c)
        label_681477:
            int32_t var_84_2 = 0xffffffff
            sub_417070(&var_a0)
            void** var_44
            int32_t* eax_16 = sub_67f720(&var_44)
            int32_t var_84_3 = 5
            void** esi_2 = var_44
            
            if (esi_2 == var_40)
            label_6815b3:
                sub_417070(&var_44)
                result.b = 1
            else
                while (true)
                    int32_t* eax_17 = sub_4175e0(eax_16, lpFileName_1, &var_80, U"\\\\")
                    var_84_3.b = 6
                    char* lpExistingFileName_1 = sub_417750(eax_17, eax_17, &var_68, esi_2)
                    char* lpExistingFileName = lpExistingFileName_1
                    var_84_3.b = 7
                    int32_t* eax_18 =
                        sub_4175e0(lpExistingFileName_1, var_94, &var_20, &(*\\\\")[2])
                    var_84_3.b = 8
                    char* lpNewFileName = sub_417750(eax_18, eax_18, &var_38, esi_2)
                    
                    if (*(lpNewFileName + 0x14) u>= 0x10)
                        lpNewFileName = *lpNewFileName
                    
                    if (*(lpExistingFileName + 0x14) u>= 0x10)
                        lpExistingFileName = *lpExistingFileName
                    
                    lpExistingFileName.b = CopyFileA(lpExistingFileName, lpNewFileName, 0) != 1
                    
                    if (var_24 u>= 0x10)
                        sub_403160(var_38.d, var_24 + 1, 1)
                    
                    var_24 = 0xf
                    int32_t var_28_2 = 0
                    var_38 = 0
                    
                    if (var_c u>= 0x10)
                        sub_403160(var_20.d, var_c + 1, 1)
                    
                    var_c = 0xf
                    int32_t var_10_2 = 0
                    var_20 = 0
                    
                    if (var_54 u>= 0x10)
                        sub_403160(var_68, var_54 + 1, 1)
                    
                    var_84_3.b = 5
                    int32_t* var_6c
                    eax_16 = var_6c
                    var_54 = 0xf
                    int32_t var_58_1 = 0
                    var_68.b = 0
                    
                    if (eax_16 u>= 0x10)
                        eax_16 = sub_403160(var_80, eax_16 + 1, 1)
                    
                    if (lpExistingFileName.b != 0)
                        break
                    
                    lpFileName_1 = lpFileName_2
                    esi_2 = &esi_2[6]
                    
                    if (esi_2 == var_40)
                        goto label_6815b3
                
                sub_417070(&var_44)
                result.b = 0
        else
            while (true)
                int32_t* eax_4 = sub_4175e0(eax_3, lpFileName_1, &var_68, &(*U"\\\\")[3])
                var_84_1.b = 1
                var_84_1.b = 2
                int32_t* eax_6 = sub_4175e0(sub_417750(eax_4, eax_4, &var_38, esi_1), var_94, 
                    &var_20, &(*\\\\")[1])
                var_84_1.b = 3
                char var_50
                sub_417750(eax_6, eax_6, &var_50, esi_1)
                var_84_1.b = 4
                char* ebx
                ebx.b = sub_6812e0(eax_2) == 0
                int32_t var_3c
                
                if (var_3c u>= 0x10)
                    sub_403160(var_50.d, var_3c + 1, 1)
                
                var_3c = 0xf
                var_40 = 0
                var_50 = 0
                
                if (var_c u>= 0x10)
                    sub_403160(var_20.d, var_c + 1, 1)
                
                var_c = 0xf
                int32_t var_10_1 = 0
                var_20 = 0
                
                if (var_24 u>= 0x10)
                    sub_403160(var_38.d, var_24 + 1, 1)
                
                var_84_1.b = 0
                eax_3 = var_54
                var_24 = 0xf
                int32_t var_28_1 = 0
                var_38 = 0
                
                if (eax_3 u>= 0x10)
                    eax_3 = sub_403160(var_68, eax_3 + 1, 1)
                
                if (ebx.b != 0)
                    break
                
                lpFileName_1 = lpFileName_2
                esi_1 = &esi_1[6]
                
                if (esi_1 == var_9c)
                    goto label_681477
            
            sub_417070(&var_a0)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
