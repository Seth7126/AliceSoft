// 函数: sub_57e5a0
// 地址: 0x57e5a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6f11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_4c = ebp
char* result = arg2
int32_t var_40 = 0
char* result_1 = result
char* result_2 = result
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
int32_t var_4 = 0
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x38e38e39, *(ebp + 0x5c) - *(ebp + 0x58))
int32_t var_40_1 = 1
int32_t edx_1 = edx s>> 3
int32_t var_74 = (edx_1 u>> 0x1f) + edx_1
int32_t var_4_1 = 1
int32_t var_2c
sub_403110(result, sub_4691f0(&var_2c, 0x6e53d8), nullptr, 0xffffffff)
var_4_1.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t eax_10
int32_t edx_2
edx_2:eax_10 = muls.dp.d(0x2aaaaaab, *(ebp + 0x68) - *(ebp + 0x64))
int32_t edx_3 = edx_2 s>> 2
int32_t var_74_2 = (edx_3 u>> 0x1f) + edx_3
int32_t var_4_2 = 2
sub_403110(result, sub_4691f0(&var_2c, 0x6e53c8), nullptr, 0xffffffff)
var_4_2.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t var_74_4 = (*(ebp + 0x44) - *(ebp + 0x40)) s/ 0x3c
int32_t var_4_3 = 3
sub_403110(result, sub_4691f0(&var_2c, 0x6e53b8), nullptr, 0xffffffff)
var_4_3.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

sub_4057c0(result, 0x6e53b4, 1)
int32_t var_74_6 = (*(ebp + 0x50) - *(ebp + 0x4c)) s>> 2
int32_t var_4_4 = 4
sub_403110(result, sub_4691f0(&var_2c, 0x6e539c), nullptr, 0xffffffff)
var_4_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c)

int32_t* ebx = *(ebp + 0x4c)
int32_t* var_50 = ebx

if (ebx != *(ebp + 0x50))
    while (true)
        void* esi_1 = *ebx
        int32_t var_74_8 = (ebx - *(ebp + 0x4c)) s>> 2
        int32_t var_4_5 = 5
        sub_403110(result, sub_4691f0(&var_2c, "[%3d]"), nullptr, 0xffffffff)
        var_4_5.b = 0
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        if (*ebx != 0)
            var_5c = nullptr
            int32_t var_58_1 = 0
            var_5c = sub_4a6eb0()
            int32_t var_4_6 = 6
            void* i = *(esi_1 + 0x28)
            
            if (i != *(esi_1 + 0x2c))
                int32_t ecx_13 = *(ebp + 0x58)
                
                do
                    int32_t j_1 = 3
                    int32_t* ebp_1 = i + 8
                    int32_t j_2 = 3
                    int32_t j
                    
                    do
                        int32_t eax_29 = *ebp_1
                        int32_t k = *(ecx_13 + eax_29 * 0x24 + 0xc)
                        
                        if (k != *(ecx_13 + eax_29 * 0x24 + 0x10))
                            do
                                uint32_t var_74_10 = zx.d(data_75dd2a)
                                int32_t k_1 = k
                                int32_t** var_34
                                sub_4ce350(&var_5c, &var_34, ecx_13)
                                k += 4
                                ecx_13 = *(var_4c + 0x58)
                            while (k != *(ecx_13 + *ebp_1 * 0x24 + 0x10))
                            
                            j_1 = j_2
                        
                        ebp_1 = &ebp_1[0xf]
                        j = j_1
                        j_1 -= 1
                        j_2 = j_1
                    while (j != 1)
                    i += 0xbc
                while (i != *(esi_1 + 0x2c))
                
                ebx = var_50
                ebp = var_4c
            
            void* eax_36 = *(esi_1 + 0x28)
            int32_t edx_9
            
            if (eax_36 != *(esi_1 + 0x2c))
                while (true)
                    edx_9 = 0
                    void* ecx_17 = eax_36 + 0x28
                    
                    while (true)
                        int32_t xmm0_1 = *(ecx_17 - 4)
                        
                        if (not(0 f>= xmm0_1) && not(xmm0_1 f>= 1f))
                            int32_t xmm0_2 = *ecx_17
                            
                            if (not(0 f>= xmm0_2) && not(xmm0_2 f>= 1f))
                                edx_9 += 1
                                ecx_17 += 0x3c
                                
                                if (edx_9 s>= 3)
                                    break
                                
                                continue
                        
                        eax_36.b = 1
                        goto label_57e906
                    
                    eax_36 += 0xbc
                    
                    if (eax_36 == *(esi_1 + 0x2c))
                        break
            
            eax_36.b = 0
        label_57e906:
            void* ecx_18 = esi_1 + 4
            edx_9.b = *(esi_1 + 0x26)
            edx_9:1.b = *(esi_1 + 0x73)
            
            if (*(esi_1 + 0x18) u>= 0x10)
                ecx_18 = *ecx_18
            
            int32_t var_74_11 = (*(esi_1 + 0x2c) - *(esi_1 + 0x28)) s/ 0xbc
            int32_t var_78_1 = var_58_1
            uint32_t var_7c_11 = zx.d(eax_36.b)
            uint32_t var_80_2 = zx.d(edx_9.b)
            uint32_t var_84_1 = zx.d(edx_9:1.b)
            int32_t var_88_1 = *(esi_1 + 0x20)
            int32_t var_8c_1 = *(esi_1 + 0x1c)
            int32_t var_90_1 = *(esi_1 + 0x78)
            void* var_94_1 = ecx_18
            var_4_6.b = 7
            result = result_1
            sub_403110(result, sub_4691f0(&var_2c, " "%s" "), nullptr, 0xffffffff)
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
            
            var_4_6.b = 0
            int32_t* eax_41 = var_5c
            void var_38
            sub_4200d0(&var_5c, &var_38, *eax_41, eax_41)
            j__free(var_5c)
        else
            sub_4057c0(result, 0x6e5324, 1)
        
        ebx = &ebx[1]
        var_50 = ebx
        
        if (ebx == *(ebp + 0x50))
            break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
