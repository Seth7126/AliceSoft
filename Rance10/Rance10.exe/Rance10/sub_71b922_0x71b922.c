// 函数: sub_71b922
// 地址: 0x71b922
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    *__errno() = 0x16
    return 0xffffffff

int32_t edi
int32_t var_1c_1 = edi
char* edi_1 = arg1
void* eax_2 = _strchr(arg1, 0x3d)
void* var_10_1 = eax_2
int32_t result

if (eax_2 == 0 || eax_2 == arg1)
    *__errno() = 0x16
    result = 0xffffffff
else
    void* esi_1 = data_7fc6d0
    eax_2.b = *(eax_2 + 1) == 0
    char var_5_1 = eax_2.b
    
    if (esi_1 == data_7fc6dc)
        esi_1 = sub_71bb5d(esi_1)
        eax_2.b = var_5_1
        data_7fc6d0 = esi_1
    
    result = 0
    
    if (esi_1 != 0)
    label_71ba26:
        int32_t eax_9 = find_in_environment_nolock<char>(edi_1, var_10_1 - edi_1)
        char* eax_10
        int32_t esi_2
        
        if (eax_9 s>= 0 && *esi_1 != 0)
            __free_base(*(esi_1 + (eax_9 << 2)))
            int32_t ecx_6 = eax_9
            
            if (var_5_1 != 0)
                while (*(esi_1 + (ecx_6 << 2)) != 0)
                    *(esi_1 + (ecx_6 << 2)) = *(esi_1 + (ecx_6 << 2) + 4)
                    ecx_6 += 1
                
                int32_t var_20_5 = 4
                int32_t var_24_3 = ecx_6
                void* var_28_1 = esi_1
                esi_2 = sub_71bc6d()
                __free_base(0)
                eax_10 = edi_1
                
                if (esi_2 != 0)
                    goto label_71bacc
            else
                eax_10 = arg1
                edi_1 = nullptr
                *(esi_1 + (ecx_6 << 2)) = eax_10
            
        label_71bad2:
            
            if (arg2 != 0)
                char* ecx_9 = eax_10
                void* edx_1 = &ecx_9[1]
                
                do
                    eax_10.b = *ecx_9
                    ecx_9 = &ecx_9[1]
                while (eax_10.b != 0)
                
                PSTR lpName = __calloc_base(ecx_9 - edx_1 + 2, 1)
                
                if (lpName != 0)
                    if (_strcpy_s(lpName, ecx_9 - edx_1 + 2, arg1) != 0)
                        int32_t var_30
                        __builtin_memset(&var_30, 0, 0x14)
                        __invoke_watson()
                        noreturn
                    
                    void* ecx_14 = var_10_1 + 1 + lpName - arg1
                    uint32_t eax_19 = zx.d(var_5_1)
                    int32_t eax_20 = neg.d(eax_19)
                    *(ecx_14 - 1) = 0
                    
                    if (SetEnvironmentVariableA(lpName, 
                            not.d(sbb.d(eax_20, eax_20, eax_19 != 0)) & ecx_14) == 0)
                        result = 0xffffffff
                        *__errno() = 0x2a
                
                __free_base(lpName)
        else if (var_5_1 == 0)
            int32_t eax_13 = neg.d(eax_9)
            
            if (eax_13 + 2 u< eax_13 || eax_13 + 2 u>= 0x3fffffff)
                result = 0xffffffff
            else
                int32_t var_20_6 = 4
                int32_t var_24_4 = eax_13 + 2
                void* var_28_2 = esi_1
                esi_2 = sub_71bc6d()
                __free_base(0)
                
                if (esi_2 != 0)
                    edi_1 = nullptr
                    eax_10 = arg1
                    *(esi_2 + (eax_13 << 2)) = eax_10
                    *(esi_2 + (eax_13 << 2) + 4) = 0
                label_71bacc:
                    data_7fc6d0 = esi_2
                    goto label_71bad2
                
                result = 0xffffffff
    else if (arg2 != 0 && data_7fc6d4 != 0)
        if (j_sub_710b41() != 0)
        label_71ba13:
            esi_1 = data_7fc6d0
        label_71ba19:
            
            if (esi_1 != 0)
                goto label_71ba26
            
            result = 0xffffffff
        else
            *__errno() = 0x16
            result = 0xffffffff
    else if (eax_2.b == 0)
        data_7fc6d0 = __calloc_base(1, 4)
        __free_base(0)
        esi_1 = data_7fc6d0
        
        if (esi_1 == 0)
            result = 0xffffffff
        else
            if (data_7fc6d4 != 0)
                goto label_71ba19
            
            data_7fc6d4 = __calloc_base(1, 4)
            __free_base(0)
            
            if (data_7fc6d4 != 0)
                goto label_71ba13
            
            result = 0xffffffff
    else
        result = 0

__free_base(edi_1)
return result
