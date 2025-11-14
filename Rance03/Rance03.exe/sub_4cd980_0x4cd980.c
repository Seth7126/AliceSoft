// 函数: sub_4cd980
// 地址: 0x4cd980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6beec8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t __saved_edi
int32_t var_a0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg6
void* var_88 = arg5
void* var_84 = ebp
int32_t* result

if (ebp != 0)
    int32_t eax_5 = sub_4e7cb0(ebp + 0x128)
    char var_74
    int32_t* eax_6 = sub_410930(eax_5, arg2, &var_74, U".")
    int32_t var_4 = 0
    void* var_44
    sub_410ad0(eax_6, eax_6, &var_44, arg3)
    var_4.b = 2
    int32_t var_60
    
    if (var_60 u>= 0x10)
        j__free(var_74.d)
    
    void* esi_1 = arg1
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    result = sub_4cc490(esi_1, var_88, ebp, eax_5, arg3, &var_44)
    void* ebx_1
    
    if (result.b != 0)
        void** var_5c
        sub_410930(result, &var_44, &var_5c, 0x6e1810)
        var_4.b = 3
        int32_t* ecx_5 = *(var_88 + 4)
        int32_t* result_1
        int32_t var_48
        
        if (ecx_5 != 0)
            void** edx_4 = &var_5c
            
            if (var_48 u>= 0x10)
                edx_4 = var_5c
            
            result = (*(*ecx_5 + 0x10))(edx_4)
            ebx_1 = nullptr
            result_1 = result
        
        if (ecx_5 == 0 || result s<= 0)
        label_4cdbf5:
            ebx_1.b = 1
        else
            while (true)
                var_4.b = 4
                var_4.b = 5
                var_4.b = 4
                int32_t var_2c
                result.b = sub_4cd980(
                    sub_410930(sub_401d70(var_88, &var_74, &var_5c, ebx_1), &var_44, &var_2c, 
                        0x6e1820), 
                    &var_74, arg4, var_88, ebp).b == 0
                char var_89_1 = result.b
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
                    result.b = var_89_1
                
                if (result.b != 0)
                    if (var_60_1 u>= 0x10)
                        j__free(var_74.d)
                    
                    ebx_1.b = 0
                    break
                
                int32_t eax_10 = sub_4c98e0(esi_1, &var_74)
                int32_t var_a4_9 = eax_5
                struct partsengine::CPartsList::VTable** eax_11 = sub_4a52a0(var_84 + 0x104)
                int32_t esi_2
                
                if (eax_11 != 0)
                    esi_2 = eax_11[2]
                
                struct IInterface::VTable** vFunc_0
                
                if (eax_11 == 0 || eax_5 s< esi_2 || eax_11[1] + esi_2 s<= eax_5)
                    vFunc_0 = nullptr
                else
                    vFunc_0 = eax_11[3][eax_5 - esi_2].vFunc_0
                    
                    if (vFunc_0 == 0)
                        vFunc_0 = sub_4e7720(eax_11, eax_5)
                
                if (sub_4a67c0(&vFunc_0[0x13], eax_10).b != 0)
                    void* esi_4 = vFunc_0[0x16]
                    int32_t var_7c = eax_10
                    sub_4b7b70(esi_4, eax_10)
                    sub_4158d0(esi_4 + 0x94, &var_7c)
                    *(esi_4 + 4) = 1
                
                var_4.b = 3
                
                if (var_60_1 u>= 0x10)
                    j__free(var_74.d)
                
                ebp = var_84
                ebx_1 += 1
                esi_1 = arg1
                
                if (ebx_1 s>= result_1)
                    goto label_4cdbf5
        
        if (var_48 u>= 0x10)
            j__free(var_5c)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c.b = 0
    else
        ebx_1.b = 0
    
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    result.b = ebx_1.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_8c)
return result
