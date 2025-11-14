// 函数: sub_4c0b40
// 地址: 0x4c0b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be178
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2
result_1 = result
int32_t* ebx = arg1
int32_t* var_70 = ebx

if (ebx != result)
    int32_t* esi_1 = &ebx[0x17]
    int32_t* var_74_1 = esi_1
    
    if (esi_1 != result)
        void* ebp_1 = &esi_1[-0x13]
        
        do
            int32_t eax_5 = *esi_1
            int32_t* edi_1 = esi_1
            int32_t eax_6 = *(ebp_1 + 0x50)
            int32_t i_1
            sub_4bf370(&i_1, ebp_1 + 0x54)
            int32_t var_4 = 0
            int32_t i = i_1
            
            if (i s>= ebx[2])
                void* ebx_1 = ebp_1 - 0x10
                
                if (i s< *(ebp_1 - 8))
                    void* esi_2 = ebp_1
                    
                    do
                        *edi_1 = *ebx_1
                        edi_1[1] = *(esi_2 - 0xc)
                        edi_1[2] = *(esi_2 - 8)
                        edi_1[3] = *(esi_2 - 4)
                        
                        if (&edi_1[4] != esi_2)
                            sub_401ff0(&edi_1[4], esi_2, 0, 0xffffffff)
                        
                        if (&edi_1[0xa] != esi_2 + 0x18)
                            sub_401ff0(&edi_1[0xa], esi_2 + 0x18, 0, 0xffffffff)
                        
                        int32_t* eax_15
                        eax_15.b = *(esi_2 + 0x30)
                        edi_1[0x10].b = eax_15.b
                        sub_4bf960(&edi_1[0x11], esi_2 + 0x34)
                        sub_4a6db0(&edi_1[0x14], esi_2 + 0x40)
                        i = i_1
                        esi_2 -= 0x5c
                        edi_1 = ebx_1
                        ebx_1 -= 0x5c
                    while (i s< *(esi_2 - 8))
                    
                    esi_1 = var_74_1
                
                *edi_1 = eax_5
                edi_1[1] = eax_6
                edi_1[2] = i
                int32_t var_60
                edi_1[3] = var_60
                void* var_5c
                
                if (&edi_1[4] != &var_5c)
                    sub_401ff0(&edi_1[4], &var_5c, 0, 0xffffffff)
                
                void* var_44
                
                if (&edi_1[0xa] != &var_44)
                    sub_401ff0(&edi_1[0xa], &var_44, 0, 0xffffffff)
                
                char var_2c
                edi_1[0x10].b = var_2c
                void var_28
                sub_4bf960(&edi_1[0x11], &var_28)
                void var_1c
                sub_4a6db0(&edi_1[0x14], &var_1c)
                ebx = var_70
            else
                int32_t result_2 = result_1
                sub_4c1950(ebp_1 + 0xa8, esi_1, ebx, ebp_1 + 0xa8)
                *ebx = eax_5
                ebx[1] = eax_6
                sub_4bf900(&ebx[2], &i_1)
            
            int32_t var_4_1 = 0xffffffff
            result = sub_4b7cf0(&i_1)
            esi_1 = &esi_1[0x17]
            ebp_1 += 0x5c
            var_74_1 = esi_1
        while (esi_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_1)
return result
