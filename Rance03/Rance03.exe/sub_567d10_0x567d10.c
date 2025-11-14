// 函数: sub_567d10
// 地址: 0x567d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5748
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void** edx = arg2
void* var_48 = esi
int32_t result

if (((arg3[1] - *arg3) & 0xffffffe0) s<= 0)
    result.b = 1
else
    if (edx[5] u>= 0x10)
        edx = *edx
    
    void** var_68_1 = edx
    int32_t* var_40
    void** ecx_1 = sub_4691f0(&var_40, "\t%s =\r\n")
    int32_t var_4 = 0
    int32_t eax_7 = ecx_1[5]
    int32_t ebp_1 = ecx_1[4]
    void** edx_1
    
    if (eax_7 u< 0x10)
        edx_1 = ecx_1
    else
        edx_1 = *ecx_1
    
    if (eax_7 u>= 0x10)
        ecx_1 = *ecx_1
    
    int32_t* ebx_1 = esi + 4
    int32_t* var_68_2 = ebx_1
    int32_t ecx_3 = sub_468ff0(ebx_1, *(esi + 8), ecx_1, edx_1 + ebp_1)
    int32_t var_4_1 = 0xffffffff
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        ecx_3 = j__free(var_40)
    
    int32_t ebx_2 = 0
    
    if (((arg3[1] - *arg3) & 0xffffffe0) s<= 0)
    label_567eae:
        int32_t var_14_1 = 0xf
        int32_t var_18_1 = 0
        char var_28 = 0
        sub_402110(&var_28, "\r\n\r\n", 4)
        int32_t var_4_4 = 2
        char* esi_2 = &var_28
        int32_t* edx_3 = &var_28
        int32_t* var_68_7 = ebx_1
        
        if (var_14_1 u>= 0x10)
            esi_2 = var_28.d
        
        if (var_14_1 u>= 0x10)
            edx_3 = var_28.d
        
        sub_468ff0(ebx_1, *(var_48 + 8), edx_3, &esi_2[var_18_1])
        
        if (var_14_1 u>= 0x10)
            j__free(var_28.d)
        
        result.b = 1
    else
        int32_t ebp_2 = 0
        
        while (true)
            int32_t var_68_4 = ecx_3
            result, ecx_3 = sub_568930(esi, *arg3 + ebp_2)
            
            if (result.b == 0)
                result.b = 0
                break
            
            if (ebx_2 s< ((arg3[1] - *arg3) s>> 5) - 1)
                int32_t var_2c_1 = 0xf
                void* var_30_1 = nullptr
                var_40.b = 0
                sub_402110(&var_40, 0x6e5090, 3)
                int32_t var_4_2 = 1
                int32_t* esi_1 = &var_40
                int32_t* edx_2 = &var_40
                int32_t* var_68_5 = ebx_1
                
                if (var_2c_1 u>= 0x10)
                    esi_1 = var_40
                
                if (var_2c_1 u>= 0x10)
                    edx_2 = var_40
                
                esi = var_48
                ecx_3 = sub_468ff0(esi + 4, *(esi + 8), edx_2, var_30_1 + esi_1)
                int32_t var_4_3 = 0xffffffff
                
                if (var_2c_1 u>= 0x10)
                    ecx_3 = j__free(var_40)
            
            ebx_2 += 1
            ebp_2 += 0x20
            
            if (ebx_2 s>= (arg3[1] - *arg3) s>> 5)
                goto label_567eae

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
