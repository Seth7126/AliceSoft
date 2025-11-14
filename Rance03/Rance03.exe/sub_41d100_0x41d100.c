// 函数: sub_41d100
// 地址: 0x41d100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_4218f0(arg1 + 0x10, &result_1)
sub_4218f0(arg1 + 0x4c, &result_1)
sub_4218f0(arg1 + 0x88, &result_1)
int32_t* eax_3 = *(arg1 + 8)
int32_t* i = *eax_3

if (i != eax_3)
    do
        void* edi_1 = i[5]
        
        if (edi_1 != 0)
            if (*(edi_1 + 0x30) u>= 0x10)
                j__free(*(edi_1 + 0x1c))
            
            *(edi_1 + 0x30) = 0xf
            *(edi_1 + 0x2c) = 0
            *(edi_1 + 0x1c) = 0
            
            if (*(edi_1 + 0x18) u>= 0x10)
                j__free(*(edi_1 + 4))
            
            *(edi_1 + 0x18) = 0xf
            *(edi_1 + 0x14) = 0
            *(edi_1 + 4) = 0
            j__free(edi_1)
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(arg1 + 8))

void** edi_2 = *(*(arg1 + 8) + 4)
void** esi_1 = edi_2

if (*(edi_2 + 0xd) == 0)
    do
        sub_420090(esi_1[2])
        esi_1 = *esi_1
        j__free(edi_2)
        edi_2 = esi_1
    while (*(esi_1 + 0xd) == 0)

void* eax_5 = *(arg1 + 8)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 8)
*eax_6 = eax_6
void* eax_7 = *(arg1 + 8)
*(eax_7 + 8) = eax_7
int32_t result = result_1
*(arg1 + 0xc) = 0

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
