// 函数: sub_4da400
// 地址: 0x4da400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bfb2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2
result_1 = result
char* edi = arg1
char* var_98 = edi

if (edi != result)
    void** ebx_1 = &edi[0x84]
    void** var_9c_1 = ebx_1
    
    if (ebx_1 != result)
        void* ebp_1 = &ebx_1[-0x13]
        
        do
            int32_t var_80_1 = 0xf
            void* esi_1 = ebx_1
            int32_t var_84_1 = 0
            char var_94 = 0
            sub_401ff0(&var_94, ebx_1, 0, 0xffffffff)
            int32_t var_4 = 0
            int32_t var_68_1 = 0xf
            int32_t var_6c_1 = 0
            char var_7c = 0
            sub_401ff0(&var_7c, ebp_1 + 0x64, 0, 0xffffffff)
            var_4.b = 1
            int32_t i_1
            sub_4bf370(&i_1, ebp_1 + 0x7c)
            int32_t var_4_1 = 2
            int32_t i = i_1
            
            if (i s>= *(edi + 0x30))
                void* ebx_2 = ebp_1 - 0x38
                
                if (i s< *(ebp_1 - 8))
                    void* edi_1 = ebp_1
                    
                    do
                        if (esi_1 != ebx_2)
                            sub_401ff0(esi_1, ebx_2, 0, 0xffffffff)
                        
                        if (esi_1 + 0x18 != edi_1 - 0x20)
                            sub_401ff0(esi_1 + 0x18, edi_1 - 0x20, 0, 0xffffffff)
                        
                        *(esi_1 + 0x30) = *(edi_1 - 8)
                        *(esi_1 + 0x34) = *(edi_1 - 4)
                        
                        if (esi_1 + 0x38 != edi_1)
                            sub_401ff0(esi_1 + 0x38, edi_1, 0, 0xffffffff)
                        
                        if (esi_1 + 0x50 != edi_1 + 0x18)
                            sub_401ff0(esi_1 + 0x50, edi_1 + 0x18, 0, 0xffffffff)
                        
                        int32_t* eax_12
                        eax_12.b = *(edi_1 + 0x30)
                        *(esi_1 + 0x68) = eax_12.b
                        sub_4bf960(esi_1 + 0x6c, edi_1 + 0x34)
                        sub_4a6db0(esi_1 + 0x78, edi_1 + 0x40)
                        i = i_1
                        edi_1 -= 0x84
                        esi_1 = ebx_2
                        ebx_2 -= 0x84
                    while (i s< *(edi_1 - 8))
                    
                    edi = var_98
                
                if (esi_1 != &var_94)
                    sub_401ff0(esi_1, &var_94, 0, 0xffffffff)
                    i = i_1
                
                if (esi_1 + 0x18 != &var_7c)
                    sub_401ff0(esi_1 + 0x18, &var_7c, 0, 0xffffffff)
                    i = i_1
                
                *(esi_1 + 0x30) = i
                int32_t var_60
                *(esi_1 + 0x34) = var_60
                void* var_5c
                
                if (esi_1 + 0x38 != &var_5c)
                    sub_401ff0(esi_1 + 0x38, &var_5c, 0, 0xffffffff)
                
                void* var_44
                
                if (esi_1 + 0x50 != &var_44)
                    sub_401ff0(esi_1 + 0x50, &var_44, 0, 0xffffffff)
                
                char var_2c
                *(esi_1 + 0x68) = var_2c
                void var_28
                sub_4bf960(esi_1 + 0x6c, &var_28)
                void var_1c
                sub_4a6db0(esi_1 + 0x78, &var_1c)
                ebx_1 = var_9c_1
            else
                int32_t result_2 = result_1
                sub_4dabf0(ebp_1 + 0xd0, ebx_1, edi, ebp_1 + 0xd0)
                
                if (edi != &var_94)
                    sub_401ff0(edi, &var_94, 0, 0xffffffff)
                
                if (&edi[0x18] != &var_7c)
                    sub_401ff0(&edi[0x18], &var_7c, 0, 0xffffffff)
                
                sub_4bf900(&edi[0x30], &i_1)
            
            int32_t var_4_2 = 0xffffffff
            result = sub_4b7cf0(&i_1)
            
            if (var_68_1 u>= 0x10)
                result = j__free(var_7c.d)
            
            int32_t var_68_2 = 0xf
            int32_t var_6c_2 = 0
            var_7c = 0
            
            if (var_80_1 u>= 0x10)
                result = j__free(var_94.d)
            
            ebx_1 = &ebx_1[0x21]
            ebp_1 += 0x84
            var_9c_1 = ebx_1
        while (ebx_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
