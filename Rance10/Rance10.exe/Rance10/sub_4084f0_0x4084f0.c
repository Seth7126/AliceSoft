// 函数: sub_4084f0
// 地址: 0x4084f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MAEHH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg1[7]

for (int32_t* i = arg1[6]; i != edi; i = &i[0xf])
    sub_408350(i)

int32_t* lpFileName_1 = arg1
arg1[7] = arg1[6]
PSTR lpFileName

if (lpFileName_1[5] u< 0x10)
    lpFileName = lpFileName_1
else
    lpFileName = *lpFileName_1

uint32_t result = GetFileAttributesA(lpFileName)

if (result != 0xffffffff)
    result.b = not.b((result u>> 4).b)
    result.b &= 1
    
    if (result.b != 0)
        char* var_b0 = nullptr
        int32_t var_ac_1 = 0
        int32_t var_a8_1 = 0
        int32_t var_8_1 = 0
        result = sub_67edf0(lpFileName_1, &var_b0)
        char* edx_2 = var_b0
        
        if (result.b != 0)
            result.b = edx_2 == var_ac_1
            
            if (result.b == 0)
                uint32_t result_1 = 0xf
                int32_t var_4c_1 = 0
                char var_5c = 0
                void* eax_4 = var_ac_1
                
                if (edx_2 != eax_4)
                    sub_403490(&var_5c, edx_2, eax_4 - edx_2)
                
                var_8_1.b = 1
                void var_8c
                sub_409170(&var_8c, "\r\n", U"\n")
                var_8_1.b = 2
                int32_t var_d8_2 = 0.d
                int32_t var_c4 = 0
                int32_t var_c0_1 = 0
                int32_t var_bc_1 = 0
                sub_409490(&var_c4, &var_8c, &var_5c)
                var_8_1.b = 3
                int32_t* var_44
                sub_6ca500(&var_c4, &var_5c, &var_44, &var_c4)
                sub_408f50(&var_c4)
                var_8_1.b = 6
                `eh vector vbase constructor iterator'(&var_8c, 0x30, 1, sub_408940)
                void* edx_4 = nullptr
                int32_t var_18_1 = 0xf
                void* var_1c_1 = nullptr
                char var_2c = 0
                var_8_1.b = 7
                int32_t* ecx_9 = &var_44
                int32_t* edi_1 = &var_44
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    ecx_9 = var_44
                
                if (var_30 u>= 0x10)
                    edi_1 = var_44
                
                void* var_34
                void* ebx_2 = var_34 + ecx_9
                char var_a0_1
                var_a0_1.d = 0
                
                if (edi_1 != ebx_2)
                    while (true)
                        ecx_9.b = *edi_1
                        char var_99_1 = ecx_9.b
                        void* eax_7
                        
                        if (ecx_9.b == 0xa)
                            int32_t ecx_12 = var_a0_1.d
                            ecx_9 = ecx_12 s% 5
                            
                            if (ecx_12 == ecx_12 s/ 5 * 5)
                                int32_t* var_88_1 = ecx_9
                                char var_98 = ecx_9.b
                                int32_t var_84_1 = 0xf
                                sub_403590(&var_98, &var_2c, ecx_9, 0xffffffff)
                                int32_t var_60_1 = 0
                                int64_t var_80_1 = 0
                                int32_t var_64_1 = 0xf
                                int32_t var_68_1 = 0
                                char var_78_1 = 0
                                var_8_1.b = 8
                                sub_408dc0(&lpFileName_1[6], &var_98)
                                var_8_1.b = 7
                                sub_408350(&var_98)
                            label_408859:
                                var_a0_1.d += 1
                                eax_7 = &var_2c
                                var_1c_1 = nullptr
                                
                                if (var_18_1 u>= 0x10)
                                    eax_7 = var_2c.d
                                
                                *eax_7 = 0
                            else if (ecx_9 != 1)
                                if (ecx_9 == 2)
                                    void* esi = lpFileName_1[7]
                                    bool eax_16
                                    eax_16, ecx_9 = sub_407560(&var_2c, 0x75cd38)
                                    *(esi - 0x20) = eax_16 == 0
                                    lpFileName_1 = arg1
                                    goto label_408859
                                
                                if (ecx_9 == 3)
                                    ecx_9 = lpFileName_1[7] - 0x1c
                                    
                                    if (ecx_9 != &var_2c)
                                        sub_403590(ecx_9, &var_2c, 0, 0xffffffff)
                                    
                                    goto label_408859
                                
                                if (ecx_9 != 4)
                                    goto label_408859
                                
                                eax_7, ecx_9 = sub_6ca340(&var_2c)
                                
                                if (eax_7.b != 0)
                                    int32_t* var_b8
                                    *(lpFileName_1[7] - 4) = var_b8
                                    goto label_408859
                            else
                                int32_t var_b4
                                int32_t* var_d8_6 = &var_b4
                                char* eax_14 = &var_2c
                                
                                if (var_18_1 u>= 0x10)
                                    eax_14 = var_2c.d
                                
                                eax_7, ecx_9 = sub_6ca310(eax_14, 0x7942e0)
                                
                                if (eax_7 == 1)
                                    *(lpFileName_1[7] - 0x24) = var_b4 - 1
                                    goto label_408859
                        else
                            if (edx_4 == var_18_1)
                                if (edx_4 + 1 u> 0xfffffffe)
                                    sub_6d0927("string too long")
                                    noreturn
                                
                                if (var_18_1 u< edx_4 + 1)
                                    sub_403830(&var_2c, edx_4 + 1, edx_4)
                                    edx_4 = var_1c_1
                                else if (edx_4 == 0xffffffff)
                                    var_1c_1 = edx_4 + 1
                                    eax_7 = &var_2c
                                    
                                    if (var_18_1 u>= 0x10)
                                        eax_7 = var_2c.d
                                    
                                    *eax_7 = 0
                                    edx_4 = var_1c_1
                            
                            ecx_9 = &var_2c
                            eax_7.b = var_99_1
                            
                            if (var_18_1 u>= 0x10)
                                ecx_9 = var_2c.d
                            
                            *(ecx_9 + edx_4) = eax_7.b
                            eax_7 = var_1c_1 + 1
                            var_1c_1 = eax_7
                            *(ecx_9 + eax_7) = 0
                        edi_1 += 1
                        
                        if (edi_1 == ebx_2)
                            break
                        
                        edx_4 = var_1c_1
                    
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44, var_30 + 1, 1)
                
                result = result_1
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                var_44.b = 0
                
                if (result u>= 0x10)
                    result = sub_403160(var_5c.d, result + 1, 1)
                
                edx_2 = var_b0
                int32_t var_48_1 = 0xf
                int32_t var_4c_2 = 0
                var_5c = 0
        
        if (edx_2 != 0)
            result = sub_403160(edx_2, var_a8_1 - edx_2, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
