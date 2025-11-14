// 函数: sub_53af00
// 地址: 0x53af00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bed40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1 + 4
void** edi = arg2
void** ebp = arg3
int32_t* i = *ecx
int32_t* var_48 = ecx

if (i != *(arg1 + 8))
    do
        int32_t* ecx_1 = *i
        
        if (ecx_1 != 0)
            sub_53a360(ecx_1)
        
        i = &i[1]
    while (i != *(arg1 + 8))
    
    ecx = var_48

ecx[1] = *ecx
enum MESSAGEBOX_RESULT result

if (edi[4] == 0)
    result.b = 1
else
    void* esi_1 = arg4
    int32_t* result_2
    int32_t ecx_3
    int32_t edx_1
    result_2, ecx_3, edx_1 = sub_53b690(esi_1, edi, ebp, 1)
    
    if (result_2 != 0)
        int32_t result_1 = result_2
        sub_412de0(var_48, &result_1)
        int32_t ebx_1 = 1
        char var_44
        int32_t var_30
        int32_t var_2c
        int32_t var_18
        
        while (true)
            sub_53b190(&var_2c, edi, ebx_1)
            int32_t var_4 = 0
            sub_53b190(&var_44, ebp, ebx_1)
            var_4.b = 1
            void* esi_2 = *(esi_1 + 0x18)
            
            if (esi_2 == 0)
                break
            
            if (sub_590700(esi_2, &var_2c).b == 0 && sub_525610(esi_2 + 0x30, &var_2c).b == 0)
                break
            
            int32_t var_34
            
            if (var_34 != 0)
                void* esi_4 = *(arg4 + 0x18)
                
                if (esi_4 == 0)
                    break
                
                if (sub_590700(esi_4, &var_44) == 0 && sub_525610(esi_4 + 0x30, &var_44).b == 0)
                    break
            
            esi_1 = arg4
            result = sub_53b690(esi_1, &var_2c, &var_44, 1)
            
            if (result == 0)
                break
            
            result_1 = result
            sub_412de0(var_48, &result_1)
            
            if (var_30 u>= 0x10)
                j__free(var_44.d)
            
            int32_t var_4_1 = 0xffffffff
            var_30 = 0xf
            var_34 = 0
            var_44 = 0
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            ebx_1 += 1
        
        if (var_30 u>= 0x10)
            j__free(var_44.d)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        result.b = 1
    else if (ebp[4] == result_2)
        if (edi[5] u>= 0x10)
            edi = *edi
        
        sub_59f4e0(result_2, edx_1, ecx_3, 0x6e3820, edi)
        result.b = 0
    else
        if (ebp[5] u>= 0x10)
            ebp = *ebp
        
        if (edi[5] u>= 0x10)
            edi = *edi
        
        void** var_6c_1 = ebp
        sub_59f4e0(result_2, edx_1, ecx_3, 0x6e3850, edi)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
